#include<iostream>
using namespace std;
int peakIndex(int arr[], int n) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e) {
        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s) / 2;

    }
    return e;
}
int main() {
    int arr[6] = { 0, 1, 2, 3 , 4, 0 };
    cout << peakIndex(arr, 6);
}