#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums){
    int count0 = 0, count1 = 0, count2 = 0;
        for(int i = 0; i < nums.size(); ++i){
                if(nums[i] == 0) count0++;
                else if(nums[i] == 1) count1++;
                else count2++;
        }


        //overwriting the array
        int i = 0;
        while(count0 > 0){
            nums[i++] = 0;
            count0--;
        }
        while(count1 > 0){
            nums[i++] = 1;
            count1--;
        }
        while(count2 > 0){
            nums[i++] = 2;
            count2--;
        }

        //printing the array

        
}
void printArray(vector<int>& arr){
                for(int val : arr){
                    cout << val << " ";
                }
                cout << endl;
        }
int main(){
    vector<int> nums1 = {0,0,2,1,1,2,0,1};
    vector<int> nums2 = {1,1,2,1,0,2,0,1,2};

    cout << "Original array1 : ";
    printArray(nums1);
    sortColors(nums1);
    cout << "Sorted array : ";
    printArray(nums1);

    cout << "Original array2 : ";
    printArray(nums2);
    sortColors(nums2);
    cout << "Sorted array : ";
    printArray(nums2);

}