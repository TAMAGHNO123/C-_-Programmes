#include <iostream>
#include <vector>
using namespace std;
void transposeMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << "Original Matrix : " << " "<<endl;
    for (const auto &row : matrix)
    {                                  // this loop works for original matrix
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    transposeMatrix(matrix);
    cout << "Transposed matrix : " << " "<<endl;
    for (const auto &row : matrix)          //and this ranged loop for transposed ones
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
