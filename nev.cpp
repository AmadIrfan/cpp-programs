#include <iostream>
using namespace std;
int main()
{
    int opt, fsc, matric, ecat, press, cho;
    string name, per1, per2, per3;
    float Merit;
    cout << "************************************************************************" << endl;
    cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
    cout << "************************************************************************" << endl;
    cout << endl
         << endl;
    cout << "main manu >" << endl;
    cout << "-----------------------------------------------------------" << endl;
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
    // main manu ends
    cin >> opt;
    system("cls");
    cout << "************************************************************************" << endl;
    cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
    cout << "************************************************************************" << endl;
    cout << endl
         << endl;
    if (opt == 1)
    {
        cout << "main manu > Add stuents" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "Enter student name........................ ";
        cin >> name;
        cout << "Enter  Obtained marks in Matric .......... ";
        cin >> matric;
        if (matric > 1100)
        {
            cout << "Matric marks is always less then or equal to 1100" << endl;
            cout << "Enter  Obtained marks in Matric .......... ";
            cin >> matric;
        }
        cout << "Enter  Obtained marks in F.S.C ........... ";
        cin >> fsc;
        if (fsc > 1100)
        {
            cout << "F.S.C marks is always less then or equal to 1100" << endl;
            cout << "Enter  Obtained marks in F.S.C .......... ";
            cin >> fsc;
        }
        cout << "Enter  Obtained marks in ECAT ........... ";
        cin >> ecat;
        if (ecat > 400)
        {
            cout << "ECAT marks is always less then or equal to 400" << endl;
            cout << "Enter  Obtained marks in ECAT .......... ";
            cin >> ecat;
        }
        Merit = fsc * 0.05 + matric * 0.02 + ecat * 0.03;
        cout << "*****   Enter the name for following porgram   *****" << endl;
        cout << " CS \t\t\t SC \t\t\t IT" << endl;
        cout << "*****************************************************" << endl;
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
        if (press == 1)
        {
            system("CLS");
            cout << "************************************************************************" << endl;
            cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
            cout << "************************************************************************" << endl;
            cout << endl
                 << endl;
            cout << "main manu >" << endl;
            cout << "-----------------------------------------------------------" << endl;
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
            cin >> opt;
        }
    }
    if (opt == 2)
    {
        system("cls");
        cout << "************************************************************************" << endl;
        cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
        cout << "************************************************************************" << endl;
        cout << endl
             << endl;
        cout << "main manu > Show All students" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "Name\tM_marks\tF_Marks\tECAT\tMerit\tper1\tper2\tper3" << endl;
        cout << name << "\t" << matric << "\t" << fsc << "\t" << ecat << "\t" << Merit << "\t" << per1 << "\t" << per2 << "\t" << per3 << endl;
        cout << endl;
        cout << endl;
        // cout << "Press any key for continue.....";
        // cin >> press;
        // if (press != 1000)
        // {

        //     system("CLS");
        //     cout << "************************************************************************" << endl;
        //     cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
        //     cout << "************************************************************************" << endl;
        //     cout << endl
        //          << endl;
        //     cout << "main manu >" << endl;
        //     cout << "-----------------------------------------------------------" << endl;
        //     cout << "Select one of the following opetion number " << endl;
        //     cout << "1.Add a new student Record " << endl;
        //     cout << "2.view all Record " << endl;
        //     cout << "3.Print the Record in the Merit order " << endl;
        //     cout << "4.Generate Merit list" << endl;
        //     cout << "5.Programm seat Managment" << endl;
        //     cout << "6.Exit" << endl;
        //     cout << endl
        //          << endl;
        //     cout << "Your Option...";
        //     cin >> opt;
        // }
    }
    if (opt == 5)
    {
        system("CLS");
        cout << "************************************************************************" << endl;
        cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
        cout << "************************************************************************" << endl;
        cout << endl
             << endl;
        cout << "main manu >" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "Select one of the following opetion number " << endl;
        cout << "1.View all the seats " << endl;
        cout << "2.Increase the program capasity " << endl;
        cout << "3.Add new Seats " << endl;
        cout << "4.Previous manu " << endl;
        cout << endl
             << endl;
        cout << "chose Your Option...";
        cin >> cho;
        if (cho == 1)
        {
            /* code */
        }
        if (cho == 2)
        {
            /* code */
        }
        if (cho == 3)
        {
            /* code */
        }
        if (cho == 4)
        {
            system("CLS");
            cout << "************************************************************************" << endl;
            cout << "*****       University of Engineering and Tecnology Lahore         *****" << endl;
            cout << "************************************************************************" << endl;
            cout << endl
                 << endl;
            cout << "main manu >" << endl;
            cout << "-----------------------------------------------------------" << endl;
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
            cin >> opt;
        }
    }
}