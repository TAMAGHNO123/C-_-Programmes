#include <iostream>
#include <string>
#include <vector>
#include <cctype> // for isalpha and tolower

using namespace std;

bool isPangram(const string& str) {
    vector<bool> alphabet(26, false);

    for(char ch : str) {
        if(isalpha(ch)) {
            alphabet[tolower(ch) - 'a'] = true;
        }
    }

    for(int i = 0; i < 26; ++i) {
        if(!alphabet[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter the string for pangram checking ->> ";
    getline(cin, str);

    cout << "Input string: " << str << endl; // Debug output

    if(isPangram(str)) {
        cout << "The given string is a pangram." << endl;
    } else {
        cout << "The given string is NOT a pangram." << endl;
    }
    return 0;
}

// A pangram is a sentence that contains every letter of the alphabet at least once.