#include<bits/stdc++.h>
using namespace std;
int main() {
    //creating 2d matrix of 3 rows and 3 columns
    int row,col;
    cout << "Enter the number of rows : ";
    cin>>row;
    cout << "Enter the number of columns : ";
    cin>>col;

    //creation of vector of vectors
    vector<vector<int>>matrix(row, vector<int>(col));


    //gettings elements from the user
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout<<"Element ["<<i<<"]["<<j<<"]"<<" ";
            cin >> matrix[i][j];
        }
        cout<<endl;
        
    }

    //printing the array
    for (int i = 0; i < row; ++i)
    {
       for (int j = 0; j < col; ++j)
       {
         cout<<matrix[i][j]<< " ";
       }
       cout<<endl;
       
    }

    return 0;
    
    
}



/*
By writing vector<vector<int>> matrix(rows, vector<int>(cols));, we're telling the compiler to create a vector of vectors with rows number of elements, and each inner vector should be initialized with cols number of elements. The vector<int>(cols) part is creating a temporary vector object with cols number of elements, which is then used as the initial value for each inner vector in the outer vector.
*/