#include<iostream>
using namespace std;

class TemperatureConverter{
    
    public:
    void   SetTempFromKelvin(double kelvin){
        kelvin_ = kelvin;
        return;
    }
    double GetTempFromKelvin(){
        return kelvin_;
    }
    void   SetTempFromCelsius(double celsius){
        kelvin_ = (celsius + 273.15);
        return;
    }
    double GetTempAsCelsius(){
        return (kelvin_ - 273.15);
    }
    void   SetTempFromFahrenheit(double fahrenheit){
        kelvin_ = ((5* ((fahrenheit - 32) / 9)) + 273.15);
        return;
    }
    double GetTempAsFahrenheit(){
        return (((kelvin_ - 273) * 9)/5 + 32); 
    }
    void   PrintTemperatures(){
        cout << GetTempFromKelvin()   << "K" << endl;
        cout << GetTempAsCelsius()    << "c" << endl;
        cout << GetTempAsFahrenheit() << "F" << endl;
        cout << "next" << endl;
        return;
    }
    TemperatureConverter(){
        kelvin_ = 0.00;
        return;
    }
    TemperatureConverter(double input){
        kelvin_ = input;
        return;
    }
    
    private:
    double kelvin_;

};

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}