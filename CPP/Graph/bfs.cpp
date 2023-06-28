//Breadth First Search sequence of static directed graph 
//Here, we use Queue.
#include<iostream>
#define true 1
#define false 0
using namespace std;
int visited[20],queue[20],adj[20][20];
int n,edge,i,front,rear;
void bfs(int);
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
    bfs(ver);
    return 0;
}
void bfs(int vert){
    front=rear=-1;
    ++rear;
    queue[rear]=vert;
    cout<<"\nBreadth First Search sequence=";
    while(rear!=front){
        ++front;
        vert=queue[front];
        if(visited[vert]==false){
            cout<<"\t"<<vert;
            visited[vert]=true;
            for(i=1;i<=n;i++){
                if(adj[vert][i]==true&&visited[i]==false){
                    ++rear;
                    queue[rear]=i;
                }               
            }
        }
    }
    cout<<"\n";
}