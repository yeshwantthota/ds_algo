#include<iostream>
using namespace std;
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[5] = { 8 , 9 , 2, 5 ,6 };
    reverseArray(arr, 5);
    for (int i = 0;i < 5;i++) {
        cout << arr[i] << " ";
    }
}