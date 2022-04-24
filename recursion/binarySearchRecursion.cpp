#include<iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int n) {
    //base case
    if (s > e)
        return false;

    int mid = (s + e) / 2;
    //element found
    if (arr[mid] == n) {
        return true;
    }
    else {
        if (arr[mid] > n) {
            return binarySearch(arr, s, mid - 1, n);
        }
        else {
            return binarySearch(arr, mid + 1, e, n);

        }
    }
}
int main() {
    int arr[5] = { 1,2,5,6,8 };
    int n;
    int size = sizeof(arr);
    cout << "Enter the key" << endl;
    cin >> n;
    if (binarySearch(arr, 0, 4, n))
        cout << "Element found" << endl;
    else {
        cout << "Element not found" << endl;
    }
}