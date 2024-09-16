//Write a program to create a vector of integers, sort it, and remove duplicates. Print the result.
#include<iostream>
#include<algorithm>  //for sort and unique
#include<vector>
using namespace std;
int main() {
    vector<int>numbers = {3,2,5,3,6,6,7,12};
    sort(numbers.begin(),numbers.end());
    auto duplicates = unique(numbers.begin(),numbers.end());

    numbers.erase(duplicates,numbers.end());


    //printing the array
    for(int num : numbers){          //this for loop is a range based loop
        cout<< num <<endl;
    }
    return 0;

}
