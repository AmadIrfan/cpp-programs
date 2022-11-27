// ROLL NO 2021-CS-25
// Coded by AMAD IRFAN
// question
/*1. A student has to attend an exam at a particular time (for example, at 9:30 am). They arrive in
the exam room at a particular time of arrival (for example 9:40 am). It is considered that the
student has arrived on time if they have arrived at the time when the exam starts or up to half
an hour earlier. If the student has arrived more than 30 minutes earlier, the student has come
too early. If they have arrived after the time when the exam starts, they are late.
Write a program that inputs the exam starting time and the time of student's arrival, and prints if the
student has arrived on time, if they have arrived early or if they are late, as well as how many hours or
minutes the student is early or late.
Input Data
Read the following four integers (one on each line) from the console:
● The first line contains exam starting time (hours) – an integer from 0 to 23.
● The second line contains exam starting time (minutes) – an integer from 0 to 59.
● The third line contains an hour of arrival – an integer from 0 to 23.
● The fourth line contains minutes of arrival – an integer from 0 to 59.
Output Data
Print the following on the first line on the console:
● "Late", if the student arrives later compared to the exam starting time.
● "On time", if the student arrives exactly at the exam starting time or up to 30 minutes earlier.
● "Early", if the student arrives more than 30 minutes before the exam's starting time.
If the student arrives with more than one minute difference compared to the exam starting time, print on
the next line:
● "mm minutes before the start" for arriving less than an hour earlier.
● "hh:mm hours before the start" for arriving 1 hour or earlier. Always print minutes using 2
digits, for example "1:05".
● "mm minutes after the start" for arriving more than an hour late.
● "hh:mm hours after the start" for arriving late by 1 hour or more. Always print minutes using 2
digits, for example, "1:03".  */
// question end
// program starts
#include <iostream>
using namespace std;
int main()
{
    int exam_starting_hour, exam_starting_min, arrival_hour, arrival_min, exam_time, t_time, arrival_time;
    cout << "***** note : Enter the time in 24 hour formate i.e 24:00 , 15:30 *****" << endl
         << endl
         << endl;
    cout << "Exam Starting Time in hours.. ";
    cin >> exam_starting_hour;
    cout << "Exam Starting Time in min.. ";
    cin >> exam_starting_min;
    cout << "Arrival Time in Hours.. ";
    cin >> arrival_hour;
    cout << "Arrival Time in min.. ";
    cin >> arrival_min;
    exam_starting_hour = exam_starting_hour * 60;
    exam_time = exam_starting_hour + exam_starting_min;
    arrival_hour = arrival_hour * 60;
    arrival_time = arrival_hour + arrival_min;
    t_time = exam_time - arrival_time;
    if (exam_time > arrival_time)
    {
        // if total time < 30
        if (t_time < 30)
        {
            cout << "You arrived at time of exam ";
        }
        if (t_time >= 30 && t_time < 60)
        {
            cout << "You arrived Early By  " << t_time << " Min";
        }
        if (t_time == 60)
        {
            t_time = t_time - 60;
            cout << "You arrived Early By 1 hour and " << t_time << " Min";
        }
        if (t_time > 60 && t_time < 120)
        {
            t_time = t_time - 60;
            cout << "You arrived early By 1 hours and " << t_time << " Min";
        }
        if (t_time == 120)
        {
            t_time = t_time - 120;
            cout << "You arrived early By 2 hours and " << t_time << " Min";
        }
        if (t_time >= 120 && t_time < 180)
        {
            t_time = t_time - 120;
            cout << "You arrived early By 2 hours and " << t_time << " Min";
        }
        if (t_time >= 180 && t_time < 240)
        {
            t_time = t_time - 180;
            cout << "You arrived early By 3 hours and " << t_time << " Min";
        }
    }
    if (arrival_time > exam_time)
    {
        if (t_time < 0)
        {
            // if arrival time is late answer became in -ve sign so this condition convert it into +ve
            t_time = (t_time * -1);
            // if exam time is < 60
            if (t_time < 60)
            {
                cout << "You arrived late By " << t_time << " Min";
            }
            // if exam time = 60
            if (t_time == 60)
            {
                cout << "You Arrive Late By 1 hours";
            }
            // if exam time > 60 && exam time < 120
            if (t_time > 60 && t_time < 120)
            {
                t_time = t_time - 60;
                cout << "You Arrive Late By 1 hours and " << t_time << " Min";
            }
            // if exam time = 120
            if (t_time == 120)
            {

                cout << "You arrived late By 2 hours ";
            }
            // if exam time > 120 && exam time < 180
            if (t_time > 120 && t_time < 180)
            {
                t_time = t_time - 120;
                cout << "You arrived late By 2 hours and " << t_time << " Min";
            }
            // if exam_time = 180
            if (t_time == 180)
            {

                cout << "You arrived late By 3 hours ";
            }
            // if exam_time > 180 && exam time < 240
            if (t_time >= 180 && t_time < 240)
            {
                t_time = t_time - 180;
                cout << "You arrived late By 3 hours and " << t_time << " Min";
            }
            // if exam time = 240
            if (t_time == 240)
            {
                cout << "You arrived late By 4 hours ";
            }
        }
    }
    // if exam time is equal to arrival time
    if (exam_time == arrival_time)
    {
        cout << "You arrived at the  time of Exams !! ";
    }
}
// the end
