#include<iostream>
using namespace std;
int main()
{
int price,w1,w2,w3;
float weight;
string cls;
cout<<"Enter  ticket class..";
cin>>cls;
if(cls=="business") {
cout<<"Enter weiglht..";
cin>>weight;
if(weight>40){
w1=weight-40;
w2=w1*1000;
w3=w2+15000;
}
}
if(cls=="economy") {
cout<<"Enter  weight..";
cin>>weight;
if(weight>25){
w1=weight-25;
w2=w1*500;
w3=w2+8000;
}
}

cout<<"your class is "<<cls<<endl;
cout<<"total weight is "<<weight<<endl;
cout<<"you pay more "<<w2<<" because your weight is more then limit"<<endl;
cout<< "your total amount is "<<w3;
 

}