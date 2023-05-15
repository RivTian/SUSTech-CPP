#include <stdio.h>
#include <stdlib.h>

void foo() {
    // p 是局部变量，必须在函数结束前释放
    int *p = (int *) malloc(sizeof(int));
    return;
} //memory leak

int main() {
    int *p = NULL;

    p = (int *) malloc(4 * sizeof(int));
    // some statements
    p = (int *) malloc(8 * sizeof(int));
    // some statements
    free(p);
    // the first memory will not be freed
    // 第一次分配的内存就释放不了

    for (int i = 0; i < 1024; i++) {
        p = (int *) malloc(1024 * 1024 * 1024);
    }
    printf("End\n");

    return 0;
}