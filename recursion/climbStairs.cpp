#include<iostream>
using namespace std;
int climbStairs(int n) {
    //base case
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    //r.c
    int ans = climbStairs(n - 1) + climbStairs(n - 2);
    return ans;
}
int main() {
    int n;

    cout << "Enter the step number" << endl;
    cin >> n;
    cout << "No. of ways: " << climbStairs(n);
    return 0;
}