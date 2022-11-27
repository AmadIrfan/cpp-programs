#include <iostream>
using namespace std;
char code[] = {'a', 'b', 'c', 'd', 'e'};
double per[] = {0.25, 0.10, 0.20, 0.30, 0.50};
void price_checker(int index, int price, int ppi);
int index_finder(char c);
int main()
{
    int item_total, item_price, index;
    char item_disct;
    cout << "Enter total item: ";
    cin >> item_total;
    cout << "Enter price per item: ";
    cin >> item_price;
    cout << "Enter code for discount: ";
    cin >> item_disct;
    index = index_finder(item_disct);
    price_checker(index, item_total, item_price);
    return 0;
}
int index_finder(char cho)
{
    for (int i = 0; i < 5; i++)
    {
        if (cho == code[i])
        {
            return i;
        }
    }
    return -1;
}
void price_checker(int index, int price, int ppi)
{
    int tp;
    if (index >= 0 && index <= 4)
    {
        tp = ppi * price - (ppi * price * per[index]);
        cout << "your total is : " << tp;
    }
    else
    {
        cout << "you enter invalid code";
    }
}