/*A hotel offers two types of rooms: studio and apartment. Prices are in dollars ($). Write a program that
calculates the price of the whole stay for a studio and apartment. Prices depend on the month of the
stay:
May and October June and September July and August
Studio- 50$ / per night Studio - 75$ / per night Studio 76$ / per night
Apartment - 65$ / per
night
Apartment - 68$ /per night Apartment - 77$ / per night
The following discounts are also offered:
● For a studio, in case of more than 7 stays in May and October: 5% discount.
● For a studio, in case of more than 14 stays in May and October: 30% discount.
● For a studio, in case of more than 14 stays in June and September: 20% discount.*/

#include<iostream>
using namespace std;
int main()
{
    string month;
    float sprice,aprice,disc;
    int days;
    cout<<"Enter Month Of Stay: ";
    cin>> month;
    cout<<"Enter The Number Of Stays In integers: ";
    cin>> days;
    if((month=="may")||(month=="october"))
    {
        if((days>7)&&(days<14))
        {
            sprice=days*50.0;
            disc=sprice*0.05;
            sprice=sprice-disc;
            cout<<"Studio: "<<sprice<<"$"<<endl;
            aprice=days*65.0;
            cout<<"Appartment: "<<aprice<<"$";
        }
        if ((days>14))
        {
            sprice=days*50.0;
            disc=sprice*0.30;
            sprice=sprice-disc;
            cout<<"Studio: "<<sprice<<"$"<<endl;
            aprice=days*65.0;
            disc=aprice*0.10;
            aprice=aprice-disc;
            cout<<"Appartment: "<<aprice<<"$";
        }
        
    }
    if((month=="june")&&(month=="septtember"))
    {
         if(days>14)
        {
            sprice=days*75.0;
            disc=sprice*0.20;
            sprice=sprice-disc;
            cout<<"Studio: "<<sprice<<"$"<<endl;
            aprice=days*68.0;
            disc=aprice*0.10;
            aprice=aprice-disc;
            cout<<"Appartment: "<<aprice<<"$";
        }
        
        
    }
    
}