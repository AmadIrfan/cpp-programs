#include<iostream>
using namespace std;
int main(){
int hol,td,tfg;
cout<<"Enter holidays... ";
cin>>hol;
td=365-hol;
tfg=(td*63+hol*127);
if(tfg<30000)
cout<<"Tom sleep well";
else
cout<<"Tom will run away";
}