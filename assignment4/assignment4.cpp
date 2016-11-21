/*
Alex Bartel
April Browne
CSCI 20
11.11.2016

Assignment 4 / Program 4

Your program should read an electronic checkbook register that uses a colon to identify each part of the register.
It should prompt the user for a text file to read. 
Your program will calculate and print the current balance of the account.
It should output the transactions in nice columns to the screen and to a new file.

It should also keep track of each payee for checks and output the following for each payee:
The payee
The total number of payments
The total cost of payments
*/

#include<iostream>
#include<string>
#include<ios>
#include<fstream>
#include<iomanip>
#include<sstream>

using namespace std;

class Checkbook{

public:
    
void bookprog(string myfile){
    ifstream inFS;
    inFS.open(myfile);
    
    //get file input, skipping three colons then skipping the newline character
    while(!inFS.eof()){
        getline(inFS, cbk[i++], ':');
        getline(inFS, cbk[i++], ':');
        getline(inFS, cbk[i++], ':');
        getline(inFS, cbk[i++]);
    }
    
    //erase spaces in words
    for(j = 0; j < i; j++){
        for(int k = 0; k < cbk[j].length(); k++){
            if(cbk[j].at(k) == ' '){
                cbk[j].erase(k, 1);
            }
        }
    }

    
    //check for deposit. i holds the number of positions in the array. 
    //the deposit could occur at every fourth position of the array. 
    for(j = 0; j < (i/4); j++){
        if(cbk[(j * 4)] == "deposit"){
            string mystring = cbk[((j * 4) + 3)];
            istringstream buffer (mystring);
            buffer >> tempval;
            balance = balance + tempval;
        }
        else{
            string mystring = cbk[(j * 4) + 3];
            istringstream buffer (mystring);
            buffer >> tempval;
            balance = balance - tempval;
        }
    }
    

    
    //compare elements of the array
    //outer for loop to go through all elements of the array
    //inner for loop to go through array again and compare
    //outer if to compare all elements of the array
    //inner if to exclude elements of the array already accounted for
    //count[j][0] stores number of trips
    //count[k][1] stores what's already accounted for
    
    for(j = 0; j < i; j++){
        for(k = 6; k < i; k = k + 4){
            if((cbk[j] == cbk[k]) && (cbk[j] != "-")){
                if(count[k][1] == 0){
                    count[j][0] = count[j][0] + 1;
                    count[k][1] = j;
                    
                    if(count[j][0] == 1){
                    string mystring = cbk[j + 1];
                    istringstream buffer (mystring);
                    buffer >> tempval;
                    merchant[j] = tempval;
                    }
                    
                    else{
                    string mystring = cbk[j + 1];
                    istringstream buffer (mystring);
                    buffer >> tempval;
                    
                    string omystring = cbk[k + 1];
                    istringstream obuffer (omystring);
                    obuffer >> tempval2;
                    
                    merchant[j] = tempval + tempval2;
                    }
                }
            }
        }
    }
    
    ofstream outFS;
    outFS.open(myfile.insert(0,"new"));
    
    outFS << "Merchant " << setw(15) << " No. Visits " << setw(15) << " Amount Spent" << endl;
    for(j = 0; j < i; j++){
        if(count[j][0] != 0){
            outFS << cbk[j] << setw(15) << count[j][0] << setw(10) << "$" << merchant[j] << endl;
        }
    }
    outFS << fixed << setprecision(2) << "Balance: $" << balance;
    
    cout << "Done! View your checkbook at " << myfile << endl;
    
    return;
    }
    
        
    Checkbook(){
        myfile.assign("s");
        return;
    }
    
    Checkbook(string chcbk){
        myfile.assign(chcbk);
        return;
    }
    
    
    private:
        string cbk[100];
        int count[100][2] = {{0},{0}};
        double merchant[100] = {0};
        double balance = 0;
        double tempval = 0;
        double tempval2 = 0;
        string myfile; 
        int i = 0;
        int j = 0;
        int k = 0;
};
    
int main(){
    
    string bookName;
    
    cout << "Enter the file name of the checkbook you would like to use." << endl;
    cin >> bookName;
    
    Checkbook user;
    user.bookprog(bookName);
    
    return 0;
    
}