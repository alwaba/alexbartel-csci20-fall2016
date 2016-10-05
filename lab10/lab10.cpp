/*
Alex Bartel
CSCI 20 T/Th
April Browne
LAB10
10.4.2016

Run eq's from operators worksheet
Requirements
Use complete sentences in your output.
Input: None
Output
Appropriate to the equation.  Even though the worksheet doesn’t have full output, please add that so I know what you are outputting.
Submission:
Post your lab to GitHub.
Submit the  link to the Canvas assignment.  Put in any comments you want me to know
*/
#include <iostream>
using namespace std;

int main(){

//problem1
    int suzyAge = 25;
    int johnAge = 21;
    cout << "Is John older than Suzy? 1=True 0=False" << endl;
    cout << (suzyAge < johnAge) << endl;

//problem2    
    int x = 7;
    int y = 7;
    cout << "Is 7 greater than or equal to 7? 1=T 0=F" << endl;
    cout << (x >= y) << endl;

//problem3    
    int a = 1;
    int b = 9;
    cout << "Is 1 equal to 9? 1=T 0=F" << endl;
    cout << (a == b) << endl;

//problem4    
    int limit = 20;
    int count = 10;
    cout << "Is 20*10 divided by 2 greater than 0? 1=T 0=F" << endl;
    cout << ((limit*count) / 2 > 0) << endl;

//problem5    
    int t = -4;
    int z = 0;
    cout << "Is -4 greater than 5 or is 0 less than two? 1=T 0=F" << endl;
    cout << (t > 5 || z < 2) << endl;
    
//problem6
    int variable = -5;
    cout << "Is it false that -5 is greater than 0?" << endl;
    cout << (!(variable > 0)) << endl;
    
//problem7
    int prb7 = 16;
    cout << "Is 16/4 less than 8 AND is 16 greater than or equal to 4?" << endl;
    cout << ((prb7/4 < 8) && (prb7 >= 4)) << endl;

//problem8 I changed variable x and y to prb8x and prb8y
    int prb8x = -2;
    int prb8y = 5;
    cout << "Is -2 * 5 less than 10 OR is 5 * 0 less than 10?" << endl;
    cout << (prb8x * prb8y < 10 || prb8y * z < 10) << endl;
    
//problem9. I use variables y=7 and x=7 from problem 2 where they were declared first.
    int j = -2;
    int k = 5;
    int l = 4;
    cout << "Is it false that -2 * 5 is less than 10 OR 7/7 * 4 is less than 7 * 2?" << endl;
    cout << (!(j * l < 10) || y/x * 4 < y*2) << endl;

    return 0;
}
