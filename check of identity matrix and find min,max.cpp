#include<iostream>
using namespace std;

int main() {
    int matrix[3][3],i,j,minElement, maxElement, isIdentity=1;

    cout<<"Input elements in the 3x3 matrix:\n";
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cin>>matrix[i][j];
        }
    }

    minElement=matrix[0][0];
    maxElement=matrix[0][0];

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            if(i==j&&matrix[i][j]!=1) isIdentity=0;
            if(i!=j&&matrix[i][j]!=0) isIdentity=0;
            if(matrix[i][j]<minElement) minElement=matrix[i][j];
            if(matrix[i][j]>maxElement) maxElement=matrix[i][j];
        }
    }

    cout<<"The matrix is:\n";
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    if(isIdentity) cout<<"The matrix is an identity matrix.\n";
    else cout<<"The matrix is not an identity matrix.\n";

    cout<<"Minimum element in the matrix: "<<minElement<<"\n";
    cout<<"Maximum element in the matrix: "<<maxElement<<"\n";

    return 0;
}

