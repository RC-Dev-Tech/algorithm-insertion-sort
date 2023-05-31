#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // 從未排序區域取出元素.
        int j = i - 1;

        // 將元素插入到已排序區域的適當位置.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {40, 30, 60, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    // 原始數列.
    cout << "original sequence: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // 插入排序.
    insertion_sort(arr, size);
    cout << endl;

    // 排序後數列.
    cout << "sorted sequence: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
