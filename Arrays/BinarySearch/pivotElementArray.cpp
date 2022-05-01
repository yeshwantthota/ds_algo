#include<iostream>
using namespace std;
int pivotElem(int arr[], int n) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e) {
        if (arr[mid] >= arr[s]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main() {
    int arr[6] = { 7, 8 , 2, 3, 4, 5 };
    cout << "pivot is " << pivotElem(arr, 6);
}