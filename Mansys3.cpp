#include <iostream>
using namespace std;
char menu();
void starics();
main()
{
	int option = 0, check = 0, matric1, fsc1, ecat1, matric2, fsc2, ecat2, matric3, fsc3, ecat3, matric4, fsc4, ecat4;
	string name1, Spre11, Spre12, Spre13,name2, Spre21, Spre22, Spre23,name3, Spre31, Spre32, Spre33,name4, Spre41, Spre42, Spre43;
	while (option < 6)
	{
		option = menu();
		if (option == 1)
		{
		check++;
			if (check == 1)
			{
				system("cls");

				void starics();
				cout << "Main Menu  > Add Student" << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "Enter Student Name....................";
				cin >> name1;
				cout << "Enter Obtained Marks In Matric.........";
				cin >> matric1;
				cout << "Enter Obtained Marks in FSC...........";
				cin >> fsc1;
				cout << "Enter ECAT Marks......................";
				cin >> ecat1;
				cout << "*****  Enter The Name From The Following Programs*****" << endl;
				cout << "CS"
					 << "\t\t"
					 << "SE"
					 << "\t\t"
					 << "IT" << endl;
				cout << "******************************************************" << endl;
				cout << "Enter First Preference...........";
				cin >> Spre11;
				cout << "Enter Second Preference..........";
				cin >> Spre12;
				cout << "Enter Third Preference...........";
				cin >> Spre13;
				cout << endl;
				cout << endl;
				check++;
				cout << "Enter 1 to Save:- ";
				cin >> option;
			}
			if (check == 2)
			{
				system("cls");

				void starics();
				cout << "Main Menu  > Add Student" << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "Enter Student Name....................";
				cin >> name2;
				cout << "Enter Obtained Marks In Matric.........";
				cin >> matric2;
				cout << "Enter Obtained Marks in FSC...........";
				cin >> fsc2;
				cout << "Enter ECAT Marks......................";
				cin >> ecat2;
				cout << "*****  Enter The Name From The Following Programs*****" << endl;
				cout << "CS"
					 << "\t\t"
					 << "SE"
					 << "\t\t"
					 << "IT" << endl;
				cout << "******************************************************" << endl;
				cout << "Enter First Preference...........";
				cin >> Spre21;
				cout << "Enter Second Preference..........";
				cin >> Spre22;
				cout << "Enter Third Preference...........";
				cin >> Spre23;
				cout << endl;
				cout << endl;
				check++;
				cout << "Enter 1 to Save:- ";
				cin >> option;
			}
			if (check == 3)
			{
				system("cls");

				void starics();
				cout << "Main Menu  > Add Student" << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "Enter Student Name....................";
				cin >> name3;
				cout << "Enter Obtained Marks In Matric.........";
				cin >> matric3;
				cout << "Enter Obtained Marks in FSC...........";
				cin >> fsc3;
				cout << "Enter ECAT Marks......................";
				cin >> ecat3;
				cout << "*****  Enter The Name From The Following Programs*****" << endl;
				cout << "CS"
					 << "\t\t"
					 << "SE"
					 << "\t\t"
					 << "IT" << endl;
				cout << "******************************************************" << endl;
				cout << "Enter First Preference...........";
				cin >> Spre31;
				cout << "Enter Second Preference..........";
				cin >> Spre32;
				cout << "Enter Third Preference...........";
				cin >> Spre33;
				cout << endl;
				cout << endl;
				check++;
				cout << "Enter 1 to Save:- ";
				cin >> option;
			}
			if (check == 4)
			{
				system("cls");

				void starics();
				cout << "Main Menu  > Add Student" << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "Enter Student Name....................";
				cin >> name4;
				cout << "Enter Obtained Marks In Matric.........";
				cin >> matric4;
				cout << "Enter Obtained Marks in FSC...........";
				cin >> fsc4;
				cout << "Enter ECAT Marks......................";
				cin >> ecat4;
				cout << "*****  Enter The Name From The Following Programs*****" << endl;
				cout << "CS"
					 << "\t\t"
					 << "SE"
					 << "\t\t"
					 << "IT" << endl;
				cout << "******************************************************" << endl;
				cout << "Enter First Preference...........";
				cin >> Spre41;
				cout << "Enter Second Preference..........";
				cin >> Spre42;
				cout << "Enter Third Preference...........";
				cin >> Spre43;
				cout << endl;
				cout << endl;
				check++;
				cout << "Enter 1 to Save:- ";
				cin >> option;
			}
		}
	}
}
char menu()
{
	int option;
	starics();
	cout << "Main Menu  >" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "Select One Of The Following Option Number:- " << endl;
	cout << "1:- Add New Student Record" << endl;
	cout << "2:- View All Records" << endl;
	cout << "3:- Print The Record In Merit Order" << endl;
	cout << "4:- Generate Merit List" << endl;
	cout << "5:- Exit" << endl;
	cout << "Your Option....";
	cin >> option;
	return option;
}

void starics()
{
	system("cls");
	int i;
	for (i = 0; i < 20; i++)
	{
		cout << " ";
	}
	for (i = 0; i < 66; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (i = 0; i < 20; i++)
	{
		cout << " ";
	}
	cout << "******   University Of Engineering And Technology Lahore   *******" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << " ";
	}
	for (i = 0; i < 66; i++)
	{
		cout << "*";
	}
	cout << endl
		 << endl;
}