/*
Alex Bartel
April Browne
CSCI 20
10.25.2016

LAB16
aka LAB 4.2

Copy your menu program.  Update it so that you include prices for your items and an inventory.
As the user purchases an item, add the price to the total and subtract 1 from the inventory.
Output a total cost when they are done shopping.

Declare a new float array of size 10 named “price” and enter prices for your items.
When the user chooses an item, output the price of the item and the inventory
Subtract 1 from the inventory
Create a running total of the price.
Output the total cost when the user is done.
Use parallel arrays

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