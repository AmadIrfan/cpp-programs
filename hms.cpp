//--------Libraries------------
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
using namespace std;
//-----------------------------

//--------Prototypes-----------
string who();
void addData(string username, string password, string role);
void header();
string Admin_menu();
string Doctor_menu();
string Patient_menu();
void add_doctors();
void view_doctors();
void delete_doctors();
void update_doctors();
void add_patients();
void view_patients();
void delete_patients();
void update_patients();
void test_details();
void view_appointments();
void book_appointments();
void clear_screen();
string Doctor_menu();
void search_name();
void prescription();
//-----------------------------

//--------Arrays----------
string login = " ";
const int size = 20;
int doc = 0;
int count = 0;
int pat = 0;
int pat_no = 0;
string arrusername[size];
string arrpassword[size];
string arrrole[size];
string doc_name[size];
string doc_age[size];
string doc_spec[size];
string doc_mob[size];
string doc_blood[size];
string doc_cnic[size];
string doc_gender[size];
string doc_mail[size];
string doc_add[size];
string doc_id[size];
string p_name[size];
string p_age[size];
string p_blood[size];
string p_disease[size];
string p_cnic[size];
string p_mob[size];
string p_add[size];
string p_gender[size];
string test[size];
int days[size];
//------------------------
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
main()
{
  header();
  cout << "1- Admin" << endl;
  cout << "2- Doctor" << endl;
  cout << "3- Patient" << endl;
  addData("admin", "321", "Admin");
  addData("doctor", "321", "Doctor");
  addData("patient", "321", "Patient");
  while (true)
  {
    string w = who();
    if (w == "Admin")
    { // start of if
      system("cls");
      string adminop = " ";
      while (true)
      { // start of while
        adminop = Admin_menu();
        if (adminop == "1")
        {
          clear_screen();
          header();
          add_doctors();
        }
        else if (adminop == "2")
        {
          clear_screen();
          header();
          view_doctors();
        }
        else if (adminop == "3")
        {
          // delete_doctors();
        }
        else if (adminop == "4")
        {
          update_doctors();
        }
        else if (adminop == "5")
        {
          clear_screen();
          header();
          view_patients();
        }
        else if (adminop == "6")
        {
          // delete_patients();
        }
        else if (adminop == "7")
        {
          clear_screen();
          header();
          update_patients();
        }
        else if (adminop == "8")
        {
          // test_details();
        }
        else if (adminop == "9")
        {
          // view_appointments();
        }
        else if (adminop == "10")
        {
          break;
        }
        else
        {
          cout << "Invalid Option";
        }
        clear_screen();
      }
    }
    else if (w == "Doctor")
    {
      system("cls");
      string doctorop = " ";
      while (true)
      { // start of while
        doctorop = Doctor_menu();
        if (doctorop == "1")
        {
          add_patients();
        }
        else if (doctorop == "2")
        {
          view_patients();
        }
        else if (doctorop == "3")
        {
          delete_patients();
        }
        else if (doctorop == "4")
        {
          search_name();
        }
        else if (doctorop == "5")
        {
          //   prescription();
        }
        else if (doctorop == "6")
        {
          view_appointments();
        }
        else if (doctorop == "7")
        {
          break;
        }
        else
        {
          cout << "Invalid option " << endl;
        }
        clear_screen();
      }
    }
    else if (w == "Patient")
    {
      system("cls");
      string patientop = " ";
      while (true)
      { // start of while
        patientop = Patient_menu();
        if (patientop == "1")
        {
          book_appointments();
        }
        else if (patientop == "2")
        {
          view_appointments();
        }
        else if (patientop == "3")
        {
          view_doctors();
        }
        else
        {
          cout << "Invalid option " << endl;
        }
        clear_screen();
      } // end of while
    }
    else
    {
      cout << "Wrong username and password" << endl;
    }
  }
}

string who() //-----Take user name and password and return the role-----
{
  string role;
  string username, password;
  cout << "Enter username ";
  cin >> username;
  cout << "Enter password ";
  cin >> password;
  for (int i = 0; i < size; i++)
  {
    if (arrusername[i] == username && arrpassword[i] == password)
    {
      login = username;
      return arrrole[i];
    }
  }
  login = " ";
  return "Invalid";
}

void addData(string username, string password, string role) //-----Add data in arrays----
{
  if (count < size)
  {
    arrusername[count] = username;
    arrpassword[count] = password;
    arrrole[count] = role;
    count++;
  }
  else
  {
    cout << "Sorry!no space";
  }
}

void header() //------Header of System--------
{

  SetConsoleTextAttribute(h, 14);
  cout << "\t      ____         ____   ____            ____    _____________ " << endl;
  cout << "\t      |  |         |  |   |  | _        _ |  |    |            " << endl;
  cout << "\t      |  |         |  |   |  |  _      _  |  |    |            " << endl;
  cout << "\t      |  |         |  |   |  |   _    _   |  |    |            " << endl;
  cout << "\t      |  |_________|  |   |  |    _  _    |  |    |            " << endl;
  cout << "\t      |  |         |  |   |  |     _      |  |    |___________ " << endl;
  cout << "\t      |  |         |  |   |  |            |  |                |" << endl;
  cout << "\t      |  |         |  |   |  |            |  |                | " << endl;
  cout << "\t      |  |         |  |   |  |            |  |                | " << endl;
  cout << "\t      |__|         |__|   |__|            |__|    ____________| " << endl;
  SetConsoleTextAttribute(h, 12);
}

void clear_screen()
{
  cout << "Press any key to continue " << endl;
  getch();
  system("CLS");
}

string Admin_menu()
{
  header();
  cout << endl;
  string option;
  cout << "\t\t  ADMIN" << endl;
  cout << "\n\n";
  cout << "\t\t1- Add Doctors..." << endl;
  cout << "\t\t2- View Doctors..." << endl;
  cout << "\t\t3- Delete Doctors..." << endl;
  cout << "\t\t4- Update Doctors..." << endl;
  cout << "\t\t5- View Patient..." << endl;
  cout << "\t\t6- Delete Patient..." << endl;
  cout << "\t\t7- Update Patient..." << endl;
  cout << "\t\t8- Laboratory Test Details..." << endl;
  cout << "\t\t9- View Appointments..." << endl;
  cout << "\t\t10- Logout...";
  cout << endl;
  cout << "\nEnter your option ";
  cin >> option;
  cout << "\n\n\n";
  return option;
}

string Doctor_menu()
{
  header();
  cout << endl;
  string option;
  cout << "\t\t  DOCTOR" << endl;
  cout << "\n\n";
  cout << "\t\t1- Add Patient..." << endl;
  cout << "\t\t2- View Patients..." << endl;
  cout << "\t\t3- Delete Patients..." << endl;
  cout << "\t\t4- Search Patient By Name..." << endl;
  cout << "\t\t5- Give prescription..." << endl;
  cout << "\t\t6- View Apointments..." << endl;
  cout << "\t\t7- Logout...";
  cout << endl;
  cout << "\nEnter your option ";
  cin >> option;
  cout << "\n\n\n";
  return option;
}

string Patient_menu()
{
  header();
  cout << "\n";
  string option;
  cout << "\t\t  Patient" << endl;
  cout << "\n\n";
  cout << "\t\t1- Give prescription..." << endl;
  cout << "\t\t2- View Apointments..." << endl;
  cout << "\t\t3- Logout...";
  cout << endl;
  cout << "\n Enter your option ";
  cin >> option;
  cout << "\n\n\n";
  return option;
}
void add_doctors()
{
  cout << endl;
  cout << "Enter doctor name... ";
  cin >> doc_name[doc];
  cout << "Enter doctor gender... ";
  cin >> doc_gender[doc];
  cout << "Enter doctor age... ";
  cin >> doc_age[doc];
  cout << "Enter specialization... ";
  cin >> doc_spec[doc];
  cout << "Enter blood group... ";
  cin >> doc_blood[doc];
  cout << "Enter doctor's ID... ";
  cin >> doc_id[doc];
  cout << "Enter mobile no... ";
  cin >> doc_mob[doc];
  cout << "Enter doctor address... ";
  cin >> doc_add[doc];
  cout << "Enter your e-mail... ";
  cin >> doc_mail[doc];
  cout << "How any many patients you can check in a day!... ";
  cin >> days[doc];
  doc++;
}

void view_doctors()
{
  cout << endl;
  for (int i = 0; i < doc; i++)
  {
    cout << "\tDoctor Name:..................... " << endl;
    cout << "\t" << doc_name[i] << endl;
    cout << "\tDoctor Gender:................... " << endl;
    cout << "\t" << doc_gender[i] << endl;
    cout << "\tDoctor Age:...................... " << endl;
    cout << "\t" << doc_age[i] << endl;
    cout << "\tDoctor Specialization:........... " << endl;
    cout << "\t" << doc_spec[i] << endl;
    cout << "\tDoctor Blood_Group:.............. " << endl;
    cout << "\t" << doc_blood[i] << endl;
    cout << "\tDoctor ID:....................... " << endl;
    cout << "\t" << doc_id[i] << endl;
    cout << "\tDoctor Mobile-No:................ " << endl;
    cout << "\t" << doc_mob[i] << endl;
    cout << "\tDoctor Address:.................. " << endl;
    cout << "\t" << doc_add[i] << endl;
    cout << "\tDoctor Email:.................... " << endl;
    cout << "\t" << doc_mail[i] << endl;
  }
}

/*void delete_doctors()
{

}*/

void update_doctors()
{
  string id;
  cout << "Enter doctor's ID ";
  cin >> id;
  for (int i = 0; i < doc; i++)
  {
    if (id == doc_id[i])
    {
      cout << "Enter doctor name... ";
      cin >> doc_name[i];
      cout << "Enter doctor gender... ";
      cin >> doc_gender[i];
      cout << "Enter doctor age... ";
      cin >> doc_age[i];
      cout << "Enter specialization... ";
      cin >> doc_spec[i];
      cout << "Enter blood group... ";
      cin >> doc_blood[i];
      cout << "Enter doctor's ID... ";
      cin >> doc_id[i];
      cout << "Enter mobile no... ";
      cin >> doc_mob[i];
      cout << "Enter doctor address... ";
      cin >> doc_add[i];
      cout << "Enter your e-mail... ";
      cin >> doc_mail[i];
    }
    else
    {
      cout << "\t\n No,match found!!" << endl;
    }
  }
}

void add_patients()
{
  cout << "Enter patient name... ";
  cin >> p_name[pat];
  cout << "Enter patient age... ";
  cin >> p_age[pat];
  cout << "Enter patient disease... ";
  cin >> p_disease[pat];
  cout << "Enter patient blood group... ";
  cin >> p_blood[pat];
  cout << "Enter patient CNIC... ";
  cin >> p_cnic[pat];
  cout << "Enter patient gender... ";
  cin >> p_gender[pat];
  cout << "Enter patient mobile-no... ";
  cin >> p_mob[pat];
  cout << "Enter patient address... ";
  cin >> p_add[pat];
  cout << "\t Did doctor recommend you any test";
  cin >> test[pat];
  pat++;
}

void view_patients()
{
  cout << endl;
  for (int i = 0; i < pat; i++)
  {
    cout << "\t Patient Name:....... " << endl;
    cout << "\t" << p_name[i] << endl;
    cout << "\t Patient Gender:....... " << endl;
    cout << "\t" << p_gender[i] << endl;
    cout << "\t Patient Age:....... " << endl;
    cout << "\t" << p_age[i] << endl;
    cout << "\t Patient Disease:...... " << endl;
    cout << "\t" << p_disease[i] << endl;
    cout << "\t Patient Blood_Group:...... " << endl;
    cout << "\t" << p_blood[i] << endl;
    cout << "\t Patient CNIC:...... " << endl;
    cout << "\t" << p_cnic[i] << endl;
    cout << "\t Patient Mobile-No:...... " << endl;
    cout << "\t" << p_mob[i] << endl;
    cout << "\t Patient Address:...... " << endl;
    cout << "\t" << p_add[i] << endl;
  }
}

void update_patients()
{
  string cnic;
  cout << "Enter Patient CNIC ";
  cin >> cnic;
  for (int i = 0; i < doc; i++)
  {
    if (cnic == p_cnic[i])
    {
      cout << "Enter patient name... ";
      cin >> p_name[pat];
      cout << "Enter patient age... ";
      cin >> p_age[pat];
      cout << "Enter patient disease... ";
      cin >> p_disease[pat];
      cout << "Enter patient blood group... ";
      cin >> p_blood[pat];
      cout << "Enter patient CNIC... ";
      cin >> p_cnic[pat];
      cout << "Enter patient gender... ";
      cin >> p_gender[pat];
      cout << "Enter patient mobile-no... ";
      cin >> p_mob[pat];
      cout << "Enter patient address... ";
      cin >> p_add[pat];
    }
    else
    {
      cout << "\t\n No,match found!!" << endl;
    }
  }
}

void delete_patients()
{
}

void test_details()
{
}
void book_appointments()
{
  cout << "Enter patient name... ";
  cin >> p_name[pat];
  cout << "Enter patient age... ";
  cin >> p_age[pat];
  cout << "Enter patient disease... ";
  cin >> p_disease[pat];
  cout << "Enter blood-group... ";
  cin >> p_blood[pat];
  cout << "Enter your CNIC... ";
  cin >> p_cnic[pat];
  cout << "\n";
  cout << "******** AVAILABLE DOCTORS *********" << endl;
  cout << "1- Dr.Peter " << endl;
  cout << "2- Dr.Sam " << endl;
  cout << "3- Dr.Hazel" << endl;
  cout << "\n";
  cout << "Enter which doctor you want to choose... ";
  cin >> doc_name[doc];
  /*if(pat_no <=days[doc])
  {
     cout<<"\t\t Appointment Booked!"<<endl;
     pat_no++;
  }
  else
  {
     cout<<"\t\t Appointment not booked! Try next day."<<endl;
  }*/
}
void view_appointments()
{
}
void search_name()
{
  string name;
  cout << "Enter patient name ";
  cin >> name;
  cout << endl;
  for (int i = 0; i < pat; i++)
  {
    if (name == p_name[i])
    {
      cout << "\t Patient Name:....... " << endl;
      cout << "\t" << p_name[i] << endl;
      cout << "\t Patient Gender:....... " << endl;
      cout << "\t" << p_gender[i] << endl;
      cout << "\t Patient Age:....... " << endl;
      cout << "\t" << p_age[i] << endl;
      cout << "\t Patient Disease:...... " << endl;
      cout << "\t" << p_disease[i] << endl;
      cout << "\t Patient Blood_Group:...... " << endl;
      cout << "\t" << p_blood[i] << endl;
      cout << "\t Patient CNIC:...... " << endl;
      cout << "\t" << p_cnic[i] << endl;
      cout << "\t Patient Mobile-No:...... " << endl;
      cout << "\t" << p_mob[i] << endl;
      cout << "\t Patient Address:...... " << endl;
      cout << "\t" << p_add[i] << endl;
    }
    else
    {
      cout << "\t Record not found!!" << endl;
    }
  }
}
/*void prescription()
{
   string dis;
   cout<<"Enter your disease... ";
   cin>> dis;
   if(dis=="headache")
   {
     cout<<"\t\t Panadol"<<endl;
     cout<<"\t\t Nims"<<endl;
     cout<<"\t\t Brufen"<<endl;
   }
   else if(dis=="fever")
   {
     cout<<"\t\t Panadol"<<endl;
     cout<<"\t\t Leflox"<<endl;
     cout<<"\t Don't use cold things during fever"<<endl;
   }
   else if(dis==


}*/