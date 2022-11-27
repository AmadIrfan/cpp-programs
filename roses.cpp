#include<iostream>
using namespace std;
int main(){
int rr,wr,tp;
float total,dic,pay;
cout<<"Enter number of Red Rose...";
cin>>rr;
cout<<"Enter number of White Rose...";
cin>>wr;
cout<<"Enter number of Tulips...";
cin>>tp;
total=rr*2.00+wr*4.10+tp*2.50;
if(total>200.0){
dic=0.2*total;
}
else{
dic=total;
}
pay=total-dic;
cout<<"total amount is"<<total<<endl;
cout<<"Pay able price "<<pay<<endl;
}