#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main()
{
    int arr[5] = {7, 2, 32, 5, 20};
    int size = 5;
    int k = 3;
    selectionSort(arr, 5);
    cout << arr[k - 1] << endl;
    return 0;
}