#include<iostream>
using namespace std;
class srt{
    public:
    int sz;
    int data[100];
    void input();
    void output();
    void simpleExchange();
    void bubble();
    void mergesort(int data[],int st,int en);
    void merge(int data[],int st1,int en1,int st2,int en2);
    
};
void srt::input(){
    cout<<"\nEnter how much number you want=";
    cin>>sz;
    cout<<"\nEnter array numbers=";
    for(int i=0;i<sz;i++){
        cin>>data[i];
    }
}
void srt::simpleExchange(){
    int swap;
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){
            if(data[i]>data[j]){
                swap=data[i];
                data[i]=data[j];
                data[j]=swap;
            }
        }
    }
}
void srt::bubble(){
    int swap,i,j;
    for(i=0;i<sz;i++){
        for(j=0;j<sz-1;j++){
            if(data[j]>data[j+1]){
                swap=data[j];
                data[j]=data[j+1];
                data[j+1]=swap;
            }
        }
    }
}
void srt::mergesort(int data[],int st,int en){
    int mid;
    if(st<en){
        mid=(st+en)/2;
        mergesort(data,st,mid);
        mergesort(data,mid+1,en);
        merge(data,st,mid,mid+1,en);
    }
}
void srt::merge(int data[],int st1,int en1,int st2,int en2){
    int temp[100],i,j,k=0;
    i=st1;
    j=st2;
    while(i<=en1&&j<=en2){
        if(data[i]<data[j]){
            temp[k]=data[i];
            i++;
        }
        else{
            temp[k]=data[j];
            j++;
        }
        k++;
    }
    while(i<=en1){
        temp[k]=data[i];
        i++;
        k++;
    }
    while(j<=en2){
        temp[k]=data[j];
        j++;
        k++;
    }
    j=0;
    for(i=st1;i<=en2;i++){
        data[i]=temp[j];
        j++;
    }
}
void srt::output(){
    cout<<"\nSorted Data=";
    int i=0;
    while(i!=sz){
        cout<<"\t"<<data[i];
        i++;
    }
}
int main(){
    int ch;
    srt obj;
    obj.input();
    do{
        cout<<"\n1:Input\n2:SimpleExchange\n3:Bubble\n4:Merge-Sort\n5:Exit";
        cout<<"\nEnter your choise from above menu for sorting=";
        cin>>ch;
        switch(ch){
            case 1:
                obj.input();
                break;
            case 2:
                obj.simpleExchange();
                obj.output();
                break;
            case 3:
                obj.bubble();
                obj.output();
                break;
            case 4:
                obj.mergesort(obj.data,0,obj.sz-1);
                obj.output();
                break;
            case 5:
                exit(2340);
                break;
            default:
                cout<<"\nEnter valid choise";
        }
    }while(ch!=5);
    return 0;
}
