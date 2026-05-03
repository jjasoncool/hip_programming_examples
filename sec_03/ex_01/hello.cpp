#include <hip/hip_runtime.h>
#include <cstdio>

__global__ void gpuHello() {
    int tid = blockIdx.x * blockDim.x + threadIdx.x;
    printf("Hello World from thread %d\n", tid);
}

int main() {
    gpuHello<<<4, 4>>>();

    // 講義原本是: hipDeviceSynchronize();
    // 修正原因: HIP runtime 將此函式標記為 [[nodiscard]]，
    //         必須檢查回傳的 hipError_t，否則編譯器會警告。
    //         GPU 操作是非同步的，錯誤通常在 sync 點才會浮現，
    //         所以檢查 sync 的回傳值是 GPU 程式設計的重要習慣。
    hipError_t err = hipDeviceSynchronize();
    if (err != hipSuccess) {
        fprintf(stderr, "hipDeviceSynchronize failed: %s\n",
                hipGetErrorString(err));
        return 1;
    }

    return 0;
}
