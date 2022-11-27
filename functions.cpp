#include<iostream>
using namespace std;
void manuprint();
void name();
main(){
manuprint();
name();

}
void manuprint(){
int n;
for(
    n=1; n<=80; n++){
        cout<<" * ";
    }

}
void name(){
    string na;
cout<<"Enter name... ";
cin>>na;
cout<<"your name is "<<na;
}
