#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

struct mylaptop
{
    string manufacturername;
    string model;
    float processer;
    int ram;
    int HDD;
    int generation;
    int price;
};
mylaptop take_input();
void display_output(mylaptop out);
int main()
{
    mylaptop input[5];
    for (int i = 0; i < 2; i++)
    {
        input[i] = take_input();
    }
    for (int i = 0; i < 2; i++)
    {
        display_output(input[i]);
    }

    return 0;
}
mylaptop take_input()
{
    mylaptop laptop;
    cout << "Enter Menufacturer Name: ";
    cin >> laptop.manufacturername;
    cout << "Enter Model: ";
    cin >> laptop.model;
    cout << "Enter Processor speed: ";
    cin >> laptop.processer;
    cout << "Enter ram speed: ";
    cin >> laptop.ram;
    cout << "Enter Hdd Size: ";
    cin >> laptop.HDD;
    cout << "Enter Generation: ";
    cin >> laptop.generation;
    cout << "Enter Price: ";
    cin >> laptop.price;
    return laptop;
}
void display_output(mylaptop out)
{
    cout << "leptop Menufacturer " << out.manufacturername << endl;
    cout << "leptop Modal " << out.model << endl;
    cout << "leptop processer " << out.processer << endl;
    cout << "leptop ram speed " << out.ram << endl;
    cout << "leptop HDD " << out.HDD << endl;
    cout << "leptop Generation " << out.generation << endl;
    cout << "leptop price " << out.price << endl;
}