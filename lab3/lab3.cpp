//Alex Bartel
//8.30.2016


#include <iostream>
#include <string> //enter to include strings
using namespace std;

int main()
{
    
    int numbermiles = 0; //following example to type "= 0"
    float averagetemp = 0; //again, following example to type "= 0"
    string cityname; //wouldn't work with char, won't accept multiple words ie "new york"
    string verb; //wouldn't work with char
    string thing1;
    string thing2;
    string thing3; //won't accept multiple words

    //user input begins here
    cout << "Enter the name of a city" << endl;
    cin >> cityname;
    cout << "Enter a verb" << endl;
    cin >> verb;
    cout << "Enter a number with a decimal" << endl;
    cin >> averagetemp;
    cout << "Enter a whole number" << endl;
    cin >> numbermiles;
    cout << "Enter your favorite toy" << endl;
    cin >> thing1;
    cout << "Enter your favorite food" << endl;
    cin >> thing2;
    cout << "Enter your favorite drink" << endl;
    cin >> thing3;

    //Output the story
    cout << endl; //following the example
    cout << "Here is your story!" << endl;
    cout << "Let's go on a road trip to " << cityname << "!" << endl;
    cout << "It's a great time of year to " << verb << " there." << endl;
    cout << "The average temperature is " << averagetemp << " degrees." << endl;
    cout << "It's " << numbermiles << " miles away!" << endl;
    cout << "We'll need to bring " << thing1 << " " << thing2 << " " << thing3 << ". Ready? Let's go!" << endl;
    
    return 0; 
    
}