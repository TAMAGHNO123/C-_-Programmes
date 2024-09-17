//PS :-> Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

// brute force
#include<iostream>
#include<vector>

using namespace std;

void setZero(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    //keeping track of rows and cols that need to be zeroed
    vector<bool> zeroRows(row, false);
    vector<bool> zeroCols(col, false);


    //iterating and finding rows and cols with 0's
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            if(matrix[i][j] == 0){
                zeroRows[i] = true;
                zeroCols[j] = true;
            }
        }
    }


    //now as identification is done its time to turn the rows and columns be zeroes separately

    //setting rows to 0
    for(int i = 0; i < row; ++i){
        if(zeroRows[i]){
            for(int j = 0; j < col; ++j){
                matrix[i][j] = 0;
            }
        }
    }


    //setting columns to 0
    for(int j = 0; j < col; ++j){
        if(zeroCols[j]){
            for(int i = 0; i < row; ++i){
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(vector<vector<int>>& matrix){
    for(const auto& row : matrix){
        for(int element : row){
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {0,5,9},
        {7,6,3},
        {2,5,8}
    };

    printMatrix(matrix);

    setZero(matrix);

    cout << "The matrix after zeroying it --> " << endl;

    printMatrix(matrix);
}