#include<iostream>
using namespace std;

int main() {
    string str1 = "HelloWorld"; // Initialized string
    string str2; // String to take input at runtime
    bool isSame = true;

    cout << "Enter the second string: ";
    getline(cin, str2);

    // Compare the strings
    if (str1.length() != str2.length()) {
        isSame = false;
    } else {
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) {
                isSame = false;
                break;
            }
        }
    }

    // Output result of comparison
    if (isSame)
        cout << "The strings are similar.\n";
    else
        cout << "The strings are not similar.\n";

    // Print the strings in reverse without using built-in function
    cout << "Reversed first string: ";
    for (int i = str1.length() - 1; i >= 0; i--) {
        cout << str1[i];
    }
    cout << "\n";

    cout << "Reversed second string: ";
    for (int i = str2.length() - 1; i >= 0; i--) {
        cout << str2[i];
    }
    cout << "\n";

    return 0;
}

