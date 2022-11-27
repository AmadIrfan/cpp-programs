#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
void view_doctors();
string parseData(string record, int field);
void load_doctordata();
void sorting();
const int size = 20;
int doc = 0;
string doc_name[size];
int doc_age[size];
string doc_spec[size];
string doc_mob[size];
string doc_blood[size];
string doc_cnic[size];
string doc_gender[size];
string doc_mail[size];
string doc_add[size];
string doc_id[size];
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
    load_doctordata();
    sorting();
    view_doctors();
}
void load_doctordata()
{
    string word;
    fstream file;
    file.open("doctor.txt", ios::in);
    if (!file)
        return;
    while (!file.eof())
    {
        getline(file, word);
        if (word !=" " ){
        doc_name[doc] = parseData(word, 1);
        doc_gender[doc] = parseData(word, 2);
        doc_age[doc] = stoi(parseData(word, 3));
        doc_spec[doc] = parseData(word, 4);
        doc_blood[doc] = parseData(word, 5);
        doc_id[doc] = parseData(word, 6);
        doc_mob[doc] = parseData(word, 7);
        doc_add[doc] = parseData(word, 8);
        doc_mail[doc] = parseData(word, 9);
        doc++;
      }
    }
    file.close();
}
string parseData(string record, int field)
{
    int commacount = 1;
    string item;
    int index = 0;
    while (true)
    {
        char ch = record[index];
        if (ch == '\0')
        {
            return item;
        }
        else if (ch == ',')
        {
            commacount++;
        }
        else if (commacount == field)
        {
            item = item + ch;
        }
        index++;
    }
    return item;
}
void view_doctors()
{
    int salary = 0;
    srand(time(0));
    SetConsoleTextAttribute(h, 4);
    cout << endl;
    cout << "\n\n\n\n";
    cout << "\t\t _________________" << endl;
    cout << "\t\t|                 |" << endl;
    cout << "\t\t|  VIEW DOCTORS   |" << endl;
    cout << "\t\t|_________________|" << endl;
    cout << "\n\n\n";
    SetConsoleTextAttribute(h, 4);
    SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    SetConsoleTextAttribute(h, 9);
    SetConsoleTextAttribute(h, 4);
    cout << "\tDoctor Name\tDoctor ID\tGender\t\tAge\tSpecialization\tBlood_Group\tMobile-No\tAddress\t\tEmail" << endl;
    cout << "_________________________________________________________________________________________________________________________" << endl;
    SetConsoleTextAttribute(h, 4);
    SetConsoleTextAttribute(h, 8);
    for (int i = 0; i < doc; i++)
    {
        salary = salary + rand();
        salary = salary * 3;
        SetConsoleTextAttribute(h, 7);
        if (doc_id[i] != " ")
        {

            cout << "\t" << doc_name[i] << "\t\t" << doc_id[i] << "\t\t" << doc_gender[i] << "\t"
                 << " " << doc_age[i] << "\t"
                 << " " << doc_spec[i] << "\t"
                 << " " << doc_blood[i] << "\t"
                 << " " << doc_mob[i] << "\t"
                 << " " << doc_add[i] << "\t"
                 << " " << doc_mail[i] << endl;
        }
        SetConsoleTextAttribute(h, 7);
    }
    SetConsoleTextAttribute(h, 9);
    cout << "*************************************************************************************************************************" << endl;
    SetConsoleTextAttribute(h, 9);
}
void sorting()
{
    int min = 0, temp1;
    string temp;
    for (int i = 0; i < doc; i++)
    {
        for (int j = i + 1; j < doc; j++)
        {
            if (doc_age[j] < doc_age[i])
            {
                temp = doc_name[i];
                doc_name[i] = doc_name[j];
                doc_name[j] = temp;

                temp = doc_id[i];
                doc_id[i] = doc_id[j];
                doc_id[j] = temp;

                temp = doc_gender[i];
                doc_gender[i] = doc_gender[j];
                doc_gender[j] = temp;

                temp1 = doc_age[i];
                doc_age[i] = doc_age[j];
                doc_age[j] = temp1;

                temp = doc_blood[i];
                doc_blood[i] = doc_blood[j];
                doc_blood[j] = temp;

                temp = doc_add[i];
                doc_add[i] = doc_add[j];
                doc_add[j] = temp;

                temp = doc_spec[i];
                doc_spec[i] = doc_spec[j];
                doc_spec[j] = temp;

                temp = doc_mob[i];
                doc_mob[i] = doc_mob[j];
                doc_mob[j] = temp;

                temp = doc_mail[i];
                doc_mail[i] = doc_mail[j];
                doc_mail[j] = temp;
            }
        }
    }
}