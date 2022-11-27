//header files
#include <iostream>
using namespace std;
int main()
{
    //variable declarerd
    int days;
    string month, z_sign;
    cout << "Enter Days ";
    cin >> days;
    cout << "Enter month ";
    cin >> month;
    // condition
    if (month == "march")
    {

        {
            if (days >= 21 && days <= 31)
            {
                z_sign = "Aries";
            }
        }
        if (days >= 1 && days <= 20)
        {
            z_sign = "Pisces";
        }
    }

    if (month == "april")
    {
        if (days >= 1 && days <= 19)
        {
            z_sign = "Aries";
        }
        if (days >= 20 && days <= 30)
        {
            z_sign = "Taurus";
        }
    }
    if (month == "may")
    {
        if (days >= 1 && days <= 20)
        {
            z_sign = "Taurus";
        }
        if (days >= 21 && days <= 30)
        {
            z_sign = "Gemini";
        }
    }
    if (month == "june")
    {
        if (days >= 1 && days <= 20)
        {
            z_sign = "Gemini";
        }
        if (days >= 21 && days <= 30)
        {
            z_sign = "Cancer";
        }
    }
    if (month == "july")
    {
        if (days >= 1 && days <= 22)
        {
            z_sign = "Cancer";
        }
        if (days >= 23 && days <= 31)
        {
            z_sign = "leo";
        }
    }
    if (month == "august")
    {
        if (days >= 1 && days <= 23)
        {
            z_sign = "leo";
        }
        if (days >= 23 && days <= 31)
        {
            z_sign = "Virgu";
        }
    }
    if (month == "september")
    {
        if (days >= 1 && days <= 22)
        {
            z_sign = "Virgu";
        }
        if (days >= 23 && days <= 30)
        {
            z_sign = "libra";
        }
    }
    if (month == "october")
    {
        if (days >= 1 && days <= 22)
        {
            z_sign = "lirba";
        }
        if (days >= 23 && days <= 31)
        {
            z_sign = "Scorpio";
        }
    }
    if (month == "november")
    {
        if (days >= 1 && days <= 21)
        {
            z_sign = "Scorpio";
        }
        if (days >= 22 && days <= 30)
        {
            z_sign = "Sagittairus";
        }
    }
    if (month == "december")
    {
        if (days >= 1 && days <= 22)
        {
            z_sign = "Sagittairus";
        }
        if (days >= 23 && days <= 31)
        {
            z_sign = "Capricorn";
        }
    }
    if (month == "Junuary")
    {
        if (days >= 1 && days <= 19)
        {
            z_sign = "Capricorn";
        }
        if (days >= 20 && days <= 31)
        {
            z_sign = "Aquarius";
        }
    }
    if (month == "february")
    {
        if (days >= 1 && days <= 18)
        {
            z_sign = "Aquarius";
        }
        if (days >= 19 && days <= 28)
        {
            z_sign = "Pisces";
        }
    }
    cout << "Your zodiac sign " << z_sign;
}
