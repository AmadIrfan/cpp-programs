#include<iostream>
using namespace std;
long long total_digits(long long num);
int main()
{
    long long number,total;
    cout<<"enter number: ";
    cin>>number;
    total=total_digits(number);
    cout<<"Total="<<total;
    return 0;
}
long long total_digits(long long num)
{
    long long count=0;
    for(long long i=num ; i!=0; i=i/10)
    {
        count++;
    }
    return count;
}