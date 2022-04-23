#include<iostream>
using namespace std;
int sumOfArray(int arr[], int size) {
    //base case
   
    if (size == 1) {
        return arr[0];
    }
    
    
    int sum = arr[0] + sumOfArray(arr + 1, size - 1);
    return sum;
}
int main() {
    int arr[5] = { 2, 1,5,6,9};
    int size = 5;
    
    cout << "sum of array " << sumOfArray(arr, size);
}