/*Alex Bartel
April Browne
CSCI 20 T/Th
10.11.2016

LAB 3.4 Looping PART B

copy lab 13/3.4 and modify to use for loops rather than while loops
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
    for (minOne = 0; minOne < 10; minOne++){
        cout << "1:0" << minOne << " pm" << endl;
    }
    //this is for every minute between 1:10 and 1:59
    for (minOne = 10; minOne < 60; minOne++){
        cout << "1:" << minOne << " pm" << endl;
    }
    //this is for every minute between 2:00 and 2:09
    for (minTwo = 0; minTwo < 10; minTwo++){
        cout << "2:0" << minTwo << " pm" << endl;
    }
    //this is for every minute between 2:10 and 2:59
    for (minTwo = 10; minTwo < 60; minTwo++){
        cout << "2:" << minTwo << " pm" << endl;
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
    for(startHour; endHour > startHour; startHour++){
        cout << startHour << ":00" << endl;
            for(minutes = 15; minutes < 46; minutes = minutes + 15){
                cout << startHour << ":" << minutes << endl;
            }
        minutes = 15;
    }
    cout << endHour << ":00" << endl;
    
    
    return 0;
}