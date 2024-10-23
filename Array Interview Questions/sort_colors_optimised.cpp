#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums){
    //setting pointer for 0,1 and 2
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

void printArray(vector<int>& exmple){
    for(int val : exmple){
        cout << val << " ";
    }
    cout << endl;
}
int main(){
    vector<int> sample1 = {1,0,0,2,1,0,2,1,1,1,2,0,0,0,2};
    cout << "Given array is : ";
    printArray(sample1);
    sortColors(sample1);
    cout << "The sorted array is : ";
    printArray(sample1);
    return 0;
}