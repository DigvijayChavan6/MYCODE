//Maximum and Minimum number of array
#include<iostream>
using namespace std;
int main(){
    int item[20],n,i,max,min;
    cout<<"\nEnter how many elements you want to insert in an array:";
    cin>>n;
    cout<<"\nEnter array elements:";
    for(i=0;i<n;i++){
        cin>>item[i];
    }
    max=min=item[0];
    for(i=0;i<n;i++){
        if(item[i]<min){
            min=item[i];
        }
        if(item[i]>max){
            max=item[i];
        }
    }
    cout<<"\nMaximum Element:"<<max;
    cout<<"\nMinimum Element:"<<min;
    return 0;
}