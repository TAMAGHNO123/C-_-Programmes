#include <iostream>
using namespace std;
void subtractMatrices(int arr1[][4], int arr2[][4], int result[][4], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}



void printArray(int matrix[][4],int row,int col){
     for (int i = 0; i < row; ++i)
     {
        for (int j = 0; j < col; ++j)
        {
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
     }
     
}
int main()
{
    int arr1[4][4] = {
        {10,20,30,40},
        {50,60,70,80},
        {90,100,110,120},
        {130,140,150,160}
    };
    int arr2[4][4] = {
        {10,20,30,40},
        {50,60,70,80},
        {90,100,110,120},
        {130,140,150,160}
    };
    int result[4][4] ;
    subtractMatrices(arr1,arr2,result,4,4);
    printArray(result,4,4);
}