#include<iostream>
#include<vector>
using namespace std;
void rotateMatrix(vector<vector<int>>& matrix){
     int n = matrix.size();
     vector<vector<int>>result(n, vector<int>(n));
     for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            result[j][n-i-1] = matrix[i][j];
        }
     }
     matrix = result;
}
int main() {
    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    rotateMatrix(matrix);
    cout<< "The rotated matrix (not optimized): "<<endl;
    for(const auto& row : matrix){
        for(int val : row){
            cout<< val << " ";
        }
        cout<<endl;
    }
}