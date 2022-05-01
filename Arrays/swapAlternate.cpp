#include<iostream>
using namespace std;
void swapAlternate(int arr[], int n) {
    if (n % 2 == 0) {

        for (int i = 0;i < n; i = i + 2) {
            if (i + 1 < n) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }

}

int main() {
    int arr[6] = { 2, 5, 6, 3,7,8 };
    swapAlternate(arr, 6);
    for (int i = 0;i < 6;i++) {
        cout << arr[i] << " ";
    }
}