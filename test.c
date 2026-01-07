#include <stdio.h>
#include <omp.h>

int main() {
    int a[50];
    #pragma omp parallel for
    //printf("Hello from thread %d out of %d\n", omp_get_thread_num(), omp_get_num_threads());
    for(int i = 0; i < 50; i++) {
        a[i]=i*i;
        printf("Thread %d did iteration %d\n", omp_get_thread_num(), i);
    }

    return 0;
}