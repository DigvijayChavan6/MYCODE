//Odd numbers of array
#include<iostream>
using namespace std;
int main(){
    int item[20],n,i;
    cout<<"\nEnter how many elements you want to insert in an array:";
    cin>>n;
    cout<<"\nEnter array elements:";
    for(i=0;i<n;i++){
        cin>>item[i];
    }
    cout<<"\nOdd numbers of array are:";
    for(i=0;i<n;i++){
        if(item[i]%2==1){
            cout<<"\t"<<item[i];
        }
    }
    return 0;
}