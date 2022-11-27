#include<iostream>
using namespace std;
int main(){
float speed;
string status;
cout<<"Enter your Speed... ";
cin>>speed;
if(speed<10)
status="Slow";
if(speed>10)
status="Average";
if(speed>50)
status="Fast";
if(speed>150)
status="Ultra Fast";
if(speed>1000)
status="Extremely Fast";
cout<<status;
}