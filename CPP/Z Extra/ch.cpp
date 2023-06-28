#include<iostream>
using namespace std;
int main(){
    char ch;
    string s="abc",st;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]=='a'){
            st=st+'z';
            continue;
        }
        ch=int(s[i])-1;
        st=st+ch;
    }
    st[i]='\0';
    cout<<st;
    return 0;
}