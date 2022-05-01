#include<iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int k) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {
        if (arr[mid] == k) {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < k) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int k) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {
        if (arr[mid] == k) {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < k) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;

    }
    return ans;
}
int main() {
    int arr[7] = { 1,2,3,3,3,6,7 };
    cout << firstOccurrence(arr, 7, 3) << "  ";
    cout << lastOccurrence(arr, 7, 3);


}