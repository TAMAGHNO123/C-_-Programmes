#include<iostream>
using namespace std;
void printSpiral(int matrix[][3], int row, int col) {
     int top = 0, right = col -1;
     int bottom = row - 1, left = 0;
     while (top <= bottom && left <= right)
     {
        //traverse from left to right across top row
        for(int i = 0; i <= right; ++i){
            cout<< matrix[top][i] << " ";
        }
        top++;
        //traverse from top to bottom across right column
        for(int i = top; i <= bottom; ++i){
            cout<< matrix[i][right] << " ";
        }
        right--;
        for(int i = right; i >= left; --i){
            cout<< matrix[bottom][i] << " ";
        }
        bottom--;
        for(int i = bottom; i >= top; --i){
            cout<< matrix[i][left] << " ";
        }
        left++;
     }
     cout<< endl;
}
int main() {
    int matrix[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    printSpiral(matrix, 3, 3);
    
}