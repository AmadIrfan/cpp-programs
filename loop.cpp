#include <iostream>
#include <conio.h>
// #include <cmath>
using namespace std;
int main()
{
     string id, uname, pass;
     system("cls");
     cout << "                               <=======================================================================>" << endl;
     cout << "                               <=====                     Car Rental System                       =====>" << endl;
     cout << "                               <=======================================================================>" << endl;
     cout << endl
          << endl
          << endl;
     cout << "Main Manu > owner login page  " << endl;
     cout << ">--------------------------------------------------";
     cout << endl
          << endl;
     cout << "\t \t \t Enter your ID ... " << endl;
     cout << endl
          << endl;
     cin >> id;
     cout << "\t \t \t Enter your User Name ... " << endl;
     cout << endl
          << endl;
     cin >> uname;
     cout << "\t \t \t Enter your pasword ... " << endl;
     cout << endl
          << endl;
     cin >> pass;
     cout << endl
          << endl;
     cout << "\t \t Press 1 to continue ";
     getch();
     while (id != "uet" && uname != "uet" && pass != "uet")
     {
          cout << endl;
          cout << "                                       You Entered wrong ID or PASSWORD " << endl;
          cout << "                                         press 1 to continue";
          getch;
          system("cls");
          cout << "                               <=======================================================================>" << endl;
          cout << "                               <=====                     Car Rental System                       =====>" << endl;
          cout << "                               <=======================================================================>" << endl;
          cout << endl
               << endl
               << endl;
          cout << "Main Manu > owner login page  " << endl;
          cout << ">--------------------------------------------------";
          cout << endl
               << endl;
          cout << "\t \t \t Enter your ID ... " << endl;
          cout << endl
               << endl;
          cin >> id;
          cout << "\t \t \t Enter your User Name ... " << endl;
          cout << endl
               << endl;
          cin >> uname;
          cout << "\t \t \t Enter your pasword ... " << endl;
          cout << endl
               << endl;
          cin >> pass;
          cout << endl
               << endl;
     }
     // if user enter right password

     system("CLS");
     cout << "                               <=======================================================================>" << endl;
     cout << "                               <=====                          your project                       =====>" << endl;
     cout << "                               <=======================================================================>" << endl;

     cout << endl
          << endl
          << endl;
     cout << "Main Manu > Car Onwer " << endl;
     cout << "--------------------------------------------------";
     cout << endl
          << endl;
     cout << "(1) : Dashboard" << endl;
     cout << "(2) : Show Your Cars" << endl;
     cout << "(3) : Add Cars" << endl;
     cout << "(4) : Delete Cars" << endl;
     cout << "(5) : Show Income Details" << endl;
     cout << "(6) : LOG OUT" << endl;

     cout << endl
          << endl;
     cout << "INPUT : ";
     getch;
     cout << endl
          << endl;
}