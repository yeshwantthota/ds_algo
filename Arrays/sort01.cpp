#include<iostream>
using namespace std;
void sortZeroOne(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        while (arr[i] == 0 && i < j) {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

    }
}
int main() {
    int arr[6] = { 0,1,0,1,1,0 };
    int size = sizeof(arr);
    sortZeroOne(arr, 6);
    for (int i = 0; i < 6;i++) {
        cout << arr[i] << "  ";
    }
}