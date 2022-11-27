#include<iostream>
using namespace std;
int main()
{
int one,two,three;
cout<<"Enter  number 1.. ";
cin>>one;
cout<<"Enter  number 2.. ";
cin>>two;
cout<<"Enter  number 3.. ";
cin>>three;
if(one==two){
if(one==three)
cout<<"3"<<endl;
}
if(one==two){
if(one!=three)
cout<<"2"<<endl;
}
if(one!=two){
if(one!=three)
cout<<"0"<<endl;
}
}