#include<iostream>
using namespace std;

bool palindrome(string str, int i, int j) {

    //base case
    if (i > j) {

        return true;

    }

    if (str[i] != str[j]) {
        return false;
    }
    i++;
    j--;
    return palindrome(str, i, j);
}
int main() {
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    if (palindrome(str, 0, str.length() - 1)) {
        cout << "palindrome";

    }
    else {
        cout << "Not palindrome";
    }
}