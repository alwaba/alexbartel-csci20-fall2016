/*Alex Bartel
April Browne
CSCI 20 T/Th
10.11.2016
LAB 3.4 Looping
Create a program that will print every minute between two values.
First, start by programming every minute between 1:00 pm and 2:59 pm using one or more loops.
Second, accept user input for a start hour and ending hour.  Print every 15 minute interval between these two times.
*/

#include <iostream>
using namespace std;

int main(){
    int hour = 1;
    int minOne = 0;
    int minTwo = 0;
    int startHour = 0;
    int endHour = 0;
    int startMinutes = 0;
    int totalHours = 0;
    int minutes = 15;

    //this is for every minute between 1:00 and 1:09
    while (minOne < 10){
        cout << "1:0" << minOne << " pm" << endl;
        minOne = minOne + 1;
    }
    //this is for every minute between 1:10 and 1:59
    while (10 <= minOne && minOne < 60){
        cout << "1:" << minOne << " pm" << endl;
        minOne = minOne + 1;
    }
    //this is for every minute between 2:00 and 2:09
    while (minTwo < 10){
        cout << "2:0" << minTwo << " pm" << endl;
        minTwo = minTwo + 1;
    }
    //this is for every minute between 2:10 and 2:59
    while (10 <= minTwo && minTwo < 60){
        cout << "2:" << minTwo << " pm" << endl;
        minTwo = minTwo + 1;
    }
    
    //user input on starting and ending hours
    cout << "Please enter a starting hour 0-24" << endl;
    cin >> startHour;
    
    cout << "Please enter an ending hour 0-24" << endl;
    cin >> endHour;
    cout << " " << endl;
    
    while(startHour > 24){
        cout << "Please choose a starting hour between 0 and 24" << endl;
        cin >> startHour;
    }
    while(endHour > 24){
        cout << "Please choose an ending hour between 0 and 24" << endl;
        cin >> endHour;
    }
    while(endHour < startHour){
        cout << "Please choose an ending hour greater than " << startHour << endl;
        cin >> endHour;
    }
    
    //double while loop... outer while loop incriments the hour
    //and resets the minutes so the inner while loop will continue adding 15 minutes
    while(endHour > startHour){
        cout << startHour << ":00" << endl;
            while(minutes < 46){
                cout << startHour << ":" << minutes << endl;
                minutes = minutes + 15;
            }
        startHour = startHour + 1;
        minutes = 15;
    }
    cout << endHour << ":00" << endl;
    
    
    return 0;
}