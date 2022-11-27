/* Write a program that calculates and prints the bill for a cellular telephone company. The company offers
two types of service: regular and premium. Its rates vary, depending on the type of service. The rates are
computed as follows:
Regular service: $10.00 plus first 50 minutes are free. Charges for over 50 minutes are $0.20
per minute.
Premium service: $25.00 plus:
   For calls made during the day., the first 75 minutes are free; charges for more than 75 minutes are
$0.10 per minute.
   For calls made during the night, the first 100 minutes are free; charges for more than 100 minutes
are $0.05 per minute.
Your program should prompt the user to enter a service code (type char), and the number of minutes the
service was used.
A service code of r or R means regular service; a service code of p or P
means premium service. Treat any other character as an error. Your program
should output the type of service, the number of minutes the telephone service was used, and the
amount due from the user.
For the premium service, the customer may be using the service during the
day and the night(d or D for day and n or N for night). Therefore, to calculate the bill, you must
ask the user to input the number of minutes the service was used during the day and the number
of minutes the service was used during the night.*/

#include <iostream>
using namespace std;
int main()
{
    char rp, dn;
    int min, tot, tot2, tot1;
    cout << "Enter r or R for regular service p or P for Premium service " << endl;
    cin >> rp;
    if ((rp != 'p' && rp != 'P') && (rp != 'R' && rp != 'r'))
    {
        cout << "invalid input";
    }
    cout << "Enter minutes ";
    cin >> min;
    if (rp == 'r' || rp == 'R')
    {
        if (min < 50)
        {
            cout << "Your minutes are free ";
        }
        if (min >= 50)
        {
            tot = min - 50;
            tot1 = tot * 0.20;
            tot2 = tot1 = 10;
            cout << "Your total minutes are " << min << endl;
            cout << "Your total extra minutes are " << tot << endl;
            cout << "Your total services charges are " << tot2 << endl;
        }
    }

    else if (rp != 'p' || rp != 'P')
    {
        cout << "Enter D or d for Days and N or n for night ";
        cin >> dn;

        if (dn == 'd' || dn == 'D')
        {
            if (min < 75)
            {
                cout << "Your minutes are free ";
            }
            if (min >= 75)
            {
                tot = min - 75;
                tot1 = tot * 0.10;
                tot2 = tot1 + 25.00;
                cout << "Your total minutes are " << min << endl;
                cout << "Your total extra minutes are " << tot << endl;
                cout << "Your total services charges are " << tot2 << endl;
            }
        }
        else if (dn == 'N' || dn == 'n')
        {
            if (min < 100)
            {
                cout << "Your minutes are free ";
            }
            if (min >= 100)
            {
                tot = min - 100;
                tot1 = tot * 0.05;
                tot2 = tot1 + 25.00;
                cout << "Your total minutes are " << min << endl;
                cout << "Your total extra minutes are " << tot << endl;
                cout << "Your total services charges are " << tot2 << endl;
            }
        }
    }
}