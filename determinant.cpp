#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#include "minor.h"
#include "determinant.h"


double determinant(const vector<vector<double>>& matrix) {
    int n=matrix.size();
    if(n==1){
        return matrix[0][0];
    }
    if(n==2){
        double c;
        c=(matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]);
        return c;
    }
    double det=0;
    for(int i=0;i<n;i++){
        vector<vector<double>> minor3 = minor(matrix, 0, i);
        det=det+matrix[0][i]*pow(-1,i)* determinant(minor3);

    }
    return det;
}

