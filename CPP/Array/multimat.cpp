//Multiplication of two matrix(2D Array)
#include<iostream>
using namespace std;
int main(){
    int item1[20][20],item2[20][20],mul[20][20],r,r2,c,c2,i,j,k,sum;
    cout<<"\nEnter number of rows of first matrix:";
    cin>>r;
    cout<<"\nEnter number of columns of first matrix:";
    cin>>c;
    cout<<"\nEnter "<<r*c<<" elments of 1st matrix:";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>item1[i][j];
        }
    }
    r2=c;
    cout<<"\nNumber of rows of second matrix must be same as number of columns of first matrix.";
    cout<<"\nEnter number columns of second matrix:";
    cin>>c2;
    cout<<"\nEnter "<<r2*c2<<" elments of 2nd matrix:";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>item2[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c2;j++){
            for()
        }
    }




    cout<<"\nMultiplication of given two matrix is:\n";
    for(i=0;i<r;i++){
        for(j=0;j<c2;j++){
            cout<<"\t"<<mul[i][j];
        }
        cout<<"\n";
    }
    return 0;
}