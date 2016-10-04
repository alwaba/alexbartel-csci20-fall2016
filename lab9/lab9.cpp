/*
Alex Bartel
CSCI 20 T/Th
April Browne
LAB9
9.29.2016

Create a class that converts temperatures between Kelvin, Fahrenheit and Celsius. 
It will always internally store the value in kelvin.
This class will be run by the provided main.

Class MUST be named TemperatureConverter
Class variable should be kelvin_.

You need a default constructor (sets kelvin to 0) and an overloaded constructor that accepts a kelvin value.

Appropriate accessor and mutator function for kelvin as described:

SetTempFromKelvin – accepts a kelvin value an stores it
GetTempFromKelvin – returns the kelvin value

The following functions as described

SetTempFromCelsius – accepts a Celsius value and converts it to kelvin Formula: k=c + 273.15
SetTempFromFahrenheit – accepts a Fahrenheit value and converts it to kelvin Formula: k = (5 * (f -32)/9) + 273.15
GetTempAsCelsius – returns the Celsius temperature. Formula: k – 273.15
GetTempAsFahrenheit – returns the Fahrenheit temperature. Formula: ((c*9)/5 + 32)
PrintTemperatures – prints the value as kelvin, Celsius and Fahrenheit by using the other functions available.
*/

#include<iostream>
using namespace std;

class TemperatureConverter{
    
    public:
    void   SetTempFromKelvin(double kelvin);
    double GetTempFromKelvin();
    void   SetTempFromCelsius(double celsius);
    void   SetTempFromFahrenheit(double fahrenheit);
    double GetTempAsCelsius();
    double GetTempAsFahrenheit();
    void   PrintTemperatures();
    TemperatureConverter();
    TemperatureConverter(double input);
    
    private:
    double kelvin_;
    double kelvin;
};

TemperatureConverter::TemperatureConverter(){
    double kelvin = 0.00;
    return;
}

TemperatureConverter::TemperatureConverter(double input){
    double kelvin = input;
    return;
}

void TemperatureConverter::SetTempFromKelvin(double kelvin){
    double kelvin_ = kelvin;
    return;
}

double TemperatureConverter::GetTempFromKelvin(){
    return kelvin_;
}

void TemperatureConverter::SetTempFromCelsius(double celsius){
    double kelvin_ = (celsius + 273.15);
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit){
    double kelvin_ = ((5* ((fahrenheit - 32) / 9)) + 273.15);
    return;
}

double TemperatureConverter::GetTempAsCelsius(){
    return (kelvin_ - 273.15);
}

double TemperatureConverter::GetTempAsFahrenheit(){
    return ((kelvin_ * 9)/5 + 32); 
}

void TemperatureConverter::PrintTemperatures(){
    cout << TemperatureConverter::GetTempFromKelvin()   << endl;
    cout << TemperatureConverter::GetTempAsCelsius()    << endl;
    cout << TemperatureConverter::GetTempAsFahrenheit() << endl;
    return;
}