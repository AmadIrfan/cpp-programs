#include <iostream>
// #include <cmath>
using namespace std;
string vote(int age);
int main()
{
    int age;
   cout<<" Enter your age ";
   cin>>age;
cout<<vote(age);

}
string vote(int a){
    int age;
    if (a>=18)
    {
       string stat="your are eligible to vote.";
    return stat;
    }
    if (a<18)
    {
        /* code */
       string stat="your are not eligible to vote.";
    return stat;
    }
    

}