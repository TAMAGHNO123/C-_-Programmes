#include<iostream>
using namespace std;
int main() {
    string input;
    cout<<"Enter what you want to print : ";
    //use getline to get the user_input
    getline(cin, input);

    //printing
    cout<<"You entered : "<< input <<endl;
}