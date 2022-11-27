#include <iostream>
using namespace std;
int option, x, y, z, w, op;
void header();
void menu();
void sm();
void cm();
void things();
main()
{

    option = 0;
    while (option != 3)
    {
        header();
        menu();
        if (option == 1)
        {
            sm();
            if (op < 8)
            {
                if (op == 1)
                {
                    things();
                }

                if (op == 2)
                {
                    cout << "enter price of cake" << endl;
                    cin >> x;
                    cout << "price of cake is:" << x << endl;
                    cout << "enter price of lays" << endl;
                    cin >> y;
                    cout << "price of lays is:" << y << endl;
                    cout << "enter price of pizza" << endl;
                    cin >> z;
                    cout << "price of pizza is:" << z << endl;
                    cout << "enter price of burger" << endl;
                    cin >> w;
                    cout << "price of burger is:" << w << endl;
                }

                if (op == 3)
                {
                    int costprice, saleprice, number;
                    float cakeprofit, laysprofit, pizzaprofit, burgerprofit, totalprofit;
                    string item;
                    cout << "enter item" << endl;
                    cin >> item;
                    if (item == "cake")
                    {
                        cout << "enter cake cost price" << endl;
                        cin >> costprice;
                        cout << "enter cake sale price" << endl;
                        cin >> saleprice;
                        cakeprofit = saleprice - costprice;
                        cout << "enter number of cakes" << endl;
                        cin >> number;
                        totalprofit = cakeprofit * number;
                        cout << "total profit on cakes is:" << totalprofit << endl;
                    }
                    if (item == "lays")
                    {
                        cout << "enter cake cost price" << endl;
                        cin >> costprice;
                        cout << "enter cake sale price" << endl;
                        cin >> saleprice;
                        laysprofit = saleprice - costprice;
                        cout << "enter number of  lays" << endl;
                        cin >> number;
                        totalprofit = laysprofit * number;
                        cout << "total profit on lays is" << totalprofit << endl;
                    }
                    if (item == "pizza")
                    {
                        cout << "enter pizza cost price" << endl;
                        cin >> costprice;
                        cout << "enter pizza sale price" << endl;
                        cin >> saleprice;
                        pizzaprofit = saleprice - costprice;
                        cout << "enter number of  pizza" << endl;
                        cin >> number;
                        totalprofit = pizzaprofit * number;
                        cout << "total profit on pizza is" << totalprofit << endl;
                    }
                    if (item == "burger")
                    {
                        cout << "enter burger cost price" << endl;
                        cin >> costprice;
                        cout << "enter burger sale price" << endl;
                        cin >> saleprice;
                        burgerprofit = saleprice - costprice;
                        cout << "enter number of  burger" << endl;
                        cin >> number;
                        totalprofit = burgerprofit * number;
                        cout << "total profit on burger is" << totalprofit << endl;
                    }
                }
                if (op == 4)
                {
                    int costprice, saleprice, number;
                    float cakeloss, laysloss, pizzaloss, burgerloss, totalloss;
                    string item;
                    cout << "enter item" << endl;
                    cin >> item;
                    if (item == "cake")
                    {
                        cout << "enter cake cost price" << endl;
                        cin >> costprice;
                        cout << "enter cake sale price" << endl;
                        cin >> saleprice;
                        cakeloss = saleprice - costprice;
                        cout << "enter number of cakes" << endl;
                        cin >> number;
                        totalloss = cakeloss * number;
                        cout << "total loss on cakes is:" << totalloss;
                    }
                    if (item == "lays")
                    {
                        cout << "enter cake cost price" << endl;
                        cin >> costprice;
                        cout << "enter cake sale price" << endl;
                        cin >> saleprice;
                        laysloss = saleprice - costprice;
                        cout << "enter number of  lays" << endl;
                        cin >> number;
                        totalloss = laysloss * number;
                        cout << "total loss on lays is" << totalloss;
                    }
                    if (item == "pizza")
                    {
                        cout << "enter pizza cost price" << endl;
                        cin >> costprice;
                        cout << "enter pizza sale price" << endl;
                        cin >> saleprice;
                        pizzaloss = saleprice - costprice;
                        cout << "enter number of  pizza" << endl;
                        cin >> number;
                        totalloss = pizzaloss * number;
                        cout << "total loss on pizza is" << totalloss;
                    }
                    if (item == "burger")
                    {
                        cout << "enter burger cost price" << endl;
                        cin >> costprice;
                        cout << "enter burger sale price" << endl;
                        cin >> saleprice;
                        burgerloss = saleprice - costprice;
                        cout << "enter number of  burger" << endl;
                        cin >> number;
                        totalloss = burgerloss * number;
                        cout << "total loss on burger is" << totalloss;
                    }
                }
                if (op == 5)
                {
                    int totalcakesleft, totallaysleft, totalpizzaleft, totalburgerleft, totalnumberofpizza, totalnumberofcakes, totalnumberoflays, totalnumberofburger, pizzasold, burgersold, cakessold, layssold;
                    string item;
                    cout << "enter item" << endl;
                    cin >> item;
                    if (item == "cake")
                    {
                        cout << "enter total number of cakes" << endl;
                        cin >> totalnumberofcakes;
                        cout << "enter total number of cakes sold" << endl;
                        cin >> cakessold;
                        totalcakesleft = totalnumberofcakes - cakessold;
                        cout << "cakes stock is:" << totalcakesleft;
                    }
                    if (item == "lays")
                    {
                        cout << "enter total number of lays" << endl;
                        cin >> totalnumberoflays;
                        cout << "enter total number of lays sold" << endl;
                        cin >> layssold;
                        totallaysleft = totalnumberoflays - layssold;
                        cout << "lays stock is:" << totallaysleft;
                    }
                    if (item == "pizza")
                    {
                        cout << "enter total number of pizza" << endl;
                        cin >> totalnumberofpizza;
                        cout << "enter total number of pizza sold" << endl;
                        cin >> pizzasold;
                        totalpizzaleft = totalnumberofpizza - pizzasold;
                        cout << "pizza stock is:" << totalpizzaleft;
                    }
                    if (item == "burger")
                    {
                        cout << "enter total number of burger" << endl;
                        cin >> totalnumberofburger;
                        cout << "enter total number of burger sold" << endl;
                        cin >> burgersold;
                        totalburgerleft = totalnumberofburger - burgersold;
                        cout << "burger stock is:" << totalburgerleft;
                    }
                }
                if (op == 6)
                {
                    string item;
                    int updatepriceofcake, updatepriceofburger, updatepriceoflays, updatepriceofpizza, pizzaadd, burgeradd, cakeadd, laysadd, previouspriceofcake, previouspriceofburger, previouspriceoflays, previouspriceofpizza;
                    cout << "enter item" << endl;
                    cin >> item;
                    if (item == "cake")
                    {
                        cout << "enter previous price of cake" << endl;
                        cin >> previouspriceofcake;
                        cout << "enter additional price of cake" << endl;
                        cin >> cakeadd;
                        updatepriceofcake = previouspriceofcake + cakeadd;
                        cout << "update price of cake is" << updatepriceofcake;
                    }
                    if (item == "lays")
                    {
                        cout << "enter previous price of lays" << endl;
                        cin >> previouspriceoflays;
                        cout << "enter additional price of lays" << endl;
                        cin >> laysadd;
                        updatepriceoflays = previouspriceoflays + laysadd;
                        cout << "update price of lays is" << updatepriceoflays;
                    }
                    if (item == "pizza")
                    {
                        cout << "enter previous price of pizza" << endl;
                        cin >> previouspriceofpizza;
                        cout << "enter additional price of pizza" << endl;
                        cin >> pizzaadd;
                        updatepriceofpizza = previouspriceofpizza + pizzaadd;
                        cout << "update price of pizza is" << updatepriceofpizza;
                    }
                    if (item == "burger")
                    {
                        cout << "enter previous price of burger" << endl;
                        cin >> previouspriceofburger;
                        cout << "enter additional price of burger" << endl;
                        cin >> burgeradd;
                        updatepriceofburger = previouspriceofburger + burgeradd;
                        cout << "update price of burger is" << updatepriceofburger;
                    }
                }
                // tp= total price and disc is discounted price....
                if (op == 7)
                {
                    float disc, tp;
                    int cakeprice, pizzaprice, laysprice, burgerprice;
                    float num;
                    string item;
                    cout << "enter item" << endl;
                    cin >> item;
                    if (item == "cake")
                    {
                        cout << "enter discount you want to give";
                        cin >> num;
                        cout << "enter cake price: ";
                        cin >> x;
                        disc = x * num / 100.0;
                        tp = x - disc;
                        cout << "so discount on cake is:" << tp;
                    }
                    if (item == "lays")
                    {
                        cout << "enter discount you want to give" << endl;
                        cin >> num;

                        disc= num / 100.0;
                        tp = laysprice * disc;
                        cout << "so discount on lays is:" << tp << endl;
                    }
                    if (item == "pizza")
                    {
                        cout << "enter discount you want to give" << endl;
                        cin >> num;
                        disc = num / 100.0;
                        tp = pizzaprice * disc;
                        cout << "so discount on pizza is:" << tp << endl;
                    }
                    if (item == "burger")
                    {
                        cout << "enter discount you want to give" << endl;
                        cin >> num;
                        disc = num / 100.0;
                        tp = burgerprice * disc;
                        cout << "so discount on burger is:" << tp << endl;
                    }
                }
            }
        }
    }
}
void header()
{
    cout << "         ***************************************************************" << endl;
    cout << "         ********************SHOP MANAGEMENT SYSTEM*********************" << endl;
    cout << "         ***************************************************************" << endl;
}
void menu()
{
    cout << "main menu>" << endl;
    cout << "---------------------------------" << endl;
    cout << "1-shopkeeper" << endl;
    cout << "2-customer" << endl;
    cout << "3-exit" << endl;
    cout << "enter your option: " << endl;
    cin >> option;
}
void sm()
{
    cout << "main menu>shopkeeper module" << endl;
    cout << "------------------------------" << endl;
    cout << "1-things for sale" << endl;
    cout << "2-price of all things" << endl;
    cout << "3-profit on different things" << endl;
    cout << "4-loss on different things" << endl;
    cout << "5-check stock of all things" << endl;
    cout << "6-update price of different thinns" << endl;
    cout << "7-give discount on different things" << endl;
    cout << "8-exit" << endl;
    cout << "choose option.............." << endl;
    cin >> op;
}
void cm()
{
    cout << "main menu>customer module" << endl;
    cout << "1-see things for purchase" << endl;
    cout << "2-see price of things" << endl;
    cout << "3-purchase things" << endl;
    cout << "4-return things in case of any default" << endl;
    cout << "5-pay bill" << endl;
    cout << "6-exit" << endl;
    cout << "enter any option:" << endl;
}
void things()
{
    cout << "1-cake" << endl;
    cout << "2-lays" << endl;
    cout << "3-pizza" << endl;
    cout << "4-burger" << endl;
}