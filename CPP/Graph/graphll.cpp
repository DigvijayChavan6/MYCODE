//Dynamic directed graph or Adjacency list i.e. graph using linked list
#include<iostream>
using namespace std;
class edge; // advanced declaration
class node{
    int info;
    node *next;
    edge *adj;
    public:
    void insertver(int);
    void insertedge(int,int);
    void displayver();
    void search(int);
    void findadj(int);
    void displaygraph();
}*start;
class edge{
    public:
    int dest;
    edge *right;
};
void node::insertver(int ver){
    node *p,*temp;
    p=new node;
    p->info=ver;
    p->next=NULL;
    p->adj=NULL;
    if(start==NULL){
        start=p;        
    }
    else{
        temp=start;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
    cout<<"\nVertex "<<ver<<" inserted successfully.\n";
}
void node::insertedge(int sc,int de){
    node *p,*q;
    int a=0,b=0;
    edge *z,*r;
    r=new edge;
    r->dest=de;
    r->right=NULL;
    p=q=start;
    while(p!=NULL){
        if(p->info==sc){
            a=1;
            break;
        }
        p=p->next;
    }
    while(q!=NULL){
        if(q->info==de){
            b=1;
            break;
        }
        q=q->next;
    }
    if(a==1&&b==1){
        if(p->adj==NULL){
            p->adj=r;
        }
        else{
            z=p->adj;
            while(z->right!=NULL){
                z=z->right;
            }
            z->right=r;
        }
        cout<<"\nVertex "<<sc<<" to vertex "<<de<<" edge inserted successfully.\n";
    }
    else{
        cout<<"\nEnter valid edge,\ni.e. Enter valid source & destination vertex.\n";
    }
}
void node::displayver(){
    node *p;
    p=start;
    if(p==NULL){
        cout<<"\nGraph is empty.";
    }
    else{
        while(p!=NULL){
            cout<<"\n| "<<p->info<<" |";
            p=p->next;
        }
    }
    cout<<"\n";
}
void node::search(int srch){
    node *p;
    int t=0;
    p=start;
    if(p==NULL){
        cout<<"\nGraph is empty.";
    }
    else{
        while(p!=NULL){
            if(p->info==srch){
                t=1;
                break;
            }
            p=p->next;
        }  
        if(t==1){
            cout<<"\nVertex "<<srch<<" is found.\n";
        } 
        else{
            cout<<"\nVertex "<<srch<<" is NOT found.\n";
        }
    }
}
void node::findadj(int sc){
    int t=0;
    node *p;
    edge *z;
    p=start;
    while(p!=NULL){
        if(p->info==sc){
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==1){
        cout<<"\n| "<<p->info<<" |";
        if(p->adj==NULL){
            cout<<"\nThere is no any adjacent vertex to "<<sc<<" vertex.\n";
        }
        else{
            z=p->adj;
            while(z!=NULL){
                cout<<" --->>> "<<z->dest;
                z=z->right;
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"\nVertex is NOT present.\n";
    }
}
void node::displaygraph(){
    node *p;
    edge *z;
    p=start;
    if(p==NULL){
        cout<<"\nGraph is empty.\n";
    }
    else{
        while(p!=NULL){
            cout<<"\n| "<<p->info<<" |";
            z=p->adj;
            while(z!=NULL){
                cout<<" --->>> "<<z->dest;
                z=z->right;
            }
            p=p->next;
        }
        cout<<"\n";
    }
}
int main(){
    int sc,de,vert,ch;
    node obj;
    do{
        cout<<"\n1:Insert vertex\n2:Display vertex\n3:Search vertex\n4:Insert edge\n5:Find adjacent vertex\n6:Display graph\n7:Exit";
        cout<<"\nEnter your choise=";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"\nEnter vertex to insert=";
                cin>>vert;
                obj.insertver(vert);
                break;
            case 2:
                obj.displayver();
                break;
            case 3:
                cout<<"\nEnter vertex to search=";
                cin>>vert;
                obj.search(vert);
                break;
            case 4:
                cout<<"\nEnter source vertex of edge=";
                cin>>sc;
                cout<<"\nEnter destination vertex of edge=";
                cin>>de;
                obj.insertedge(sc,de);
                break;
            case 5:
                cout<<"\nEnter vertex to find it's adjacent vertices=";
                cin>>vert;
                obj.findadj(vert);
                break;
            case 6:
                obj.displaygraph();
                break;
            case 7:
                exit(1234);
                break;
            default:
                cout<<"\nEnter valid choise.\n";
                break;
        }
    }while(ch!=7);
    return(0);
}