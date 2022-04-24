#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n, int size) {
    //base case
    if (size == 0) {
        return false;
    }
    if (arr[0] == n) {
        return true;
    }

    bool remainingPart = linearSearch(arr + 1, n, size - 1);
    return remainingPart;



}
int main() {
    int arr[5] = { 1, 2,5,6,8 };
    int n;

    int size = sizeof(arr);
    cout << "Enter the key" << endl;
    cin >> n;
    if (linearSearch(arr, n, size)) {
        cout << n << " is in the array";
    }
    else {
        cout << n << " is not in the array";
    }
}