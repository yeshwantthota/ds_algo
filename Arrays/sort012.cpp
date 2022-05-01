#include<iostream>
using namespace std;
void printArray(int arr[], int n) {
    for (int i = 0;i < n;i++) {
        cout << arr[i] << "  ";
    }
}
void sort012(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[high], arr[mid]);
            high--;
        }

    }

}
int main() {
    int arr[7] = { 0,1,0,2,0,0,1 };
    sort012(arr, 7);
    printArray(arr, 7);
}