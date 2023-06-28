#include<iostream.h>
int r,s,*t,nn;
int arm(int*);
int arm(int  *n){
    t=n;
    nn=*n;
    s=0;
    while(nn!=0){
        r=nn%10;
        s=s+r*r*r;
        nn=nn/10;
    }
        if (*t==s){
            return s;
        }
        else{
            return -1;
        }
 }
int main()
{
    int *num,re,cu,ad;
    num=&ad;
    cout<<"\nEnter number=";
    cin>>cu;
    for(ad=1;ad<=cu;ad++){
        re=arm(num);
        if(re==-1) {
            cout<<"";
        }
        else{
            cout<<re<<"\n";
        }
    }
}