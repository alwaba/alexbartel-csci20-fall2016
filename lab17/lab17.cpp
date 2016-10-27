/*
Alex Bartel
April Browne
CSCI 20
10.25.2016

LAB 17 aka 4.2

Copy your menu program.  Update it so that you include prices for your items and an inventory. 
As the user purchases an item, add the price to the total and subtract 1 from the inventory. 
Output a total cost when they are done shopping.
Requirements
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
    string MenuArr[10];
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
        
    //dimension 0 is price dimension 1 is inventory.
    float PriceArr[2][10] = {0};
        PriceArr[0][0] = 5;
        PriceArr[0][1] = 5;
        PriceArr[0][2] = 5;
        PriceArr[0][3] = 5;
        PriceArr[0][4] = 5;
        PriceArr[0][5] = 5;
        PriceArr[0][6] = 5;
        PriceArr[0][7] = 5;
        PriceArr[0][8] = 5;
        PriceArr[0][9] = 5;
        
        PriceArr[1][0] = 10;
        PriceArr[1][1] = 10;
        PriceArr[1][2] = 10;
        PriceArr[1][3] = 10;
        PriceArr[1][4] = 10;
        PriceArr[1][5] = 10;
        PriceArr[1][6] = 10;
        PriceArr[1][7] = 10;
        PriceArr[1][8] = 10;
        PriceArr[1][9] = 10;
        
    int i = 0;
    int userIn = 0;
    float totalCost = 0;
    
    //output and explanation of ordering scheme
    cout << "Welcome to The Half Calf Cafe" << endl;
    cout << "Choose the number of the item you would like then press enter." << endl;
    cout << "If you want three burgers, for example, type 1 ENTER 1 ENTER 1 ENTER. Type 11 when done." << endl;
    
    //output of menu options
    for (i = 0; i < 10; i++) {
        cout << "#" << i + 1 << " " << MenuArr[i] << endl;
    }
    
    //input of user order
    while(userIn != 11){
        cin >> userIn;
        UserArr[userIn - 1] = UserArr[userIn - 1] + 1;
    }
    
    //order cost and inventory calculation
    for(i = 0; i < 10; i++){
        
        PriceArr[1][i] = PriceArr[1][i] - UserArr[i];
        PriceArr[0][i] = PriceArr[0][i] * UserArr[i];
    }
    
    //output only items that were ordered. 
    cout << "-----------------------------------------------" << endl;
    cout << "Your order:" << endl;
    for(i = 0; i < 10; i++){
        if(UserArr[i] != 0){
            cout << UserArr[i] << " x " << MenuArr[i] << " $" << PriceArr[0][i] << endl;
        }
    }
    //calculate total cost
    for(i = 0; i < 10; i++){
        totalCost = totalCost + PriceArr[0][i];
    }
    
    //output total cost
    cout << "-----------------------------------------------" << endl;
    cout << "Your total cost is $" << totalCost << endl;
    cout << "-----------------------------------------------" << endl;
    
    //inventory output
    cout << "Inventory" << endl;
    for(i = 0; i < 10; i++){
        cout << PriceArr[1][i] << " : " << MenuArr[i] << endl;
    }
    
    return 0;
}