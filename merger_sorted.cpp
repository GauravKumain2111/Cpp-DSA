#include<iostream>
using namespace std;

void mergersort(int arr1[], int arr2[], int m, int n) {
    int arr3[1000] = {0};
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    for (int i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
}

int main() {
    int arr1[100];
    int arr2[100];
    int m, n;

    cout << "size of first:";
    cin >> m;
    cout << "size of 2nd:";
    cin >> n;

    cout << "Enter first array:";
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 2nd array:";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    mergersort(arr1, arr2, m, n);

    return 0;
}
