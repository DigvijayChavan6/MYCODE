#include<iostream>
using namespace std;
typedef struct emp{
    int id;
    string name;
}ep;
typedef union dei{
    int twid;
    float gh;
    char ui;
    //string trname;
}re;

int main(int argc, char *argv[])
{
    enum step{exercise,breakfast,college,movie,study};
    step pp=study;
    cout<<pp<<endl;
    re ppp;
	ppp.twid=7;
	cout<<"Name: "<<ppp.twid<<endl;
	ep  em;
	em.id=34;
	em.name="Deva";
	cout<<"Emploee ID: "<<em.id<<endl;
	cout<<"Employee Name: "<<em.name;
	return 0;
}