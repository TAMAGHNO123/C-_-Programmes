#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longestCon(vector<int>& arr){
    //check if arr empty or not
    if(arr.empty()){
        return 0;
    }
    unordered_set<int> numSet(arr.begin(), arr.end());

    //track longest consqtv sequence
    int longestConsqtv = 0;

    for(int num : numSet){
        if(numSet.find(num-1) == numSet.end());
        int currentNum = num;
        int currentStreak = 1;


        //counting the length of sequence
        while(numSet.find(currentNum + 1) == numSet.end()){
                currentNum++;
                currentStreak++;
        }

        //update longestConsqtv
        longestConsqtv = max(longestConsqtv, currentNum);
    }
    return longestConsqtv;

}
int main(){

}