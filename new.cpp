#include<iostream>
using namespace std;
int main(){
    int speed,distance,time;
    cout<<"Enter covered distance in kilometer : ";
    cin>>distance;
    cout<<"Enter covered time in hour: ";
    cin>>time;
    speed=distance/time;
    cout<<"your speed is "<<speed<<" km/hr";
}