#include<bits/stdc++.h>
using namespace std;
void sumDiagonals(int arr[][3],int n) {
    int diagArray = 0, antiDiag = 0;
     for (int i = 0; i < n; ++i)
     {
        diagArray = diagArray + arr[i][i];
        antiDiag = antiDiag + arr[i][n-1-i];
     }
     cout<< "Sum of primary diagonal : "<< diagArray << endl;
     cout<< "Sum of secondary diagonal : "<< antiDiag << endl;
     
}


int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    sumDiagonals(arr,3);
}