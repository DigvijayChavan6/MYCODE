#include<iostream>
#define S 20
using namespace std;
void mergesort(int[],int,int);
void merge(int[],int,int,int,int);
int ar[S];
int main(){
    int i,n;
    cout<<"\nEnter how many numbers you want to sort:";
    cin>>n;
    cout<<"\nEnter "<<n<<" numbers:";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    mergesort(ar,0,n-1);
    cout<<"\nOur Sorted array is:";
    for(i=0;i<n;i++){
        cout<<"\t"<<ar[i];
    }
}
void mergesort(int ar[],int f,int l){
    int m;
    if(f<l){
        m=(f+l)/2;
        mergesort(ar,f,m);
        mergesort(ar,m+1,l);
        merge(ar,f,m,m+1,l);
    }
}
void merge(int ar[],int f1,int l1,int f2,int l2){
    int temp[20],k=0,i=f1,j=f2;
    while((i<=l1) && (j<=l2) ){
        if(ar[i]<ar[j]){
            temp[k]=ar[i];
            i++;
        }
        else{
            temp[k]=ar[j];
            j++;
        }
        k++;
    }
    while(i<=l1){
        temp[k]=ar[i];
        i++;
        k++;
    }
    while(j<=l2){
        temp[k]=ar[j];
        j++;
        k++;
    }
    j=0;
    for(i=f1;i<=l2;i++){
        ar[i]=temp[j];
        j++;
    }
}