#include<iostream>
using namespace std;
char getMaxCharOccur(string s) {
    int arr[26] = { 0 };
    for (int i = 0;i < s.length();i++) {
        int num = s[i] - 'a';
        arr[num]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0;i < 26;i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}
int main() {
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    cout << getMaxCharOccur(s);
}