#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
void loadmaze();
void printmaze();
void ticket();
void updateMaze();
void clear_screen();
fstream file;
string maze[13][11];
main()
{
    loadmaze();

    int option = 0;
    while (option < 3)
    {
        clear_screen();
        cout << "main menu\n\n";
        cout << "1.view seats \n";
        cout << "2.Book seats \n";
        cout << "3.Exit \n";
        cout << "enter your option... \n";
        cin >> option;
        if (option == 1)
        {
            clear_screen();

            printmaze();
        }
        if (option == 2)
        {
            clear_screen();
              ticket();
   }
        if (option == 3)
        {
            break;
        }
    }
        updateMaze();
}
void loadmaze()
{
    file.open("maze.txt", ios::in);

    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            file >> maze[i][j];
        }
    }

    file.close();
}
void printmaze()
{
    //
    char val = 'A';
    for (char val = 'A'; val < 'G'; val++)
    {

        cout << " " << val;
    }
    cout << endl;
    for (int i = 0; i < 13; i++)
    {
        cout << i << "  ";

        for (int j = 0; j < 6; j++)
        {
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }
}
void ticket()
{
    string type;
    int row, col;
    cout << "Enter which type of ticket you want to reserve \n";
    cout << "Types pf tickets\nFirst\nBussiness\neconomy \n Enter class name";
    cin >> type;
    if (type == "firstclass" || type == "Firstclass" || type == "first")
    {
        char val = 'A';
        for (char val = 'A'; val < 'G'; val++)
        {

            cout << " " << val;
        }
        cout << endl;
        for (int i = 0; i < 2; i++)
        {
            cout<<i<<"  ";

            for (int j = 0; j < 6; j++)
            {

                cout << maze[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Enter row of your seat from 1 to 2 \n";
        cin >> row;
        cout << "Enter column of your seat from A to F \n";
        cin >> col;

        if (maze[row][col] == "*")
        {
            maze[row][col] = "X";

            cout << "Seat reserved" << endl;
            char val = 'A';
            for (char val = 'A'; val < 'G'; val++)
            {

                cout << "  " << val;
            }
            cout << endl;
            for (int i = 0; i < 2; i++)
            {
                cout << i << " ";

                for (int j = 0; j < 6; j++)
                {

                    cout << maze[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "your selected seat is already reserved plse chose anoter seat ";
        }
    }
    else if (type == "Bussiness")
    {
        char val = 'A';
        for (char val = 'A'; val < 'G'; val++)
        {

            cout << " " << val;
        }
        cout << endl;
        for (int i = 2; i < 7; i++)
        {
            cout << i << "  ";

            for (int j = 0; j < 6; j++)
            {

                cout << maze[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Enter row of your seat from 3 to 7 \n";
        cin >> row;
        cout << "Enter column of your seat from A to F \n";
        cin >> col;

        if (maze[row][col] == "*")
        {
            maze[row][col] = "X";

            cout << "Seat reserved" << endl;
            char val = 'A';
            for (char val = 'A'; val < 'G'; val++)
            {

                cout << " " << val;
            }
            for (int i = 2; i < 7; i++)
            {
                cout << i << "  ";

                for (int j = 0; j < 6; j++)
                {

                    cout << maze[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "your selected seat is already reserved plse chose anoter seat ";
        }
    }
    else if (type == "economy")
    {
                   char val = 'A';
            for (char val = 'A'; val < 'G'; val++)
            {

                cout << " " << val;
            }
            cout << endl;
            for (int i = 7; i < 13; i++)
            {

                cout << i << "  ";

                for (int j = 0; j < 6; j++)
                {

                    cout << maze[i][j] << " ";
                }
                cout << endl;
        }
        cout << "Enter row of your seat from 8 to 11 \n";
        cin >> row;
        cout << "Enter column of your seat from A to F \n";
        cin >> col;

        if (maze[row][col] == "*")
        {
            maze[row][col] = "X";

            cout << "Seat reserved" << endl;
            char val = 'A';
            for (char val = 'A'; val < 'G'; val++)
            {

                cout << " " << val;
            }
            cout << endl;
            for (int i = 7; i < 13; i++)
            {
                cout << i << "  ";

                for (int j = 0; j < 6; j++)
                {

                    cout << maze[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "your selected seat is already reserved plse chose anoter seat ";
        }
    }
    else
    {
        cout << "no seate availible";
    }
}

void clear_screen()
{
    //------------To clear screen--------------
    cout << "Press any key to continue " << endl;
    getch();
    system("CLS");
}
void updateMaze(){
    fstream file;
    file.open("maze.txt",ios::out);
    for (int i = 0; i < 13; i++)
    {
            for (int j = 0; j < 6; j++)
            {
                    file<<maze[i][j]<<" ";
            }
            file<<endl;           
    }
    file.close();
    
}