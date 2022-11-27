#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int *pc;
    int num;
    num = 5;
    pc = &num;
    cout << "value of num " << &num << endl;
    cout << "Pc = " << pc << endl;
    return 0;
}