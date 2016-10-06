/*
Alex Bartel
April Browne
CSCI 20 T/Th
10.6.2016
LAB 11

use switch case to decide what kind of animal you are based on 3.2 activity
*/

#include <iostream>
using namespace std;

int main(){
    char outdoorPref;
    char runPref;
    char cheesePref;
    char swimPref;
    
    cout << "Do you like the outdoors? Please answer y/n" << endl;
    cin >> outdoorPref;
    
    switch(outdoorPref){
        case 'y':
        cout << "Do you like to run? Please answer y/n" << endl;
        cin >> runPref;
        break;
        
        case 'n':
        cout << "Do you like cheese? Please answer y/n" << endl;
        cin >> cheesePref;
        break;
    }
    
    switch(runPref){
        case 'y':
        cout << "You are a horse." << endl;
        break;
        
        case 'n':
        cout << "You are a turtle." << endl;
        break;
        
    }
    
    if(cheesePref == 'y'){
        cout << "You are a mouse." << endl;
    }
    
    else{
        cout << "Do you like to swim? Please answer y/n" << endl;
        cin >> swimPref;
        
        if(swimPref == 'y'){
            cout << "You are a fish." << endl;
        }
        else{
            cout << "You are a cat." << endl;
        }
    }
    
    return 0;
}