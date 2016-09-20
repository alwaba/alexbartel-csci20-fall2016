/*Alex Bartel
CSCI 20  T/Th
April Browne
Lab 8
Create a program that converts pounds to kilograms and kilograms to pounds.  User should first enter Kilograms and then pounds. 
Must have ToKilo function that takes a value in pounds and returns the value in Kilograms.
Must have ToPounds function that takes a value in kilograms returns them in pounds.
Use comments to identify the scope of ALL variables in your code.
User should input a kilogram value first and output its pound equivalent.
User should input a pound value next and output its equivalent.
*/

#include <iostream>
using namespace std;

double ToKilo(double formPounds)
{
    return formPounds / 2.21;
}

double ToPounds(double formKilos)
{
    return formKilos * 2.21;
}

int main()
{
    double userPounds = 0.0;
    double userKilos = 0.0;
    
    cout << "Please enter the number of pounds you would like to convert to Kilograms" << endl;
    cin >> userPounds;
    
    cout << ToKilo(userPounds) << " kilos" << endl;
    
    cout << "Please enter the number of kilos you would like to converto to pounds" << endl;
    cin >> userKilos;
    
    cout << ToPounds(userKilos) << " pounds";
    
    return 0;
}