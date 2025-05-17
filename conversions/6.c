// Explicit Conversions

#include <stdio.h>
#include <stdlib.h>

int compar(const void *elem1, const void *elem2) {
    if (*((const int*)elem2) > *((const int*)elem1)) return 1;
    if (*((const int*)elem2) > *((const int*)elem2)) return -1;
    return 0;
};

int main() {
    int arr[] = {4,2,6,8,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: \n");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    };
    printf("\n");
    qsort(arr, n, sizeof(int), compar);
    printf("Sorted array (descending order) \n");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    };
    printf("\n");
    return 0;
}