#include<iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    cout<<"Input Rows and Columns of the 1st matrix: ";
    cin>>rows1>>cols1;

    cout<<"Input Rows and Columns of the 2nd matrix: ";
    cin>>rows2>>cols2;

    if(rows1!=rows2||cols1!=cols2) {
        cout<<"The matrices cannot be compared or added as their dimensions are not the same.\n";
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], sum[rows1][cols1];
    int i, j, areEqual=1;

    cout<<"Input elements in the first matrix:\n";
    for(i=0;i<rows1;i++) {
        for(j=0;j<cols1;j++) {
            cout<<"element - ["<<i<<"],["<<j<<"] : ";
            cin>>matrix1[i][j];
        }
    }

    cout<<"Input elements in the second matrix:\n";
    for(i=0;i<rows2;i++) {
        for(j=0;j<cols2;j++) {
            cout<<"element - ["<<i<<"],["<<j<<"] : ";
            cin>>matrix2[i][j];
        }
    }

    cout<<"The first matrix is:\n";
    for(i=0;i<rows1;i++) {
        for(j=0;j<cols1;j++) {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"The second matrix is:\n";
    for(i=0;i<rows2;i++) {
        for(j=0;j<cols2;j++) {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(i=0;i<rows1;i++) {
        for(j=0;j<cols1;j++) {
            if(matrix1[i][j]!=matrix2[i][j]) {
                areEqual=0;
            }
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    if(areEqual) {
        cout<<"The Matrices can be compared:\nTwo matrices are equal.\n";
    } else {
        cout<<"The Matrices can be compared:\nTwo matrices are not equal.\n";
    }

    cout<<"The sum of the two matrices is:\n";
    for(i=0;i<rows1;i++) {
        for(j=0;j<cols1;j++) {
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

