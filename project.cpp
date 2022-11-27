#include <iostream>
using namespace std;
int main()
{
    int n, opt, fsc, matric, ecat, press;
    string name, per1, per2, per3;
    float Merit;
    //                                 first manu starts from here
    for (n = 1; n <= 72; n++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
    for (n = 1; n <= 72; n++)
    {
        cout << "*";
    }
    cout << endl;
    cout << endl
         << endl;
    cout << "main manu >" << endl;
    for (n = 1; n <= 50; n++)
    {
        cout << "-";
    }
    cout << endl;
    cout << endl;
    cout << "Select one of the following opetion number " << endl;
    cout << "1.Add a new student Record " << endl;
    cout << "2.view all Record " << endl;
    cout << "3.Print the Record in the Merit order " << endl;
    cout << "4.Generate Merit list" << endl;
    cout << "5.Programm seat Managment" << endl;
    cout << "6.Exit" << endl;
    cout << endl
         << endl;
    cout << "Your Option...";
    cin >>opt;
    //                                 first Ends here
    //  option 1 (1.Add a new student Record ) start from here
    if (opt == 1)
    {
        system("cls");
        for (n = 1; n <= 72; n++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
        for (n = 1; n <= 72; n++)
        {
            cout << "*";
        }
        cout << endl;
        cout << endl
             << endl;
        cout << "main manu > Add stuents" << endl;
        for (n = 1; n <= 50; n++)
        {
            cout << "-";
        }
        cout << endl;
        cout << endl;
        cout << "Enter student name........................ ";
        cin >> name;
        cout << "Enter  Obtained marks in Matric .......... ";
        cin >> matric;
        if (matric > 1100)
            cout << "Matric marks is always less then or equal to 1100" << endl;
        cout << "Enter  Obtained marks in F.S.C ........... ";
        cin >> fsc;
        if (fsc > 1100)
            cout << "F.S.C marks is always less then or equal to 1100" << endl;
        cout << "Enter  Obtained marks in ECAT ........... ";
        cin >> ecat;
        if (ecat > 400)
            cout << "ECAT marks is always less then or equal to 400" << endl;
        cout << "*****   Enter the name for following porgram   *****" << endl;
        cout << " CS \t\t\t SC \t\t\t IT" << endl;
        for (n = 1; n <= 50; n++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "*****   Enter First preference........... ";
        cin >> per1;
        cout << "*****   Enter Second preference........... ";
        cin >> per2;
        cout << "*****   Enter Third preference........... ";
        cin >> per3;
        cout << endl
             << endl
             << "Press 1 for save... ";
        cin >> press;
        Merit = 0.07 * fsc /*+0.02*matric*/ + 0.03 * ecat;
        if (press == 1)
        {
            system("CLS");
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << endl
                 << endl;
            cout << "main manu >" << endl;
            for (n = 1; n <= 50; n++)
            {
                cout << "-";
            }
            cout << endl;
            cout << endl;
            cout << "Select one of the following opetion number " << endl;
            cout << "1.Add a new student Record " << endl;
            cout << "2.view all Record " << endl;
            cout << "3.Print the Record in the Merit order " << endl;
            cout << "4.Generate Merit list" << endl;
            cout << "5.Programm seat Managment" << endl;
            cout << "6.Exit" << endl;
            cout << endl
                 << endl;
            cout << "Your Option...";
            cin >>opt;
        }
    }

    //
    //                                    option 1 (1.Add a new student Record ) Ends from here
    //                                       option 2 (2.view all Record) Start from here
    if (opt == 2)
    {
        system("cls");
        for (n = 1; n <= 72; n++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
        for (n = 1; n <= 72; n++)
        {
            cout << "*";
        }
        cout << endl;
        cout << endl
             << endl;
        cout << "main manu > Show All students" << endl;
        for (n = 1; n <= 50; n++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "Name\tM_marks\tF_mark\tECAT\tMerit\t1st_pre\t2nd_pre\t3rd_pre" << endl;
        cout << name << "\t" << matric << "\t" << fsc << "\t" << ecat << "\t" << Merit << "\t" << per1 << "\t" << per2 << "\t" << per3 << endl;
        cout << endl
             << endl
             << "Press 0 for Back.. ";
        cin >> press;
        if (press == 0)
        // back option in  opetion 2 start from here
        {
            system("CLS");
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << endl
                 << endl;
            cout << "main manu >" << endl;
            for (n = 1; n <= 50; n++)
            {
                cout << "-";
            }
            cout << endl;
            cout << endl;
            cout << "Select one of the following opetion number " << endl;
            cout << "1.Add a new student Record " << endl;
            cout << "2.view all Record " << endl;
            cout << "3.Print the Record in the Merit order " << endl;
            cout << "4.Generate Merit list" << endl;
            cout << "5.Programm seat Managment" << endl;
            cout << "6.Exit" << endl;
            cout << endl
                 << endl;
            cout << "Your Option...";
            cin >>opt;
        }
    }
    //                                       option 2 (2.view all Record) Ends here
    //                                       opetion 5(5.Programm seat Managment) start from here
    if (opt == 5)
    {
        int press1, press2, press3, press4, seat, srno;
        string dpna;
        system("cls");
        for (n = 1; n <= 72; n++)
        {
            cout << "*";
        }
        cout << endl;
        cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
        for (n = 1; n <= 72; n++)
        {
            cout << "*";
        }
        cout << endl;
        cout << endl
             << endl;
        cout << "main manu > Seat Managment" << endl;
        for (n = 1; n <= 50; n++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "1.View All Seats " << endl;
        cout << "2.Increase Program capacity " << endl;
        cout << "3.Add new  Seats " << endl;
        cout << "4.Privious manu " << endl;
        cout << endl
             << endl;
        cout << "Enter the opetion number...";
        cin >> press1;
        // press1 start from here
        if (press1 == 1) // press 1 of (view all seats) start from here
        {
            system("cls");
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << endl
                 << endl;
            cout << "main manu > Seat Managment > view all seats" << endl;
            for (n = 1; n <= 50; n++)
            {
                cout << "-";
            }
            cout << endl;
            if (srno == 1)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 2)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 3)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 4)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 5)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 6)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 7)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 8)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 9)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            if (srno == 10)
            {
                cout << srno << "\t\t" << dpna << "\t\t" << seat;
            }
            // press1 of (view all seats) ends here
        }

        if (press1 == 2) //press2 of (view all seats) starts from here
        {
            system("cls");
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << endl
                 << endl;
            cout << "main manu > Seat Managment < Increase Program capacity  " << endl;
            for (n = 1; n <= 50; n++)
            {
                cout << "-";
            }
            cout << endl;
            cout << "Enter sr.no ";
            cin >> srno;
            cout << "Enter programe Name ";
            cin >> dpna;
            cout << "Enter number of seats ";
            cin >> seat;
        }
        // press 2 ends here
        // press3 start from here
        if (press1 == 3)
        {
            system("cls");
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << endl
                 << endl;
            cout << "main manu > Seat Managment > Add new seats" << endl;
            for (n = 1; n <= 50; n++)
            {
                cout << "-";
            }
            cout << endl;
            cout << "Enter programe Name ";
            cin >> dpna;
            cout << "Enter number of seats ";
            cin >> seat;
            //                         press 3 in seat managments Ends here
        }
        //                         press 4 in seat managments start from here
        if (press1 == 4)
        {
            system("cls");
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
            for (n = 1; n <= 72; n++)
            {
                cout << "*";
            }
            cout << endl;
            cout << endl
                 << endl;
            cout << "main manu >" << endl;
            for (n = 1; n <= 50; n++)
            {
                cout << "-";
            }
            cout << endl;
            cout << endl;
            cout << "Select one of the following opetion number " << endl;
            cout << "1.Add a new student Record " << endl;
            cout << "2.view all Record " << endl;
            cout << "3.Print the Record in the Merit order " << endl;
            cout << "4.Generate Merit list" << endl;
            cout << "5.Programm seat Managment" << endl;
            cout << "6.Exit" << endl;
            cout << endl
                 << endl;
            cout << "Your Option...";
            cin >>opt;

        } // press4 in seat managments ends here

        //                                       opetion 5(5.Programm seat Managment) Ends from here
    }
}