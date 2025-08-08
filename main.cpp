#include <iostream>
using namespace::std;
#include <vector>
#include <cmath>
#include <math.h>
#include "determinant.h"


int main(){
    double det=0;
  cout<<"Enter n"<<'\n';
  int n;
  cin>>n;
  cout<<'\n';

  vector<vector<double>> matrix;

  for(int i=0;i<n;i++){
      vector<double> newRow;
      for(int j=0;j<n;j++){
          cout<<"Enter the entry with index "<<i<<" "<<j<<'\n';
          double b;
          cin>>b;
          newRow.push_back(b);
      }
      matrix.push_back(newRow);
  }

  det=determinant(matrix);

  cout<<"det(A) is "<<det<<'\n';




}