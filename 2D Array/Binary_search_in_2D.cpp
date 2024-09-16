#include<iostream>
using namespace std;
bool binarySearch(int matrix[][3], int row, int col, int target) {
     int left = 0;
     int right = row * col - 1;  //right means the last element in the array
     while (left <= right)
     {
        int mid = left + (right - left) / 2;
        int mid_value = matrix[mid / col][mid % col];
        if(mid_value == target){
            return true;
        } else if(mid_value > target){
            right = mid-1;
        }
        else{
            left = mid + 1;
        }
     }
     return false;
     
}
int main() {
    int matrix[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    if(binarySearch(matrix, 3, 3, 21)){
        cout<< "The element was found." << endl;
    }
    else{
        cout<< "The element was not found." << endl;
    }
    
}