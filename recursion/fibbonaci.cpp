#include<iostream>
using namespace std;
int fibbonaci(int n){
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int ans = fibbonaci(n - 1) + fibbonaci(n - 2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout << fibbonaci(n);

}