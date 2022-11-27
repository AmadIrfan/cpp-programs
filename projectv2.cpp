#include <iostream>
using namespace std;
// globally declared variables
string name, namea, nameb, namec, name1, pitem, name2, name3, name4, products;
string customer, buy, address, add;
float tprice, pprice, price, quant, price1, price2, price3, price4;
float profit, tprofit, discount, disc, rpro, tpro, quant1, quant2, quant3, quant4;
float nprice, pprice1, nprice2, nprice3, soldprice1, stockprice1;
float soldprice2, stockprice2, soldprice3, stockprice3, soldprice4, stockprice4;
int password, num, num1, y;
int check = 0;
// function prototypes

char header(char opt)
{
  cout << "***************************************************" << endl;
  cout << "               SPORTS SHOP MANAGEMENT SYSTEM          " << endl;
  cout << "****************************************************" << endl;
  cout << "USERS" << endl;
  cout << "a.As an admin" << endl;
  cout << "b.As a coustomer" << endl;
  cout << "c. exit" << endl;
  cout << "enter your option..............?" << endl;
  cin >> opt;
}
// function protype
void things(int price)
// recomended items
{
  cout << " names  \t\t   prices" << endl;
  cout << "  1ball  \t\t  40$ " << endl;
  cout << "  1bat    \t\t  500$ " << endl;
  cout << "  football \t\t  800$" << endl;
  cout << " badminten \t\t   1000$ " << endl;
  cout << "enter customer name" << endl;
  cin >> customer;
  cout << " enter the address" << endl;
  cin >> address;
  cout << " enter the customer mobile number";
  cin >> num;
}

// function prototype
int menu(int password, int x)
{

  cout << "enter password as an admin.........." << endl;
  cin >> password;
  if (password == 321)
  {
    while (x != 10)
    {
      check = check + 1;

      cout << "**********************************************************" << endl;
      cout << "                     ADMIN MODULE                         " << endl;
      cout << "**********************************************************" << endl;
      cout << "             " << endl;
      cout << "MENU" << endl;
      cout << "*************************************" << endl;
      cout << "1.Add products and categories" << endl;
      cout << "2.Edit products and categories" << endl;
      cout << "3.Manage orders" << endl;
      cout << "4.Manage stock" << endl;
      cout << "5.sold items" << endl;
      cout << "6.Profit and loss" << endl;
      cout << "7.discount" << endl;
      cout << "8.price wise products" << endl;
      cout << "9.exit" << endl;
      cout << "10.previous menu" << endl;
      cout << "   your option....................?" << endl;
      cin >> x;

      if (x == 1)
      {

        if (check == 1)
        {

          cout << "  add product name" << endl;
          cin >> name1;
          cout << " add product price " << endl;
          cin >> price1;
          cout << " add quantity of product" << endl;
          cin >> quant1;
        }
        if (check == 2)
        {
          cout << "  add product name" << endl;
          cin >> name2;
          cout << " add product price " << endl;
          cin >> price2;
          cout << " add quantity of product" << endl;
          cin >> quant2;
        }
        if (check == 3)
        {
          cout << "  add product name" << endl;
          cin >> name3;
          cout << " add product price " << endl;
          cin >> price3;
          cout << " add quantity of product" << endl;
          cin >> quant3;
        }
        if (check == 4)
        {

          cout << "  add product name" << endl;
          cin >> name4;
          cout << " add product price " << endl;
          cin >> price4;
          cout << " add quantity of product" << endl;
          cin >> quant4;
        }
        cout << " name \t\t price \t\t quantity" << endl;
        cout << name1 << "\t\t" << price1 << "\t\t" << quant1 << endl;
        cout << name2 << "\t\t" << price2 << "\t\t" << quant2 << endl;
        cout << name3 << "\t\t" << price3 << "\t\t" << quant3 << endl;
        cout << name4 << "\t\t" << price4 << "\t\t" << quant4 << endl;
      }
      if (x == 2)
      {
        check = check + 1;
        if (check == 1)
        {
          cout << "no products to edit" << endl;
        }
        if (check == 2)
        {

          string products, del;
          int upd, a;
          cout << "edit  previous name" << endl;
          cin >> products;

          if (products == name1)
          {
            cout << "enter new name of the product";
            cin >> namea;
            cout << "enter previous price";
            cin >> pprice;
            if (pprice == price1)
            {
              cout << "enter new price";
              cin >> nprice;
            }
          }
        }
        if (check == 3)
        {
          cout << "edit previous name" << endl;
          cin >> products;

          if (products == name2)
          {
            cout << "enter new name of the product";
            cin >> nameb;
            cout << "enter previous price";
            cin >> pprice;
            if (pprice == price2)
            {
              cout << "enter new price";
              cin >> nprice2;
            }
          }
        }
        if (check == 4)
        {
          cout << "1.edit name" << endl;
          cin >> products;

          if (products == name3)
          {
            cout << "enter new name of the product";
            cin >> namec;
            cout << "enter previous price";
            cin >> pprice;
            if (pprice == price3)
            {
              cout << "enter new price";
              cin >> nprice3;
            }
          }
        }
        cout << " new product \t\t  new price" << endl;
        cout << namea << "\t\t" << nprice << "\t\t" << endl;
        cout << nameb << "\t\t" << nprice2 << "\t\t" << endl;
        cout << namec << "\t\t" << nprice3 << "\t\t" << endl;
      }
      if (x == 3)
      {
        int a;
        cout << "check order status" << endl;
        cout << "order placed by customer" << endl;
        cout << "1.processing" << endl;
        cout << "2.complete" << endl;

        cin >> a;
        if (a == 1)
        {
          things(price);
        }
        if (a == 2)
        {
          cout << "lending your parcel to mentioned address" << endl;
        }
        system("cls");
      }
      if (x == 4)
      {
        string name;

        cout << "enter name of products remaining" << endl;
        cin >> name;
        cout << "enter number of remaining products" << endl;
        cin >> rpro;
        cout << "enter total number of product from stock" << endl;
        cin >> tpro;
        cout << "your reaming products from stock " << rpro << "from total product of" << name;
        system("cls");
      }
      if (x == 5)
      {
        string sitem, sold;
        if (sitem == name)
        {

          cout << "enter name of item you want to see sold " << endl;
          cin >> sitem;
          sold = tpro - rpro;
          cout << " sold item" << sitem << sold;
        }
      }
      // option to see loss on per item
      if (x == 6)
      {

        check = check + 1;
        if (check == 1)
        {
          cout << "plz enter some products to see loss" << endl;
        }
        if (check == 2)
        {

          cout << "enter the name of product" << endl;
          cin >> pitem;
          cout << "in which price you bought product from stock" << endl;
          cin >> stockprice1;

          cout << "in which price you sold product" << endl;
          cin >> soldprice1;
          if (pitem == name1)
          {

            profit = soldprice1 - stockprice1;
            tprofit = profit * quant1;

            cout << "your profit on" << pitem << "profit is" << tprofit;
          }
        }
        if (check == 3)
        {

          cout << "enter the name of product" << endl;
          cin >> pitem;
          cout << "in which price you bought product from stock" << endl;
          cin >> stockprice2;

          cout << "in which price you sold product" << endl;
          cin >> soldprice2;
          if (pitem == name2)
          {

            profit = soldprice2 - stockprice2;
            tprofit = profit * quant2;

            cout << "your profit on" << pitem << "profit is" << tprofit;
          }
        }
        if (check == 4)
        {

          cout << "enter the name of product" << endl;
          cin >> pitem;
          cout << "in which price you bought product from stock" << endl;
          cin >> stockprice3;
          cout << "in which price you sold product" << endl;
          cin >> soldprice3;
          if (pitem == name3)
          {

            profit = soldprice3 - stockprice3;
            tprofit = profit * quant3;

            cout << "your profit on" << pitem << "profit is" << tprofit;
          }
        }
        if (check == 5)
        {

          cout << "enter the name of product" << endl;
          cin >> pitem;
          cout << "in which price you bought product from stock" << endl;
          cin >> stockprice4;
          cout << "in which price you sold product" << endl;
          cin >> soldprice4;
          if (pitem == name4)
          {

            profit = soldprice4 - stockprice4;
            tprofit = profit * quant4;

            cout << "your profit on" << pitem << "profit is" << tprofit;
          }
        }
      }
      // option to give discount on products
      if (x == 7)
      {
        cout << "enter name of item you want to give discount " << endl;
        cin >> name1;
        cout << " how many discount in  percent you want to give on product" << endl;
        cin >> discount;
        cout << "enter the price of item" << endl;
        cin >> price;
        disc = price / discount * 100.0;
        tprice = disc - price;
        cout << "the price after discount is" << tprice << endl;
      }
      // sorting price wise of products
      if (x == 8)
      {
        if (price1 > price2 && price1 > price3 && price1 > price4)
        {
          if (price2 > price3 && price2 > price4)
          {
            if (price3 > price4)
            {
              cout << name1;
              cout << name2;
              cout << name3;
              cout << name4;
            }
          }
        }
        if (price2 > price1 && price2 > price3 && price2 > price4)
        {
          if (price1 > price3 && price1 > price4)
          {
            if (price3 > price4)
            {
              cout << name2;
              cout << name1;
              cout << name3;
              cout << name4;
            }
            if (price4 > price3)
            {
              cout << name2;
              cout << name1;
              cout << name4;
              cout << name3;
            }
          }
        }
        if (price3 > price2 && price3 > price1 && price3 > price4)
        {
          if (price1 > price2 && price1 > price4)
          {
            if (price2 > price4)
            {
              cout << name3;
              cout << name1;
              cout << name2;
              cout << name4;
            }
            if (price4 > price2)
            {
              cout << name3;
              cout << name1;
              cout << name4;
              cout << name2;
            }
          }
        }
        if (price4 > price1 && price4 > price2 && price4 > price3)
        {
          if (price3 > price2 && price3 > price1)
          {
            if (price2 > price1)
            {
              cout << name4;
              cout << name3;
              cout << name2;
              cout << name1;
            }
          }
          if (price1 > price2)
          {
            cout << name4;
            cout << name3;
            cout << name1;
            cout << name2;
          }
        }
      }

      if (x == 9)
      {
        char opt;
        header(opt);
      }
    }
  }
}
// function prototype
int a;
int umar(int password, int y)
{
  cout << "enter password";
  cin >> password;
  if (password = 123)
  {
    cout << "*******************************************************************" << endl;
    cout << "                      CUSTOMER MODULE                                 " << endl;
    cout << "*********************************************************************" << endl;
    cout << "MENU" << endl;
    cout << "***************************************************" << endl;

    cout << "1.buy product" << endl;
    cout << "2.place orders" << endl;
    cout << "3.bill payments" << endl;
    cout << "4.reviews" << endl;
    cout << "5.exit" << endl;
    cin >> a;
  }
  while (a != 5)
  {
    if (a == 1)
    {
      cout << "1.check available products" << endl;
      cout << "2check price" << endl;
      cout << "3.exit" << endl;
      cin >> y;
      if (y > 3)
      {
        cout << "name/t/t  price/t/t" << endl;
        cout << name1 << price1 << endl;
        cout << name2 << price2 << endl;
        cout << name3 << price3 << endl;
        cout << name4 << price4 << endl;
        cout << "recomended products" << endl;
        things(price);
      }
      if (y == 2)
      {
        cout << "name/t/t  price/t/t" << endl;
        cout << name1 << price1 << endl;
        cout << name2 << price2 << endl;
        cout << name3 << price3 << endl;
        cout << name4 << price4 << endl;
        cout << "recomended products" << endl;
        things(price);
        cout << "enter the product you want to buy";
        cin >> buy;
      }
    }
    if (y == 3)
    {

      char a, b;
      cout << "pay bill from card(y/n)" << endl;
      cin >> a;
      cout << "pay bill from cash(y/n)" << endl;
      cin >> b;
      cout << " enter your address";
      cin >> add;
      cout << "enter your number";
      cin >> num1;
    }
    if (y == 4)
    {
      string review;
      cout << "any review about product and service" << endl;
      cin >> review;
    }
  }
}
main()
{
  char opt, a, b, c;
  int password, x, y;
  header(opt);
  while (opt != c)
  {

    if (opt == a)
    {

      cout << menu(password, x);
    }
    if (opt == b)
    {
      cout << umar(password, y);
    }
  }
}
