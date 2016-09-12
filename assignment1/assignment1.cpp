/*
Alex Bartel
Program 1
CSCI 20 T/Th Browne
Calculate a person's weekly wages based on hourly salary and hours. 
Determine how much they would get paid assuming 17% taxes. 
Create a wage slip with name, hours, hourly rate, gross pay, and net pay. 
*/

#include <iostream>
#include <string>
#include <iomanip> //needed to use setprecision
using namespace std;

int main()
{
    //assign variables
    string userFirstName; //define two varaibles to avoid using getline
    string userLastName;
    double hoursWorked = 0.00;
    double hourlyPay = 0.00;
    double grossPay = 0.00;
    double netPay = 0.00;

    //user input
    cout << "Please enter your first and last name" << endl;
    cin  >> userFirstName >> userLastName;
    cout << "Please enter the number of hours you worked this week" << endl;
    cin  >> hoursWorked;
    cout << "Please enter your hourly pay rate" << endl;
    cin  >> hourlyPay;
    
    //program
    grossPay = (hoursWorked * hourlyPay);
    netPay = (grossPay * 0.83);
    
    //output
    cout << userFirstName << " " << userLastName << ":" << endl;
    cout << "You worked " << hoursWorked << " hours this week." << endl;
    cout << "You earned " << hourlyPay << " dollars per hour." << endl;
    cout << "Your gross pay is ";
    cout << setprecision(2) << fixed; //needed to keep two decimal places. 
    cout << grossPay << " dollars." << endl;
    cout << "Based on a 17% tax rate, you paid " << (grossPay - netPay) << " dollars in taxes." << endl;
    cout << "Your net pay is " << netPay << " dollars." << endl;
    
    return 0;
}