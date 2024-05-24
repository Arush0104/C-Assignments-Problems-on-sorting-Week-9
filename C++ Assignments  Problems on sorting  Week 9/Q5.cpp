#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findKForSortedArray(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int median = arr[n / 2];
    int K = median;
    for (int i = 0; i < n; ++i) {
        arr[i] = abs(arr[i] - K);
    }
    bool isSorted = is_sorted(arr.begin(), arr.end());
    return isSorted ? K : -1;
}

int main() {
    vector<int> arr = {3, 1, 6, 9, 7};
    int result = findKForSortedArray(arr);
    if (result != -1) {
        cout << "K = " << result << endl;
    } else {
        cout << "No value of K is correct" << endl;
    }

    return 0;
}
