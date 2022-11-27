#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float d,e,f,g;
    cout<<"Enter your F.S.C:";
    cin>>a;
    cout<<"Enter your Matric Marks:";
    cin>>b;
    cout<<"Enter your ECAT marks:";
    cin>>c;
    cout<<" your F.S.C %age is ";
    d=a*100/1100;
    cout<<d<<endl;
    cout<<"your Matric %age is ";
     e=b*100/1100;
    cout<<e<<endl;
    cout<<"your ECAT %age is ";
    f=c*100/400;
    cout<<f<<endl;
    g=a*70/1100+c*30/400;
    cout<<"your agregate is "; 
    cout<<g<<endl;
    if (g>=80)
    {
        cout<<"Congratulation you are eligibile For Admission in University of Engineering and Technology Lahore:";
    }
    else
    {
        cout<<"Oops Sorry!";
    }
    
}