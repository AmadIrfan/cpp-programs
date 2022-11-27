#include <iostream>
 #include <conio.h>
 #include <fstream>
 #include <windows.h>
 using namespace std;
// HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
// HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
// COORD CursorPosition;
// // declaration of global variables
// int idx = 0, checklength = 0;
// // declaration of arrays
// string name[100];
// string pwd[100];
// string role[100];

// // funtion prototypes
// void printname();
// void header();
// int mainmenu();
// string signin();
// int checkname(string n, string p);
// void signup();
// void exit();

main()
{
    char name[5]={'1','2','3','4','5'};
    for (int i = 0; i < 5; i++)
    {
      cout<<name[i];
    }
    
}
//     system("cls");

//     // declaration of variables in main function
//     int option = 0;
//     // to print the name of the system on the console
//     printname();
//     getch();
//     while (option < 3)
//     // system("cls");
//     //  to print the header on the console
//     //   header();
//     // to show the main menu on the console
//     {
//         /* code */

//         option = mainmenu();
//         // to sign in in the system
//         if (option == 1)
//         {
//             string role;
//             system("cls");
//             role = signin();
//             if (role == "admin")
//             {
//                      cout <<role<<" Welcome to CANDLEWOOD hotel management system" << endl;
//                            }
//             if (role == "user")
//             {
//                      cout <<role<<" Welcome to CANDLEWOOD hotel management system" << endl;
                
//             }
//             if (role == "res")
//             {
//                      cout <<role<<" Welcome to CANDLEWOOD hotel management system" << endl;
                
//             }
//             if (role == "asdf")
//             {
//                      cout <<role<<" Welcome to CANDLEWOOD hotel management system" << endl;
                
//             }
//             if (role == "asdfg")
//             {
//                      cout <<role<<" Welcome to CANDLEWOOD hotel management system" << endl;
                
//             }
//         }
//         // to sign up in the system
//         else if (option == 2)
//         {
//             system("cls");
//             signup();
//         }
//         // to exit the system
//         else if (option == 3)
//         {
//             system("cls");
//             exit();
//         }
//     }
// }
// // function to print the name on the screen
// void printname()
// {
//     SetConsoleTextAttribute(color, 3);
//     string line;
//     fstream file;
//     file.open("h.txt", ios::in);
//     while (!file.eof())
//     {
//         getline(file, line);
//         cout << line << endl;
//     }
//     file.close();
// }
// // function for the header
// void header()
// {
//     SetConsoleTextAttribute(color, 1);

//     cout << "                            *~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~*" << endl;
//     cout << "                                                                                        " << endl;
//     cout << "                                                    CANDLEWOOD" << endl;
//     cout << "                                            HOTEL MANAGEMENT SYSTEM" << endl;
//     cout << "                                                                                        " << endl;
//     cout << "                            *~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~**~*" << endl;
// }
// // function to show the first menu on the console
// int mainmenu()
// {
//     SetConsoleTextAttribute(color, 4);
//     cout << "1- Sign in" << endl;
//     SetConsoleTextAttribute(color, 5);
//     cout << "2- Sign up" << endl;
//     SetConsoleTextAttribute(color, 2);
//     cout << "3- Exit" << endl;
//     SetConsoleTextAttribute(color, 9);
//     cout << "Enter any option: " << endl;
//     int option;
//     cin >> option;
//     return option;
// }
// // function to sign up in the system
// void signup()
// {
//     SetConsoleTextAttribute(color, 3);
//     cout << "Enter your name: " << endl;
//     cin>> name[idx];
//     SetConsoleTextAttribute(color, 4);
//     cout << "Enter your password: " << endl;
//     cin>> pwd[idx];
//     SetConsoleTextAttribute(color, 5);
//     cout << "Enter your role: " << endl;
//     cin>> role[idx];
//     idx++;
//     checklength++;
// }
// // function to sign up in the system
// string signin()
// {
//     int result;
//     SetConsoleTextAttribute(color, 5);
//     string n, p, r;
//     // na -name
//     // p  -password
//     // r  - role
//     cout << "Enter your name: " << endl;
//     cin>>n;
//     cout << "Enter your Password: " << endl;
//     cin>>p;
//     result = checkname(n, p);
//     cout<< role[result]<<endl;
//     return role[result];

//     // else

//     // {
//     //     SetConsoleTextAttribute(color, 4);
//     //     cout << "SorRy!!!!!!!!!!! yoU r nOT aBle tO eNter In tHis sYsteM " << endl;
//     // }
// }
// // funtion to check name whether the name exist in the system or not if the user sign in in the system
// int checkname(string n, string p)
// {
//     bool check = false;
//     for (int i = 0; i < idx; i++)
//     {
//         if (name[i] == n && pwd[i] == p)
//         {
//             cout << role[i] << endl;
//             return i;
//         }
//     }
// }

// // function to exit the system
// void exit()
// {
//     SetConsoleTextAttribute(color, 4);
//     cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
//     cout << "             Exiting..........";
//     exit(0);
// }