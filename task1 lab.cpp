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
int main()
{
    mylaptop input;
    input = take_input();
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