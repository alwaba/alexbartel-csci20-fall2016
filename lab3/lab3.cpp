//Alex Bartel
//8.30.2016


#include <iostream>
#include <string> //enter to include strings
using namespace std;

int main()
{
    
    int numbermiles = 0;
    float averagetemp = 0;
    char firstinitial;
    string cityname = "";
    string verb = "";
    string thing1 = "";
    string thing2 = "";
    string thing3 = "";

    //user input begins here
    cout << "Enter your first initial" << endl;
    cin >> firstinitial;
    cout << "Enter the name of a city (without spaces)" << endl; //no multi-word cities
    cin >> cityname;
    cout << "Enter a verb" << endl;
    cin >> verb;
    cout << "Enter a number with a decimal" << endl;
    cin >> averagetemp;
    cout << "Enter a whole number" << endl;
    cin >> numbermiles;
    cout << "Enter the last thing you touched (without spaces)" << endl;
    cin >> thing1;
    cout << "Enter your favorite childhood toy (without spaces)" << endl;
    cin >> thing2;
    cout << "Enter your favorite soda (without spaces)" << endl;
    cin >> thing3;

    //Output the story
    cout << endl; //following the example
    cout << "Here is your story, " << firstinitial << "!" << endl;
    cout << "Let's go on a road trip to " << cityname << "!" << endl;
    cout << "It's a great time of year to " << verb << " there." << endl;
    cout << "The average temperature is a mild " << averagetemp << " degrees." << endl;
    cout << "It's only " << numbermiles << " miles away!" << endl;
    cout << "We'll need to bring "
    << thing1 << " for fun, "
    << thing2 << " for good luck, "
    << thing3 << " to drink when we're thirsty! Ready? Let's go!" << endl;
    
    return 0; 
    
}