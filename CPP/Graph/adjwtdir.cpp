//Static weighted directed graph i.e. weighted directed graph using array
#include<iostream>
using namespace std;
int adj[10][10];
int main(){
    int sc,de,i,j,edge,n,wt;
    cout<<"\nEnter total no. of nodes=";
    cin>>n;
    cout<<"\nEnter total no. of edges=";
    cin>>edge;
    for(i=1;i<=edge;i++){
        cout<<"\nEnter source vertex for "<<i<<" edge=";
        cin>>sc;
        cout<<"\nEnter destination vertex for "<<i<<" edge=";
        cin>>de;
        cout<<"\nEnter weight on this edge=";
        cin>>wt;
        if(sc<1||sc>n||de<1||de>n){
            cout<<"Invalid choise for nodes.\nEnter valid node.";
            i--;
        }
        else{
            adj[sc][de]=wt;
        }
    }
    cout<<"\nAdjacency matrix=\n";
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<"\t"<<adj[i][j];
        }
        cout<<'\n';
    }
}