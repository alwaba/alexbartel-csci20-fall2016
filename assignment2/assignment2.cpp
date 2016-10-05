/*
Alex Bartel
CSCI 20 T/Th
April Browne
LAB10
9.30.2016

Conversion program for distance (miles, yards, feet and inches).
Create a class with the following
Default constructor
Constructor
Appropriate accessors and mutators
Print function
Appropriate variables
Main function that demonstrates all of your classes abilities and should have ALL of the input/output.
*/

#include <iostream>
using namespace std;

class DistanceConverter{
    
    public:
        void   SetInchesFromInches(double inches){
            inches_ = inches;
            return;
        }
        double GetInches(){
            return inches_;
        }
        void   SetInchesFromFeet(double feet){
            inches_ = (feet * 12);
            return;
        }
        double GetFeet(){
            return (inches_ / 12);
        }
        void   SetInchesFromYards(double yards){
            inches_ = (yards * 36);
            return;
        }
        double GetYards(){
            return (inches_ / 36);
        }
        void   SetInchesFromMiles(double miles){
            inches_ = (miles * 63360);
            return;
        }
        double GetMiles(){
            return (inches_ / 63360);
        }
        void   PrintDistances(){
            cout << GetInches() << " Inches" << endl;
            cout << GetFeet()   << " Feet"   << endl;
            cout << GetYards()  << " Yards"  << endl;
            cout << GetMiles()  << " Miles"  << endl;
            cout << "Next" << endl;
            return;
        }
        DistanceConverter(){
            inches_ = 0.00;
            return;
        }
        DistanceConverter(double input){
            inches_ = input;
            return;
        }
            
    private:
        double inches_;

};

int main (){
    
    double inchesIn = 0.00; 
    double feetIn = 0.00;
    double yardsIn = 0.00;
    double milesIn = 0.00;
    
    cout << "Please enter a value in inches" << endl;
    cin >> inchesIn;
    
    cout << "Please enter a distance in feet" << endl;
    cin >> feetIn;
    
    cout << "Please enter a distance in yards" << endl;
    cin >> yardsIn;
    
    cout << "Please enter a distance in miles" << endl;
    cin >> milesIn;
    
    DistanceConverter dist0;
    DistanceConverter dist1(inchesIn);
    DistanceConverter dist2(feetIn);
    DistanceConverter dist3(yardsIn);
    DistanceConverter dist4(milesIn);
    
    dist0.PrintDistances();
    dist1.PrintDistances();
    dist2.PrintDistances();
    dist3.PrintDistances();
    dist4.PrintDistances();
    
    dist1.SetInchesFromInches(144);
    cout << dist1.GetInches() << endl;
    dist1.PrintDistances();
    
    dist2.SetInchesFromFeet(32);
    cout<<dist2.GetFeet()<<endl;
    dist2.PrintDistances();
    
    dist2.SetInchesFromMiles(4);
    cout<<dist2.GetMiles()<<endl;
    dist2.PrintDistances();
    
    
    return 0;
}