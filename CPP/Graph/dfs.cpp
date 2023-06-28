//Depth First Search sequence of static directed graph 
//Here, we use Stack.
#include<iostream>
#define true 1
#define false 0
using namespace std;
int visited[20],stack[20],adj[20][20];
int n,edge,i,top;
void dfs(int);
int main(){
    int sc,de,ver;
    cout<<"\nEnter total no. of nodes=";
    cin>>n;
    cout<<"\nEnter total no. of edges=";
    cin>>edge;
    for(i=1;i<=edge;i++){
        cout<<"\nEnter source vertex for edge=";
        cin>>sc;
        cout<<"\nEnter destination vertex of edge=";
        cin>>de;
        if(sc<1||sc>n||de<1||de>n){
            cout<<"Invalid choise for nodes.\nEnter valid node.";
            i--;
        }
        else{
            adj[sc][de]=1;
        }
    }
    cout<<"\nEnter starting vertex=";
    cin>>ver;
    dfs(ver);
    return 0;
}
void dfs(int vert){
    top=-1;
    ++top;
    stack[top]=vert;
    cout<<"\nDepth First Search sequence=";
    while(top!=-1){
        vert=stack[top--];
        if(visited[vert]==false){
            cout<<"\t"<<vert;
            visited[vert]=true;
            for(i=n;i>=1;i--){
                if(adj[vert][i]==true&&visited[i]==false){
                    ++top;
                    stack[top]=i;
                }               
            }
        }
    }
    cout<<"\n";
}