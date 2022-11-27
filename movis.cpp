#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,z;
    // float ;
    cout<<"Ticket Price for Adult:";
cin>>a;
    cout<<"Ticket Price for Child:";
cin>>b;
    cout<<"%age for charity:";
    cin>>c;
    cout<<"Total number of Ticket for Adults:";
cin>>d;
    cout<<"Total number of Ticket for Childs:";
cin>>e;
z=a*d+b*e;
f=z*c/100;
cout<<"Total amount of Tickets: ";
cout<<z <<endl;
cout<<"Total amount of Adult Tickets: ";
cout<<a*d <<endl;
cout<<"Total amount of child Tickets: ";
cout<<b*e <<endl;
cout<<"Total amount for charity: ";
cout<<f<<endl;
cout<<"Total amount of profit: ";
int s=z-f;
cout<<s <<endl;


}