#include <iostream>
#include <string>

using namespace std;

string defangedIPaddr(string address)
{                                   // defanging ip address
    string defanged = "";           // storing defanged ip

    for (char c : address)
    {                               // iterating the address string
        if (c == '.')
        {
            defanged += "[.]";      // change '.' with "[.]"
        }
        else
        {
            defanged += c;
        }
    }
    return defanged;
}
int main()
{
    string ip = "192.172.566.55.66.55.55";
    cout << "Original ip address is : " << ip << endl;
    cout << "Defanged ip address : " << defangedIPaddr(ip) << endl;

    return 0;
}