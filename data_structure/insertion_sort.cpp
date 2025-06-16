//
// Created by 방승재 on 2025. 6. 16..
//

#include <iostream>

using namespace std;

void insertion_sort(int* arr, const int n) {
    if (n < 2) {
        return;
    }
    for (int i = 1; i < n; ++i) {
        const int key = arr[i];
        int j = i - 1;
        while (j > -1 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    insertion_sort(arr, sizeof(arr) / sizeof(int));
    for (const int a : arr) {
        cout << a << ' ';
    }
}

