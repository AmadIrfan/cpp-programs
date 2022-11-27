#include <iostream>
#include <conio.h>
using namespace std;
int tsalary[20];
string tean[20];
string qualification[20];
string names[20];
string fnames[20];
string Class[20];
void teachers();
void head();
void mainm();
void studentrecord();
void principalp();
void principall();
void students();
void studentp();
void studentl();
string n, n11, n22;
int usp = 0, prp = 0, pi, op, rolln, op2;
string upr, ust, st, pr;
int main()
{
    op = 0;
    while (op < 3)
    {
        system("cls");
        head();
        mainm();
        cout << "                           Your option is-------                          " << endl;
        cin >> op;

        if (op == 1)
        {
            system("cls");
            head();
            principall();
            // u==pr  p==12345

            if (upr == "pr" && prp == 12345)
            {

                system("cls");
                head();
                principalp();
                cout << "                     Your option is ----               " << endl;
                cin >> pi;

                if (pi == 1)
                {
                    system("cls");
                    students();

                    cout << "                 press any key to go back to main menu " << endl;
                    getch();
                }
            }

            system("cls");
            if (pi == 2)
            {
                head();
                studentrecord();
            }
            if (pi == 3)
            {

                head();
                teachers();
                cout << "       Press any key to go back to main menu      " << endl;
                getch();
            }
            if (pi == 4)
            {

                head();
                cout << "       No marksheet still uploaded                " << endl;
                cout << "       Press any key to go back to main menu      " << endl;
                getch();
            }
            if (pi == 5)
            {

                head();
                cout << "       No schedule still planned                   " << endl;
                cout << "       Press any key to go back to main menu        " << endl;
                getch;
            }
            if (pi == 6)
            {

                head();
                cout << "       All students record is clears               " << endl;
                cout << "       Press any key to go back to main menu       " << endl;
                getch();
            }
            if (pi == 7)
            {
                system("cls");
                head();
                cout << "       No teaches till added                       " << endl;
                cout << "       Press any key to go back to main menu       " << endl;
                getch();
            }
            if (pi == 8)
            {

                head();
                cout << "       No salary till designs                      " << endl;
                cout << "       Press any key to go back to main menu       " << endl;
                getch();
            }
            if (pi == 9)
            {

                head();
                cout << "       No pay till                                 " << endl;
                cout << "       Press any key to go back to main menu       " << endl;
                getch();
            }
            if (pi == 10)
            {

                head();
                cout << "      No unpay till                                " << endl;
                cout << "      Press any key to go back to main menu        " << endl;
                getch();
            }
            if (pi == 11)
            {
                exit(0);
            }
        }

        // FOR STUDENT

        if (op == 2)
        {
            system("cls");
            head();
            studentl();

            if (ust == "st" && usp == 102030)
            {

                while (op2 != 9)
                {
                    system("cls");
                    head();
                    studentp();
                    cout << "           Your option-----------          " << endl;
                    cin >> op2;
                    system("cls");
                    if (op2 == 1)
                    {
                        head();
                        cout << "       No attendence till                  " << endl;
                        cout << "       Press 1 to go back to main menu     " << endl;
                        getch();
                    }
                    if (op2 == 2)
                    {
                        head();
                        cout << "       No marks till added                 " << endl;
                        cout << "       Press 1 to go back to main menu     " << endl;
                        getch();
                    }
                    if (op2 == 3)
                    {
                        head();
                        cout << "       No grades till added                 " << endl;
                        cout << "       Press 1 to go back to main menu      " << endl;
                        getch();
                    }
                    if (op2 == 4)
                    {
                        head();
                        cout << "       No fee structure till upload        " << endl;
                        cout << "       Press 1 to go back to main menu     " << endl;
                        getch();
                    }
                    if (op2 == 5)
                    {
                        head();
                        cout << "       No exam schedule designed            " << endl;
                        cout << "       Press 1 to go back to main menu      " << endl;
                        getch();
                    }
                    if (op2 == 6)
                    {
                        head();
                        cout << "       No news till update                  " << endl;
                        cout << "       Press 1 to go back to main menu      " << endl;
                        getch();
                    }
                    if (op2 == 7)
                    {
                        head();
                        cout << "       No activities added                 " << endl;
                        cout << "       Press 1 to go back to main menu     " << endl;
                        getch();
                    }
                    if (op2 == 8)
                    {
                        head();
                        cout << "       No activities added                 " << endl;
                        cout << "       Press 1 to go back to main menu     " << endl;
                        getch();
                    }
                }
            }
        }

        if (op == 3)
        {

            cout << "                   Exiting..........................";
            // exit();
        }
    }
}
void head()
{
    cout << "                                                                                      " << endl;
    cout << "                           **********************************************             " << endl
         << endl;
    cout << "                           ******      COLLEGE ADMINISTRATIVE      ******             " << endl
         << endl;
    cout << "                           **********************************************             " << endl
         << endl;
    cout << "                                                                                      " << endl;
}
void mainm()
{
    cout << "                                            Main Menu                                        " << endl;
    cout << "                      -------------------------------------------------------------          " << endl;
    cout << "                                                                                             " << endl;
    cout << "                                   1.Principal------------------                             " << endl;
    cout << "                                   2.Student  ------------------                             " << endl;
    cout << "                                   3.Exit     ------------------                             " << endl
         << endl
         << endl;
}
void principalp()
{
    cout << "                                    Main Menu > Principal Page                  " << endl;
    cout << "                               ------------------------------------             " << endl;
    cout << "                                       1.  Add students                         " << endl;
    cout << "                                       2.  Total No of students                 " << endl;
    cout << "                                       3.  Total teachers                       " << endl;
    cout << "                                       4.  Students marksheets                  " << endl;
    cout << "                                       5.  Teacher's schedule                   " << endl;
    cout << "                                       6.  Delete old students records          " << endl;
    cout << "                                       7.  New teachers                         " << endl;
    cout << "                                       8.  Teachers salary                      " << endl;
    cout << "                                       9.  Pay                                  " << endl;
    cout << "                                       10. Unpay                                " << endl;
    cout << "                                       11. Exit                                 " << endl
         << endl;
}
void principall()
{
    cout << "                                Main Menu > Principal Log in page                " << endl;
    cout << "                        -----------------------------------------------          " << endl
         << endl;
    cout << "                                1.Username ------------                          " << endl;
    cin >> usp;
    cout << "                                2.Password -------------                         " << endl;
    cin >> prp;
}

void studentl()
{
    cout << "                                Main Menu > Student Log in page                " << endl;
    cout << "                        -----------------------------------------------        " << endl
         << endl;
    cout << "                                1.Username ------------                        " << endl;
    cin >> ust;
    cout << "                                2.Password -------------                       " << endl;
    cin >> usp;
}
void studentp()
{
    cout << "                               Main menu  > Student Page                                     " << endl
         << endl;
    cout << "                    -----------------------------------------------------                    " << endl;
    cout << "                                  1. Attendence                                              " << endl;
    cout << "                                  2. Marks                                                   " << endl;
    cout << "                                  3. Grades                                                  " << endl;
    cout << "                                  4. Fee struture                                            " << endl;
    cout << "                                  5. Exam schedule                                           " << endl;
    cout << "                                  6. Latest news about exams                                 " << endl;
    cout << "                                  7. Extra curriculam activities                             " << endl;
    cout << "                                  8. Co-curriculam activities                                " << endl;
    cout << "                                  9. Exit                                                    " << endl
         << endl;
}
void students()
{
    int num2;
    cout << "                            how many students you want to enter             " << endl;
    cin >> num2;
    for (int i = 0; i < num2; i++)
    {
        cout << "                             Enter The Name Of Student                     " << endl;
        cin >> names[i];
        cout << "                             Enter The Father Name Of Student              " << endl;
        cin >> fnames[i];
        cout << "                             Enter The Class Of Student                    " << endl;
        cin >> Class[i];
    }
}
void teachers()
{
    int num;
    cout << " How Many Teachers You Want To Enter " << endl;
    cin >> num;
    system("cls");
    for (int i = 0; i < num; i++)
    {

        cout << "                              Enter The Name Of Teachers                    " << endl;
        cin >> tean[i];
        cout << "                              Enter The Qualification Of Teachers           " << endl;
        cin >> qualification[i];
        cout << "                              Enter The Teachers Salary  (Maximum 250000 & Minimum 75000) " << endl;
        cin >> tsalary[i];
    }
    cout << "                              Press Any Key To Go To Main Menu              " << endl;
    getch();
}
void studentrecord()
{
    cout << "                 The Record Of All Students Are :-                    " << endl;
    cout << "                    names without spaces                               " << endl;
    cout << "NAME "
         << "      "
         << "Father Name "
         << "     "
         << "CLASS "
         << "      " << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << names[i] << "    " << fnames[i] << "    " << Class[i] << "     " << endl;
    }
    cout << "                                                                         " << endl;
    cout << "                press any key to go back to main menu                    " << endl;
    getch();
}
