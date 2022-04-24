#include<iostream>
using namespace std;
void reverseString(string& str, int i, int j) {
    //base case
    if (i > j) {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverseString(str, i, j);


}
int main() {
    cout << "Enter the string";
    string str;
    cin >> str;
    reverseString(str, 0, str.length() - 1);
    cout << str << " ";

}