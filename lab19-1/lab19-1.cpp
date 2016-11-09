/*
Alex Bartel
April Browne
CSCI 20
11.8.2016

LAB 19 / 4.5 LAB

Use file input to read in a file with a list of numbers separated by a space that is four numbers in a line.
Store these values in a two dimensional array.
Average all numbers in the matrix.
Add up each line and each column of the array.
Output the array and totals into an output file named output.txt.
Use the stream manipulators to make the output nice.

Requirements
Use a two dimensional array
Use appropriate input and output.

Input
txt
*/

#include<iostream>
#include<ios>
#include <fstream>
#include<iomanip>
using namespace std;

int main(){
    
    double numAvg = 0;
    double numTotal = 0;
    int i = 0;
    int j = 0;
    ifstream inFS;

    int NumberArr[3][4];
    int RowSum[4] = {0, 0, 0, 0};
    int ColSum[3] = {0, 0, 0};
    
    //opens file
    inFS.open("numbers.txt");
    
    //reads file and assigns values accordingly
    while(!inFS.eof()){
        for(i = 0; i < 3; i++){
            for(j = 0; j < 4; j++){
                inFS >> NumberArr[i][j];
            }
        }
    }
    
    //close file
    inFS.close();

    //total array entries
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            numTotal = NumberArr[i][j] + numTotal;
        }
    }
    //average array entries
    numAvg = (numTotal / 12);
    
    //sum cols
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            ColSum[i] = NumberArr[i][j] + ColSum[i];
        }
    }
    
    //sum rows
    for(i = 0; i < 4; i ++){
        for (j = 0; j < 3; j++){
            RowSum[i] = NumberArr[j][i] + RowSum[i];
        }
    }
    
    //output file
    ofstream outFS;
    outFS.open("numbersout.txt");
    
    //output array with formatting and row sum
    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            outFS << setw(10) << NumberArr[j][i];
        }
        outFS << setw(10) << RowSum[i] << endl;
    }
    
    //output column sum
    for(i = 0; i < 3; i++){
        outFS << setw(10) << ColSum[i];
    }
    
    outFS << endl;
    outFS << "Average: " << numAvg << endl;
    
    outFS.close();
    
    return 0;
}