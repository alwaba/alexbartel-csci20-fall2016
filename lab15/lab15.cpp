/*
Alex Bartel
April Browne
CSCI 20
10.25.2016

LAB15

Create a menu program.  Your menu must have 10 different items for the user to choose from.
The program should allow the user to choose an item until they say they are done.
Use an array to hold how many of each item a user requests.

*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    //array user input
    int UserArr[10] = {0};
    int userChoice;
    string MenuArr[10];
    int i = 0;
    int j = 0;
    int userIn = 0;
    
    MenuArr[0] = "Burger";
    MenuArr[1] = "Fries";
    MenuArr[2] = "Stack of bacon";
    MenuArr[3] = "Salad";
    MenuArr[4] = "Wrap";
    MenuArr[5] = "Rice";
    MenuArr[6] = "Plate of Cheese";
    MenuArr[7] = "Pile of eggs";
    MenuArr[8] = "Heap of beans";
    MenuArr[9] = "Mystery pie";
    
    cout << "Welcome to The Half Calf Cafe" << endl;
    cout << "Choose the number of the item you would like then press enter." << endl;
    cout << "If you want three burgers, for example, type 1 ENTER 1 ENTER 1 ENTER. Type 11 when done." << endl;
    
    for (i = 0; i < 10; i++) {
        cout << "#" << i + 1 << " " << MenuArr[i] << endl;
    }
    
    while(userIn != 11){
        cin >> userIn;
        UserArr[userIn - 1] = UserArr[userIn - 1] + 1;
    }
    
    for (i = 0; i < 10; i++) {
        cout << "You ordered " << UserArr[i] << " " << MenuArr[i] << endl;
    }
    
    return 0;
}