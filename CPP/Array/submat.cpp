//Substraction of two matrix(2D Array)
#include<iostream>
using namespace std;
int main(){
    int item1[20][20],item2[20][20],r,c,i,j;
    cout<<"\nEnter number of rows:";
    cin>>r;
    cout<<"\nEnter number of columns:";
    cin>>c;
    cout<<"\nEnter "<<r*c<<" elments of 1st matrix:";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>item1[i][j];
        }
    }
    cout<<"\nEnter "<<r*c<<" elments of 2nd matrix:";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>item2[i][j];
        }
    }
    cout<<"\nSubstraction of given two matrix is:\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"\t"<<item1[i][j]-item2[i][j];
        }
        cout<<"\n";
    }
    return 0;
}