
//Write a Program to Check Whether a Character is a Vowel or Consonant
#include<iostream>
#include<cctype> // For isalpha()
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isalpha(ch)) { // Check if the input is an alphabet
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " is a vowel" << endl;
        } else {
            cout << ch << " is a consonant" << endl;
        }
    } else {
        cout << ch << " is not an alphabet" << endl;
    }

    return 0;
}
