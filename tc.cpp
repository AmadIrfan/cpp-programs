#include<iostream>
using namespace std;
int main(){
int tc,tc1,tc2;
cout<<"Enter Temperature of city 1... ";
cin>>tc1;
cout<<"Enter Temperature of city 2... ";
cin>>tc2;
if(tc1>tc2){
tc=tc1-tc2;
}
else{
tc=tc2-tc1;
}
if(tc>10){
cout<<"Difference is too Big"<<endl;
}
cout<<"Program Ends";
}