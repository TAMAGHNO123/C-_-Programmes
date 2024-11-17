#include<iostream>
#include<vector>
#include<climits>


using namespace std;

int maxScore(vector<int>& arr){
    int n = arr.size();
    int maxScore = INT_MIN;

    for(int i = 0; i < n; ++i){
        int smallest = INT_MAX, secondSmallest = INT_MAX;

            for(int j = i; j < n; ++j){
                if(arr[j] < smallest){
                    secondSmallest = smallest;
                    smallest = arr[j];
                }
                else if(arr[j] < secondSmallest){
                    secondSmallest = arr[j];
                }
                //calculating value if we get the least elements
                if(secondSmallest != INT_MAX){
                    maxScore = max(maxScore, smallest + secondSmallest);
                }
            }
    }
return maxScore;
}

int main(){
    vector<int> arr = {3,1,2,6};
    cout << "Maximum subarray sum of given vector of inetegers will be : "<< maxScore(arr) << " ";
    return 0;
}