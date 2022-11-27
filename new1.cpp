#include<iostream>
using namespace std;
main()
{
int initial_velocity;
int time;
int Final_velocity;
int accalration;
cout<<"Enter the initial_velocity ";
cin>>initial_velocity;
cout<<"Enter the accalration ";
cin>>accalration;
cout<<"Enter time";
cin>>time;
Final_velocity= accalration*time-initial_velocity;
cout<<"Final_velocity is "<< Final_velocity;

}