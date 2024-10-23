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

        void printArray(vector<int>& arr){
                for(int val : arr){
                    cout << val << " ";
                }
                cout << endl;
        }
}
int main(){

}