#include <iostream>
using namespace std;
void waveIterate(int arr[][3], int row, int col)
{
    for (int j = 0; j < col; ++j)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; ++i)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; --i)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
void printArray(int matrix[][3], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout<< matrix[i][j] << " ";
        }
        cout<< endl;
        
    }
    
}
int main()
{
    int arr[3][3] = {
         {10, 20, 30},
         {40, 50, 60},
         {70, 80, 90}
    };
    waveIterate(arr, 3, 3);
    printArray(arr, 3, 3);
}