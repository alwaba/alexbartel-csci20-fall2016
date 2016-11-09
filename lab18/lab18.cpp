/*Alex Bartel
April Browne
CSCI 20
11/1/16

LAB 18 / 4.4 LAB

Problem Statement
This program is responsible for creating user names for a new website you have created.
It should accept a first name of up to 10 characters and a last name of up to 20 characters.
It should tell the user if the name is larger than the max size.
It should also determine if the names are the same and output a warning.
After checking these things, it should create three different user name options (for example: apbrowne; aprilbrowne; abrowne).

Requirements
Use ONLY string tools

Input
Your name
April Browne
AnaElizabeth Hazeltine-Smith
James James

Output
Name: April Browne
Which of the three user names would you like:
apbrowne
aprilbrowne
abrowne
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string FirstName;
    string LastName;

    cout << "Please enter your first name" << endl;
    cin >> FirstName;
    
    while(FirstName.length() > 10){
        cout << "Please enter a first name of ten characters or fewer." << endl;
        cin >> FirstName;
    }
    
    cout << "Please enter your last name" << endl;
    cin >> LastName;
    
    while(FirstName.length() > 20){
        cout << "Please enter a last name of twenty characters or fewer." << endl;
        cin >> LastName;
    }    
    
    cout << endl << "Hello, " << FirstName << " " << LastName << ". " << endl;
    
    cout << endl << "How about one of these usernames..." << endl;
    cout << FirstName << LastName << endl;
    cout << FirstName.at(0) << LastName << endl;
    cout << FirstName.at(0) << FirstName.at(1) << LastName << endl;
    
    return 0;
}