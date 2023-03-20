#include <iostream>

int binary_search(int arr[], int n, int angka) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == angka) {
            return mid;
        }
        else if (arr[mid] < angka) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int angka = 10;

    int result = binary_search(arr, n, angka);

    if (result != -1) {
        printf("Angka ditemukan di indeks ke-%d\n", result);
    }
    else {
        printf("Angka tidak ditemukan dalam array\n");
    }

    return 0;
}
