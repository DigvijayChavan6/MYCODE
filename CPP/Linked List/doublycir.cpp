//Doubly circuler linked list
#include<iostream>
using namespace std;
class node{
    int info;
    node *prev,*next;
    public:
    node* create();
    void insertbeg(int val);
    void insertend(int val);
    void insertbet(int val,int after);
    int removebeg();
    int removeend();
    int removebet(int after);
    void search(int srch);
    void reverse();
    void count();
    void display();
}*list;
node* node::create(){
    node *z;
    z=new node;
    return(z);
}
void node::insertbeg(int val){
    node *p,*q;
    p=list;
    if(p==NULL){
        p=create();
        p->prev=p;
        p->info=val;
        p->next=p;
        list=p;
    }
    else{
        q=create();
        q->prev=p->prev;
        q->info=val;
        q->next=p;
        p->prev->next=q;
        p->prev=q;
        list=q;
    }
}
void node::insertend(int val){
    node *p,*q;
    p=list;
    if(p==NULL){
        p=create();
        p->prev=p;
        p->info=val;
        p->next=p;
        list=p;
    }
    else{
        q=create();
        q->prev=p->prev;
        q->info=val;
        q->next=p;
        p->prev->next=q;
        p->prev=q;
    }
}
void node::insertbet(int val,int after){
    node *p,*q;
    p=list;
    if(p==NULL||(p->next==p&&p->prev==p)){
        cout<<"\nInsert between is NOT possible.";
    }
    else{
        while(p->next!=list){
            if(p->info==after){
                q=create();
                q->prev=p;
                q->info=val;
                q->next=p->next;
                p->next->prev=q;
                p->next=q;
            }
            p=p->next;
        }
    }
}
int node::removebeg(){
    node *p;
    int z;
    p=list;
    if(p==NULL){
        cout<<"\nL.L. is empty.";
        return(0);
    }
    else if(p->next==p&&p->prev==p){
        z=p->info;
        list=NULL;
        delete(p);
        return(z);
    }
    else{
        z=p->info;
        p->next->prev=p->prev;
        p->prev->next=p->next;
        list=p->next;
        delete(p);
        return(z);
    }
}
int node::removeend(){
    int z;
    node *p,*temp;
    p=list;
    if(p==NULL){
        cout<<"\nL.L. is empty";
        return(0);
    }
    else if(p->next==p&&p->prev==p){
        z=p->info;
        list=NULL;
        delete(p);
        return(z);
    }
    else{
        temp=p->prev;
        z=temp->info;
        temp->prev->next=p;
        p->prev=temp->prev;
        delete(temp);
        return(z);
    }
}
int node::removebet(int after){
    node *p,*temp;
    int z;
    p=list;
    if(p==NULL){
        cout<<"\nL.L. is empty.";
        return(0);
    }
    else if((p->next==p&&p->prev==p)||p->next->next==p){
        cout<<"\nRemove between is NOT possible.";
        return(0);
    }
    else{
        while(p->next!=list){
            if(p->info==after){
                temp=p->next;
                z=temp->info;
                p->next=temp->next;
                temp->next->prev=p;
                delete(temp);
            }
            p=p->next;
        }
        return(z);
    }
}
void node::search(int srch){
    node *p;
    int cnt=0;
    p=list;
    do{
        if(p->info==srch){
            cnt++;
        }
        p=p->next;
    }while(p!=list);
    if(cnt==0){
        cout<<"\nNode "<<srch<<" is NOT present.";
    }
    else if(cnt==1){
        cout<<"\nNode "<<srch<<" is present one time.";
    }
    else{
        cout<<"\nNode "<<srch<<" is present "<<cnt<<" times.";
    }
}
void node::reverse(){
    node *t1,*t2,*t3=list;
    t1=list;
    do{
        t2=t1->next;
        t1->next=t3;
        t1->prev=t2;
        t3=t1;
        t1=t2;
    }while(t1!=list);
    t1->next=t3;
    list=t3;
    cout<<"\nL.L. is reversed.";
}
void node::count(){
    node *p;
    int cnt=0;
    p=list;
    do{
        cnt++;
        p=p->next;
    }while(p!=list);
    cout<<"\nTotal no. of nodes="<<cnt;
}
void node::display(){
    node *p;
    p=list;
    if(p==NULL){
        cout<<"\nL.L. is empty.";
    }
    else{
        do{
            cout<<"\t"<<p->info;
            p=p->next;        
        }while(p!=list);
    }
}
int main(){
    int ch,val,after,remove,sr;
    node obj;
    do{
        cout<<"\n\n1.Insert AT Begining\n2.Insert AT End\n3.Insert In Between\n4.Remove From Begin\n5.Remove From End\n6.Remove In Between\n7.Search the node\n8.Reverse L.L.\n9.Count no. of nodes\n10.Display\n11.Exit";
        cout<<"\nEnter your choise from above menu=";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"\nEnter value=";
                cin>>val;
                obj.insertbeg(val);
                break;
            case 2:
                cout<<"\nEnter value=";
                cin>>val;
                obj.insertend(val);
                break;
            case 3:
                cout<<"\nAfter which node=";
                cin>>after;
                cout<<"\nEnter value=";
                cin>>val;
                obj.insertbet(val,after);
                break;
            case 4:
                remove=obj.removebeg();
                cout<<"\nRemoved value="<<remove;
                break;
            case 5:
                remove=obj.removeend();
                cout<<"\nRemoved value="<<remove;
                break;
            case 6:
                cout<<"\nAfter which node=";
                cin>>after;
                remove=obj.removebet(after);
                cout<<"\nRemoved value="<<remove;
                break;
            case 7:
                cout<<"\nEnter node for searching=";
                cin>>sr;
                obj.search(sr);
                break;
            case 8:
                obj.reverse();
                break;
            case 9:
                obj.count();
                break;
            case 10:
                obj.display();
                break;
            case 11:
                exit(3);
                break;
            default:
                cout<<"\nInvalid choise.\nPlease enter valid choise.";
                break;
        }
    }while(ch!=11);
    return(0);
}