#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generatePascalTriangle(int numRows) {
    vector<vector<int>> triangle(numRows);
    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
}

int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;
    vector<int> row(numRows);
    row[0] = 1;
    for (int i = 0; i < numRows; i++) {
        for(int j = i; j > 0; --j){
            row[j] = row[j] + row[j-1];
        }
        for(int val : row){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}