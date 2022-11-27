#include<iostream>
using namespace std;
int main(){
int per,tot;
float dic;
string cty;
cout<<"Enter country Name ... ";
cin>>cty;
cout<<"Enter Price ... ";
cin>>per;
if(cty=="ireland"){
dic=0.1*per;
}
else{
dic=0.05*per;
}
tot=per-dic;
cout<<"total price "<<per<<endl;
cout<<"Discounted price " <<tot;
}