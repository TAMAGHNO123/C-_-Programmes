#include <iostream>
using namespace std;
bool findElement(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j) // at first this loop will execute..after when the condition fails...it will break and go to the outside loop
        {
            if (arr[i][j] == target)
            {
                cout << "The element is found in position (" << i << "," << j << ")\n";
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};
    int target = 12;
    if (!findElement(arr, 4, 3, target))
    {
        cout << "Element was not found...." << endl;
    }
}