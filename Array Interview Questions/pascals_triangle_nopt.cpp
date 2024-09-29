#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pasCalsTriangle(int numRows)
{
    vector<vector<int>> triangle(numRows);
    for (int i = 0; i < numRows; ++i)
    {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; ++j)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
}
int main()
{
    int numRows;
    cout << "Enter the no of rows : ";
    cin >> numRows;
    vector<vector<int>> result = pasCalsTriangle(numRows);
    for (const auto &row : result)      // const and auto are keyword and & is a reference operator
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}