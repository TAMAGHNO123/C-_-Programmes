// size() is often used in container classes, while length() is more commonly used with strings.

//the motto of this problem is to find the string is rotated version of its original or not thats it...so we have takend bool return type of the function...


#include<iostream>
using namespace std;
bool isRotatedby2(string example, string test) {
    int n = example.length();
    if(n != test.length()) return false;
    //rotate the array leftwards and store
    string leftRotate = test.substr(2) + test.substr(0, 2);

    //rotate the array rightwards and store
    string rightRotate = test.substr(n - 2) + test.substr(0, n-2);

    return(example == leftRotate || example == rightRotate);
}
int main() {
    string example = "apple";
    string test = "pplea";
    if(isRotatedby2(example, test)) {
        cout << test << " is a rotated version of string example" << endl;
    }
    else{
        cout << test << " is NOT rotated version of string \"example\"" << endl;
    }

    return 0;
}