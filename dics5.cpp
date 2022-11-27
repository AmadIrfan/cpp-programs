#include<iostream>
using namespace std;
int main()
{
int amu, tot,dic;
string day,month;
cout<<"Enter  total purchase amount..";
cin>>amu;
cout<<"Enter the Day..";
cin>>day;
cout<<"Enter the Month..";
cin>>month;
if((month=="october" && day=="sunday") || (month =="november" && day=="thursday") ) {
dic=0.1*amu;
}

tot=amu-dic;
cout<<"total bill.."<<amu<<endl;
cout<<"total payable bill.."<<tot;

}