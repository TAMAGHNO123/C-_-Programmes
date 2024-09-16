#include<bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>>& matrix) {
     int n = matrix.size();
     //transpose the matrix
     for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            swap(matrix[i][j], matrix[j][i]);
        }
     }
    //reversing each row
       for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main(){
    vector<vector<int>>matrix = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    rotateMatrix(matrix);
    for(const auto& row : matrix){
        for(int val : row){
            cout<< val <<" ";
        }
        cout<<endl;
    }
    return 0;
}