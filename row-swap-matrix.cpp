#include <iostream>
#include <vector>
using namespace std;

vector<vector<double>> row_swap(vector<vector<double>>& matrix,int row1,int row2){

    int n= matrix.size();
    double b;

    for(int i=0;i<n;i++){
        b=matrix[row1][i];
        matrix[row1][i]=matrix[row2][i];
        matrix[row2][i]=b;

    }

    return matrix;



}
