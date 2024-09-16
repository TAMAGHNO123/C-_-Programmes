//Write a program to create a vector of integers, sort it, and remove duplicates. Print the result.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>numbers = {2,3,5,6,4,5,3,8,9,10,8};
    sort(numbers.begin(),numbers.end());
    auto duplicate = unique(numbers.begin(),numbers.end());
    numbers.erase(duplicate,numbers.end());

    //printing the array
    for(int num : numbers){
        cout<< num << " ";
    }
    return 0;
}



/*

Time comp->The overall time complexity of the program to create a vector of integers, sort it, and remove duplicates is 𝑂(𝑁log𝑁).This is primarily due to the sorting step, which dominates the total time complexity. The linear operations for removing duplicates and erasing elements are less significant in terms of their time complexity compared to the sorting operation.




sort->The sort function is part of the <algorithm> library and is used to sort elements in a range.

unique->The unique function is part of the <algorithm> library and is used to remove consecutive duplicate elements in a sorted range.

erase->The erase function is a member function of container classes like std::vector, std::list, etc. It removes elements from the container.

*/