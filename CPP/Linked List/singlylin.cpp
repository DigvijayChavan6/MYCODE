//Singly linear linked list
#include<iostream>
using namespace std;
class node{
    int info;
    node *next;
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
        p->info=val;
        p->next=NULL;
        list=p;
    }
    else{
        q=create();
        q->info=val;
        q->next=p;
        list=q;
    }
}
void node::insertend(int val){
    node *p,*q;
    p=list;
    if(p==NULL){
        p=create();
        p->info=val;
        p->next=NULL;
        list=p;
    }
    else{
        while(p->next!=NULL){
            p=p->next;
        }
        q=create();
        q->info=val;
        q->next=NULL;
        p->next=q;
    }
}
void node::insertbet(int val,int after){
    node *p,*q;
    int aft=0;
    p=list;
    if(p==NULL||p->next==NULL){
        cout<<"\nInsert Between is not possible....";
    }
    else{
        while(p->next!=NULL){
            if(p->info==after){
                q=create();
                q->info=val;
                q->next=p->next;
                p->next=q;
                aft=1;
            }    
            p=p->next;
        }
        if(aft==0){
            cout<<"\nValue of 'after' is NOT correct & \nValue of 'after' must be from 1st to 2nd last";
        }
    }
}
int node::removebeg(){
    node *p;
    int val;
    p=list;
    if(p==NULL){
        cout<<"\nLinked List is empty....";
        return(0);
    }
    else if(p->next==NULL){
        val=p->info;
        delete(p);
        list=NULL;
        return(val);
    }
    else{
        val=p->info;
        list=p->next;
        delete(p);
        return(val);
    }
}
int node::removeend(){
    node *p,*temp;
    int val;
    p=list;
    if(p==NULL){
        cout<<"\nLinked List is empty....";
        return(0);
    }
    else if(p->next==NULL){
        val=p->info;
        delete(p);
        list=NULL;
        return(val);
    }
    else{
        while(p->next->next!=NULL){
            p=p->next;
        }
        temp=p->next;
        val=temp->info;
        delete(temp);
        p->next=NULL;
        return(val);
    }
}
int node::removebet(int after){
    node *p,*temp;
    int val,aft=0;
    p=list;
    if((p==NULL)){
        cout<<"\nLinked List is empty....";
        return(0);
    }
    else if((p->next==NULL)||(p->next->next==NULL)){
        cout<<"\nRemove Between is NOT possible....";
        return(0);
    }
    else{
        while(p->next!=NULL){
            if(p->info==after){
                temp=p->next;
                val=temp->info;
                p->next=temp->next;
                delete(p);
                aft=1;
                break;
            }
            p=p->next;
        }
        if(aft==0){
            cout<<"\nValue of 'after' is NOT correct & \nValue of 'after' must be from 1st to 3rd last";
        }
        return(val);
    }
}
void node::search(int srch){
    node *p;
    int cnt=0;
    p=list;
    while(p!=NULL){
        if(p->info==srch){
            cnt++;
        }
        p=p->next;
    }
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
    node *t1,*t2,*t3=NULL;
    t1=list;
    while(t1!=NULL){
        t2=t1->next;
        t1->next=t3;
        t3=t1;
        t1=t2;
    }
    list=t3;
    cout<<"\nL.L. is Reversed.";
}
void node::count(){
    node *p;
    p=list;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    cout<<"\nTotal nodes="<<count;
}
void node::display(){
    node *p;
    p=list;
    while(p!=NULL){
        cout<<"\t"<<p->info;
        p=p->next;
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