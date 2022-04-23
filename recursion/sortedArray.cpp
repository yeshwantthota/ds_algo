#include<iostream>
using namespace std;
bool isSorted(int arr[],int size) {
    if (size == 0 || size == 1) {
        return true;
    }
    if (arr[0] > arr[1]) {
        return false;
    }
    bool remainingPart = isSorted(arr + 1, size - 1);
    return remainingPart;

}
int main() {
    int arr[5] = { 2, 5, 7 , 8 ,10 };
    int size = 5;
    if (isSorted(arr, size)) {
        cout << "Array is sorted" << " ";
    }
    else {
        cout << "Array is not sorted" << " ";
    }
}