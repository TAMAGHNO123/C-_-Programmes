#include<iostream>
using namespace std;
int main(){
    string arr;
    cout << "Enter what you want to print without using getline : ";
    cin >> arr;
    cout << "You entered : "<< arr <<endl;
}



//we will not use this traditional approach as it doesnt count the spaces in user input
//getline offers us the feature