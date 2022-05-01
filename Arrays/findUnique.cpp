#include<iostream>
using namespace std;
int findUnique(int* arr, int size)
{
    //Write your code here
    int ans = 0;
    for (int i = 0;i < size;i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main() {
    int m = 3;
    int arr[7] = { 2, 4, 5,2,4,5,8 };
    cout << findUnique(arr, 7);
}
// a ^ a = 0;
//0 ^ a = a;
