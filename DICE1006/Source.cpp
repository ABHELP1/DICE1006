#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int* a, int* b, int* c, int* d);
int main() {
    int n;
    scanf("%d\n", &n);
    int output[50];
    for (int i = 0; i < n; i++) {
        int a[6] = { 1,2,3,5,4,6 };
        char order = '\0';
        while (order != '\n') {
            scanf("%c", &order);
            if (order == 'F' || order == 'f') {
                swap(&a[0], &a[3], &a[5], &a[1]);
            }
            else if (order == 'B' || order == 'b') {
                swap(&a[0], &a[1], &a[5], &a[3]);
            }
            else if (order == 'L' || order == 'l') {
                swap(&a[0], &a[4], &a[5], &a[2]);
            }
            else if (order == 'R' || order == 'r') {
                swap(&a[0], &a[2], &a[5], &a[4]);
            }
            else if (order == 'C' || order == 'c') {
                swap(&a[1], &a[4], &a[3], &a[2]);
            }
            else if (order == 'D' || order == 'd') {
                swap(&a[1], &a[2], &a[3], &a[4]);
            }
        }
        output[i] = a[1];
    }
    for (int i = 0; i < n; i++) printf("%d ", output[i]);
}
void swap(int* a, int* b, int* c, int* d) {
    int tmp = *a;
    *a = *b;
    *b = *c;
    *c = *d;
    *d = tmp;
}