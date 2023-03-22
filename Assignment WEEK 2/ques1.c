#include <stdio.h>

int Occurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {34,56,78,22,45,34,56,78,99,56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 56;
    int count = Occurrences(arr, n, x);
    printf("The number %d occurs %d times in the array.", x, count);
    return 0;
}