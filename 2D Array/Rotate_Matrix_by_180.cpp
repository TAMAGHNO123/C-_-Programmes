#include<bits/stdc++.h>
using namespace std;
const int N = 3;
//rotate 90 degrees
void rotate90(int matrix[N][N]){
    int result[N][N];
     for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            result[j][N-i-1] = matrix[i][j];
        }
     }


     for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            matrix[i][j] = result[i][j];
        }
     }


     //print the matrix
}
int main() {

}