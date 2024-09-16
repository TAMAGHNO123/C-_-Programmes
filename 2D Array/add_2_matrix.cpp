#include <iostream>
using namespace std;
void addMatrices(int arr1[][3], int arr2[][3], int result[][3], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void printMatrix(int matrix[][3], int row, int col)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr1[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    int arr2[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    int result[4][3]; // to store the results of arr1 and arr2

    addMatrices(arr1, arr2, result, 4, 3);
    printMatrix(result, 4, 3);
}


/*
Memory Layout of 2D Arrays
A 2D array in C++ is essentially an array of arrays. For example, if you have an array declared as int arr[2][3], it means you have 2 arrays, each containing 3 integers.

Row-major order: C++ stores 2D arrays in a row-major order. This means that elements of the first row are stored in consecutive memory locations, followed by elements of the second row, and so on.
*/