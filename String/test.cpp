#include<iostream>
 using namespace std;
 string defangedIPaddr(string address) {
    string empty = "";
    for (char c : address)
    {
       if(c == '.'){
        empty += "[.]";
       }
       else{
        empty += c;
       }
    }
    
    return empty;
 }
 int main() {
    string ip = "192.14.1.1.4.4.55.44.";
    cout << "Current ip address is : " << ip << endl;
    cout << "Defanged ip address is : " << defangedIPaddr(ip) << endl;
 }