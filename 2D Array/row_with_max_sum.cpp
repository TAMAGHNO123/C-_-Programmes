#include <bits/stdc++.h>
using namespace std;
void printRowmax(int arr[][3], int row, int col)
{
    int index = -1, sum = INT_MIN;
    for (int i = 0; i < row; ++i)
    {
        int total = 0;
        for (int j = 0; j < col; ++j)
        {
            total = total + arr[i][j];
        }
        if(total > sum){
            sum = total;
            index = i;           
        }
    }
    //printing the index of row with max sum
    cout<< "The maximum sum containing row is : "<< index <<endl;
    
}
int main()
{
    int arr[3][3] = {
        {10,20,30},
        {10,10,10},
        {5,5,70}
    };

    printRowmax(arr,3,3);
}
            