#include <iostream>
using namespace std;
main(){
int h;
int x;
int y;

cout <<"Enter Height:";
cin>>h;

cout <<"Enter x component:";
cin >>x;

cout <<"Enter y component:";
cin >>y;
if(x==0 && y==0 || x==h*2 && y==2 || x==2 || y==2 || x==3 && y==h*2 || x==h*2 || x==h*3 && y==0 || x==0 && y==h*2 || x==0 && y==1 || y==(h*2)-1){
cout <<"Boundary";
}
else if(x==1 && y==1 || x==1 && y==(h*2)-1 || x==3 && y==(h*2)-1 || x==(h*2)-1 && y==1){
cout <<"Inside";
}
else{
cout <<"Outside";
}
}