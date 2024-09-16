#include <iostream>
using namespace std;
// creating the function
bool findElement(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; ++i) // it increments i first then update result
    {
        for (int j = 0; j < col; ++j)
        {
            if (arr[i][j] == target)
            {
                cout << "Element found at position : (" << i << " ," << j << ")\n";
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[4][4] = {
        {10, 15, 14, 13},
        {20, 25, 24, 23},
        {30, 35, 34, 33},
        {40, 45, 44, 43}};
    int target = 55;
    if (!findElement(arr, 4, 4, target))
    {
        cout << "Element was not found.\n";
    }
    return 0;
}

/*
Performance:

Pre-increment (++i) is sometimes preferred because it can be slightly more efficient.
When using i++ (post-increment), the compiler may need to create a temporary copy of the value of i before it increments it. This temporary copy is used to return the original value of i. Although modern compilers are very good at optimizing this away in simple cases (like loop counters), in more complex code, ++i might avoid this unnecessary copying.
Pre-increment does not require creating a temporary copy, making it potentially more efficient in some cases.

Best Practice:

In cases where you're working with complex objects (like iterators, which might overload the ++ operator), using pre-increment can avoid the overhead of creating a temporary object.
In simple loop counters, especially with primitive types like int, the difference is negligible with modern compilers. Still, some developers prefer ++i as a matter of habit and best practice.

*/