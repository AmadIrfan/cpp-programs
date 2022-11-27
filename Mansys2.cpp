#include <iostream>
using namespace std;
// to calculate merit this function is used.
float student(float fsc, float ecat);
int header();
void starics();
main()
{
	int option, b, ma1, fsc1, ecat1, ma2, fsc2, ecat2, ma3, fsc3, ecat3, ma4, fsc4, ecat4;
	float c, d, mer1, mer2, mer3, mer4;
	string name1, _1pre1, _1pre2, _1pre3, name2, _2pre1, _2pre2, _2pre3, name3, _3pre1, _3pre2, _3pre3, name4, _4pre1, _4pre2, _4pre3;
	starics();
	option = header();
	if (option < 5)
	{

		// adding 1st student.....
		if (option == 1)
		{
			system("cls");
			void starics();
			cout << "Main Menu  > Add Student" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "Enter Student Name....................";
			cin >> name1;
			cout << "Enter Obtained Marks In Matric.........";
			cin >> ma1;
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
			cin >> _1pre1;
			cout << "Enter Second Preference..........";
			cin >> _1pre2;
			cout << "Enter Third Preference...........";
			cin >> _1pre3;
			cout << endl;
			cout << endl;
			cout << "Enter 1 to Save:- ";
			cin >> b;
		}
		if (option == 2)
		{
			cout << "No User Entered";
		}
		if (option == 3)
		{
			cout << "No User Entered";
		}
		if (option == 4)
		{
			cout << "No User Entered";
		}
		// 1 student added.
		system("cls");
		option = header();
		// adding 2nd student........
		if (option == 1)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Add New Student Record" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "Enter Student Name....................";
			cin >> name2;
			cout << "Enter Obtained Marks In Matric.........";
			cin >> ma2;
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
			cin >> _2pre1;
			cout << "Enter Second Preference..........";
			cin >> _2pre2;
			cout << "Enter Third Preference...........";
			cin >> _2pre3;
			cout << endl;
			cout << endl;
			cout << "Enter 1 to Save:- ";
			cin >> b;

			// system("cls");
		}
		if (option == 2)
		{
			system("cls");
			starics();
			cout << "Main Menu  > View All Record" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			cout << "Name"
				 << "\t"
				 << "Matric"
				 << "\t"
				 << "FSC"
				 << "\t"
				 << "ECAT"
				 << "\t"
				 << "Merit"
				 << "\t"
				 << "1st"
				 << "\t"
				 << "2nd"
				 << "\t"
				 << "3rd" << endl;
			cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;

			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
			system("cls");
		}
		if (option == 3)
		{
			starics();
			cout << "Main Menu  > Print The Record In Merit Order" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			cout << "Name"
				 << "\t"
				 << "Matric"
				 << "\t"
				 << "FSC"
				 << "\t"
				 << "ECAT"
				 << "\t"
				 << "Merit"
				 << "\t"
				 << "1st"
				 << "\t"
				 << "2nd"
				 << "\t"
				 << "3rd" << endl;
			cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
			cout << " " << endl
				 << endl;
			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
		}
		if (option == 4)
		{
			starics();
			cout << "Main Menu  > Generate Merit List" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "1st Merit is: " << mer1;
			cout << " " << endl
				 << endl;
			cout << "Press 1 To Go Back...... ";
			cin >> b;
		}
		// 2nd student is added.
		system("cls");
		option = header();
		// adding 3rd student.......
		if (option == 1)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Add New Student Record" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "Enter Student Name....................";
			cin >> name3;
			cout << "Enter Obtained Marks In Matric.........";
			cin >> ma3;
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
			cin >> _3pre1;
			cout << "Enter Second Preference..........";
			cin >> _3pre2;
			cout << "Enter Third Preference...........";
			cin >> _3pre3;
			cout << endl;
			cout << endl;
			cout << "Enter 1 to Save:- ";
			cin >> b;
		}
		if (option == 2)
		{
			starics();
			cout << "Main Menu  > Show All Student" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			cout << "Name"
				 << "\t"
				 << "Matric"
				 << "\t"
				 << "FSC"
				 << "\t"
				 << "ECAT"
				 << "\t"
				 << "Merit"
				 << "\t"
				 << "1st"
				 << "\t"
				 << "2nd"
				 << "\t"
				 << "3rd" << endl;
			cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
			cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
			cout << " " << endl
				 << endl;
			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
			system("cls");
		}
		if (option == 3)
		{
			starics();
			cout << "Main Menu  > Print The Record In Merit Order" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			if (mer1 > mer2)
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
			}
			if (mer2 > mer1)
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
			}
			cout << " " << endl
				 << endl;
			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
			system("cls");
		}
		if (option == 4)
		{
			starics();
			cout << "Main Menu  > Generate Merit List" << endl;
			cout << "-------------------------------------------------------" << endl;
			if (mer1 > mer2)
			{
				cout << "1st Merit is: " << mer1;
				cout << "2nd Merit is: " << mer1;
			}
			if (mer2 > mer1)
			{
				cout << "1st Merit is: " << mer2;
				cout << "2nd Merit is: " << mer1;
			}
			cout << " " << endl
				 << endl;
			cout << "Press 1 To Go Back...... ";
			cin >> b;
		}
		// 3rd student added.
		system("cls");
		option = header();
		// adding 4th student
		if (option == 1)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Add New Student Record" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "Enter Student Name....................";
			cin >> name4;
			cout << "Enter Obtained Marks In Matric.........";
			cin >> ma4;
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
			cin >> _4pre1;
			cout << "Enter Second Preference..........";
			cin >> _4pre2;
			cout << "Enter Third Preference...........";
			cin >> _4pre3;
			cout << endl;
			cout << endl;
			cout << "Enter 1 to Save:- ";
			cin >> b;
		}
		if (option == 2)
		{
			system("cls");
			cout << "Main Menu  > Show All Student" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			mer3 = student(fsc3, ecat3);
			cout << "Name"
				 << "\t"
				 << "Matric"
				 << "\t"
				 << "FSC"
				 << "\t"
				 << "ECAT"
				 << "\t"
				 << "Merit"
				 << "\t"
				 << "1st"
				 << "\t"
				 << "2nd"
				 << "\t"
				 << "3rd" << endl;
			cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
			cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
			cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
			cout << " " << endl
				 << endl;
			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
			system("cls");
		}
		if (option == 3)
		{
			starics();
			cout << "Main Menu  > Print The Record In Merit Order" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			mer3 = student(fsc3, ecat3);
			if ((mer1 > mer2) && (mer1 > mer3))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				if (mer2 > mer3)
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				if (mer3 > mer2)
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
			}
			if ((mer2 > mer3) && (mer2 > mer1))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				if (mer3 > mer1)
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
				if (mer1 > mer3)
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
			}
			if ((mer3 > mer1) && (mer3 > mer2))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				if (mer2 > mer1)
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				if (mer1 > mer2)
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
			}
			cout << " " << endl
				 << endl;
			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
			system("cls");
		}
		if (option == 4)
		{
			starics();
			cout << "Main Menu  > Generate Merit List" << endl;
			cout << "-------------------------------------------------------" << endl;
			if ((mer1 > mer2) && (mer1 > mer3))
			{
				cout << "1st Merit is: " << mer1;
				if (mer2 > mer3)
				{
					cout << "2nd Merit is: " << mer2;
					cout << "3rd Merit is: " << mer3;
				}
				if (mer3 > mer2)
				{
					cout << "2nd Merit is: " << mer3;
					cout << "3rd Merit is: " << mer2;
				}
			}
			if ((mer2 > mer1) && (mer2 > mer3))
			{
				cout << "1st Merit is: " << mer2;
				if (mer1 > mer3)
				{
					cout << "2nd Merit is: " << mer1;
					cout << "3rd Merit is: " << mer3;
				}
				if (mer3 > mer1)
				{
					cout << "2nd Merit is: " << mer3;
					cout << "3rd Merit is: " << mer1;
				}
			}
			if ((mer3 > mer1) && (mer3 > mer2))
			{
				cout << "1st Merit is: " << mer3;
				if (mer1 > mer2)
				{
					cout << "2nd Merit is: " << mer1;
					cout << "3rd Merit is: " << mer2;
				}
				if (mer2 > mer1)
				{
					cout << "2nd Merit is: " << mer2;
					cout << "3rd Merit is: " << mer1;
				}
			}
			cout << " " << endl
				 << endl;
			cout << "Press 1 To Go Back...... ";
			cin >> b;
		}
		// 4th student added.
		system("cls");
		option = header();
		if (option == 1)
		{
			system("cls");
			cout << "You Can't Add More Students.";
		}
		if (option == 2)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Show All Student" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			mer3 = student(fsc3, ecat3);
			mer4 = student(fsc4, ecat4);
			cout << "Name"
				 << "\t"
				 << "Matric"
				 << "\t"
				 << "FSC"
				 << "\t"
				 << "ECAT"
				 << "\t"
				 << "Merit"
				 << "\t"
				 << "1st"
				 << "\t"
				 << "2nd"
				 << "\t"
				 << "3rd" << endl;
			cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
			cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
			cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
			cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
			cout << " " << endl
				 << endl;
			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
			system("cls");
		}
		if (option == 3)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Print The Record In Merit Order" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			mer3 = student(fsc3, ecat3);
			mer4 = student(fsc4, ecat4);
			if ((mer1 > mer2) && (mer1 > mer3) && (mer1 > mer4))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				if ((mer2 > mer3) && (mer2 > mer4))
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				if (mer3 > mer4)
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
				if (mer4 > mer3)
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
			}
			if ((mer2 > mer3) && (mer2 > mer4) && (mer2 > mer1))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				if ((mer3 > mer4) && (mer3 > mer1))
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
				if (mer4 > mer1)
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
				if (mer1 > mer4)
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
			}
			if ((mer3 > mer4) && (mer3 > mer1) && (mer3 > mer2))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				if ((mer4 > mer1) && (mer4 > mer2))
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
				if (mer1 > mer2)
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				if (mer2 > mer1)
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
			}
			if ((mer4 > mer1) && (mer4 > mer2) && (mer4 > mer3))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				if ((mer1 > mer2) && (mer1 > mer3))
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
				if (mer2 > mer3)
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
				if (mer3 > mer2)
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
			}
		}
		if (option == 4)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Generate Merit List" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "1st Merit is: " << mer1;
			if ((mer1 > mer2) && (mer1 > mer3) && (mer1 > mer4))
			{
				cout << "1st Merit is: " << mer1;
				if ((mer2 > mer3) && (mer2 > mer4))
				{
					cout << "2nd Merit is: " << mer2;
				}
				if (mer3 > mer4)
				{
					cout << "3rd Merit is: " << mer3;
					cout << "4th Merit is: " << mer4;
				}
				if (mer4 > mer3)
				{
					cout << "4th Merit is: " << mer4;
					cout << "3rd Merit is: " << mer3;
				}
			}
			if ((mer2 > mer3) && (mer2 > mer4) && (mer2 > mer1))
			{
				cout << "1st Merit is: " << mer2;
				if ((mer3 > mer4) && (mer3 > mer1))
				{
					cout << "2nd Merit is: " << mer3;
				}
				if (mer4 > mer1)
				{
					cout << "3rd Merit is: " << mer4;
					cout << "4th Merit is: " << mer1;
				}
				if (mer1 > mer4)
				{
					cout << "4th Merit is: " << mer1;
					cout << "3rd Merit is: " << mer4;
				}
			}
			if ((mer3 > mer4) && (mer3 > mer1) && (mer3 > mer2))
			{
				cout << "1st Merit is: " << mer3;
				if ((mer4 > mer1) && (mer4 > mer2))
				{
					cout << "2nd Merit is: " << mer4;
				}
				if (mer1 > mer2)
				{
					cout << "3rd Merit is: " << mer1;
					cout << "4th Merit is: " << mer2;
				}
				if (mer2 > mer1)
				{
					cout << "4th Merit is: " << mer2;
					cout << "3rd Merit is: " << mer1;
				}
			}
			if ((mer4 > mer1) && (mer4 > mer2) && (mer4 > mer3))
			{
				cout << "1st Merit is: " << mer4;
				if ((mer1 > mer2) && (mer1 > mer3))
				{
					cout << "2nd Merit is: " << mer1;
				}
				if (mer2 > mer3)
				{
					cout << "3rd Merit is: " << mer2;
					cout << "4th Merit is: " << mer3;
				}
				if (mer3 > mer2)
				{
					cout << "4th Merit is: " << mer3;
					cout << "3rd Merit is: " << mer2;
				}
			}
		}
		system("cls");
		option = header();
		if (option == 1)
		{
			system("cls");
			cout << "You Can't Add More Students.";
		}
		if (option == 2)
		{
			system("cls");
			starics();
			cout << "                      " << endl;
			cout << "                      " << endl;
			cout << "Main Menu  > Show All Student" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			mer3 = student(fsc3, ecat3);
			mer4 = student(fsc4, ecat4);
			cout << "Name"
				 << "\t"
				 << "Matric"
				 << "\t"
				 << "FSC"
				 << "\t"
				 << "ECAT"
				 << "\t"
				 << "Merit"
				 << "\t"
				 << "1st"
				 << "\t"
				 << "2nd"
				 << "\t"
				 << "3rd" << endl;
			cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
			cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
			cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
			cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
			cout << " " << endl
				 << endl;
			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
			system("cls");
		}
		if (option == 3)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Print The Record In Merit Order" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			mer3 = student(fsc3, ecat3);
			mer4 = student(fsc4, ecat4);
			if ((mer1 > mer2) && (mer1 > mer3) && (mer1 > mer4))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				if ((mer2 > mer3) && (mer2 > mer4))
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				if (mer3 > mer4)
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
				if (mer4 > mer3)
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
			}
			if ((mer2 > mer3) && (mer2 > mer4) && (mer2 > mer1))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				if ((mer3 > mer4) && (mer3 > mer1))
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
				if (mer4 > mer1)
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
				if (mer1 > mer4)
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
			}
			if ((mer3 > mer4) && (mer3 > mer1) && (mer3 > mer2))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				if ((mer4 > mer1) && (mer4 > mer2))
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
				if (mer1 > mer2)
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				if (mer2 > mer1)
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
			}
			if ((mer4 > mer1) && (mer4 > mer2) && (mer4 > mer3))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				if ((mer1 > mer2) && (mer1 > mer3))
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
				if (mer2 > mer3)
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
				if (mer3 > mer2)
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				cout << "Press 1 to go back to Main Menu: ";
				cin >> b;
			}
		}
		if (option == 4)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Generate Merit List" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "1st Merit is: " << mer1;
			if ((mer1 > mer2) && (mer1 > mer3) && (mer1 > mer4))
			{
				cout << "1st Merit is: " << mer1;
				if ((mer2 > mer3) && (mer2 > mer4))
				{
					cout << "2nd Merit is: " << mer2;
				}
				if (mer3 > mer4)
				{
					cout << "3rd Merit is: " << mer3;
					cout << "4th Merit is: " << mer4;
				}
				if (mer4 > mer3)
				{
					cout << "4th Merit is: " << mer4;
					cout << "3rd Merit is: " << mer3;
				}
			}
			if ((mer2 > mer3) && (mer2 > mer4) && (mer2 > mer1))
			{
				cout << "1st Merit is: " << mer2;
				if ((mer3 > mer4) && (mer3 > mer1))
				{
					cout << "2nd Merit is: " << mer3;
				}
				if (mer4 > mer1)
				{
					cout << "3rd Merit is: " << mer4;
					cout << "4th Merit is: " << mer1;
				}
				if (mer1 > mer4)
				{
					cout << "4th Merit is: " << mer1;
					cout << "3rd Merit is: " << mer4;
				}
			}
			if ((mer3 > mer4) && (mer3 > mer1) && (mer3 > mer2))
			{
				cout << "1st Merit is: " << mer3;
				if ((mer4 > mer1) && (mer4 > mer2))
				{
					cout << "2nd Merit is: " << mer4;
				}
				if (mer1 > mer2)
				{
					cout << "3rd Merit is: " << mer1;
					cout << "4th Merit is: " << mer2;
				}
				if (mer2 > mer1)
				{
					cout << "4th Merit is: " << mer2;
					cout << "3rd Merit is: " << mer1;
				}
			}
			if ((mer4 > mer1) && (mer4 > mer2) && (mer4 > mer3))
			{
				cout << "1st Merit is: " << mer4;
				if ((mer1 > mer2) && (mer1 > mer3))
				{
					cout << "2nd Merit is: " << mer1;
				}
				if (mer2 > mer3)
				{
					cout << "3rd Merit is: " << mer2;
					cout << "4th Merit is: " << mer3;
				}
				if (mer3 > mer2)
				{
					cout << "4th Merit is: " << mer3;
					cout << "3rd Merit is: " << mer2;
				}
			}
		}
		system("cls");
		option = header();
		if (option == 1)
		{
			system("cls");
			cout << "You Can't Add More Students.";
		}
		if (option == 2)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Show All Student" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			mer3 = student(fsc3, ecat3);
			mer4 = student(fsc4, ecat4);
			cout << "Name"
				 << "\t"
				 << "Matric"
				 << "\t"
				 << "FSC"
				 << "\t"
				 << "ECAT"
				 << "\t"
				 << "Merit"
				 << "\t"
				 << "1st"
				 << "\t"
				 << "2nd"
				 << "\t"
				 << "3rd" << endl;
			cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
			cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
			cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
			cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
			cout << " " << endl
				 << endl;
			cout << "Enter 1 to go back to Main Menu:- ";
			cin >> b;
			system("cls");
		}
		if (option == 3)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Print The Record In Merit Order" << endl;
			cout << "-------------------------------------------------------" << endl;

			mer1 = student(fsc1, ecat1);
			mer2 = student(fsc2, ecat2);
			mer3 = student(fsc3, ecat3);
			mer4 = student(fsc4, ecat4);
			if ((mer1 > mer2) && (mer1 > mer3) && (mer1 > mer4))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				if ((mer2 > mer3) && (mer2 > mer4))
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				if (mer3 > mer4)
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
				if (mer4 > mer3)
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
			}
			if ((mer2 > mer3) && (mer2 > mer4) && (mer2 > mer1))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				if ((mer3 > mer4) && (mer3 > mer1))
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
				if (mer4 > mer1)
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
				if (mer1 > mer4)
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
			}
			if ((mer3 > mer4) && (mer3 > mer1) && (mer3 > mer2))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				if ((mer4 > mer1) && (mer4 > mer2))
				{
					cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				}
				if (mer1 > mer2)
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
				if (mer2 > mer1)
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
			}
			if ((mer4 > mer1) && (mer4 > mer2) && (mer4 > mer3))
			{
				cout << "Name"
					 << "\t"
					 << "Matric"
					 << "\t"
					 << "FSC"
					 << "\t"
					 << "ECAT"
					 << "\t"
					 << "Merit"
					 << "\t"
					 << "1st"
					 << "\t"
					 << "2nd"
					 << "\t"
					 << "3rd" << endl;
				cout << name4 << "\t" << ma4 << "\t" << fsc4 << "\t" << ecat4 << "\t" << mer4 << "\t" << _4pre1 << "\t" << _4pre2 << "\t" << _4pre3 << endl;
				if ((mer1 > mer2) && (mer1 > mer3))
				{
					cout << name1 << "\t" << ma1 << "\t" << fsc1 << "\t" << ecat1 << "\t" << mer1 << "\t" << _1pre1 << "\t" << _1pre2 << "\t" << _1pre3 << endl;
				}
				if (mer2 > mer3)
				{
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
				}
				if (mer3 > mer2)
				{
					cout << name3 << "\t" << ma3 << "\t" << fsc3 << "\t" << ecat3 << "\t" << mer3 << "\t" << _3pre1 << "\t" << _3pre2 << "\t" << _3pre3 << endl;
					cout << name2 << "\t" << ma2 << "\t" << fsc2 << "\t" << ecat2 << "\t" << mer2 << "\t" << _2pre1 << "\t" << _2pre2 << "\t" << _2pre3 << endl;
				}
			}
		}
		if (option == 4)
		{
			system("cls");
			starics();
			cout << "Main Menu  > Generate Merit List" << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "1st Merit is: " << mer1;
			if ((mer1 > mer2) && (mer1 > mer3) && (mer1 > mer4))
			{
				cout << "1st Merit is: " << mer1 << endl;
				if ((mer2 > mer3) && (mer2 > mer4))
				{
					cout << "2nd Merit is: " << mer2 << endl;
				}
				if (mer3 > mer4)
				{
					cout << "3rd Merit is: " << mer3 << endl;
					cout << "4th Merit is: " << mer4 << endl;
				}
				if (mer4 > mer3)
				{
					cout << "3rd Merit is: " << mer3 << endl;
					cout << "4th Merit is: " << mer4 << endl;
				}
			}
			if ((mer2 > mer3) && (mer2 > mer4) && (mer2 > mer1))
			{
				cout << "1st Merit is: " << mer2 << endl;
				if ((mer3 > mer4) && (mer3 > mer1))
				{
					cout << "2nd Merit is: " << mer3 << endl;
				}
				if (mer4 > mer1)
				{
					cout << "3rd Merit is: " << mer4 << endl;
					cout << "4th Merit is: " << mer1 << endl;
				}
				if (mer1 > mer4)
				{
					cout << "3rd Merit is: " << mer4 << endl;
					cout << "4th Merit is: " << mer1 << endl;
				}
			}
			if ((mer3 > mer4) && (mer3 > mer1) && (mer3 > mer2))
			{
				cout << "1st Merit is: " << mer3 << endl;
				if ((mer4 > mer1) && (mer4 > mer2))
				{
					cout << "2nd Merit is: " << mer4 << endl;
				}
				if (mer1 > mer2)
				{
					cout << "3rd Merit is: " << mer1 << endl;
					cout << "4th Merit is: " << mer2 << endl;
				}
				if (mer2 > mer1)
				{
					cout << "3rd Merit is: " << mer1 << endl;
					cout << "4th Merit is: " << mer2 << endl;
				}
			}
			if ((mer4 > mer1) && (mer4 > mer2) && (mer4 > mer3))
			{
				cout << "1st Merit is: " << mer4;
				if ((mer1 > mer2) && (mer1 > mer3))
				{
					cout << "2nd Merit is: " << mer1 << endl;
				}
				if (mer2 > mer3)
				{
					cout << "3rd Merit is: " << mer2 << endl;
					cout << "4th Merit is: " << mer3 << endl;
				}
				if (mer3 > mer2)
				{
					cout << "3rd Merit is: " << mer2 << endl;
					cout << "4th Merit is: " << mer3 << endl;
				}
			}
		}
	}
}
float student(float fsc, float ecat)
{
	float agr = (fsc * 0.07) + (ecat / 0.03);
	return agr;
}
int header()
{
	int option;

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
	cout << "******************************************************************" << endl;
	cout << "******   University Of Engineering And Technology Lahore   *******" << endl;
	cout << "******************************************************************" << endl;
	cout << "                      " << endl;
	cout << "                      " << endl;
}