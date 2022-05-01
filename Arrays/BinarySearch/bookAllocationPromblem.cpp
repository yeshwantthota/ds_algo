#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n;i++) {
        if (arr[i] + pageSum <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}
int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    for (int i = 0;i < n;i++) {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main() {
    int n = 4;
    int m = 4;
    int arr[4] = { 5, 17 ,100, 11 };
    cout << allocateBooks(arr, n, m);
}