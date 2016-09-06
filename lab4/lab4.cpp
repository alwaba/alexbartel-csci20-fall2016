/*Alex Bartel
9.1.2016
lab4 "coinstar"
Create a program that emulates the CoinStar machine (turn your coins into cash).
It determines how many quarters, dimes, nickels, and pennies you provided.
It should then determine how much you earn in dollars and cents. 
It has to take a 10.9% fee.  Then outputs the cash voucher.

Use math operators including modulo

Test 1: 105
Test 2: 3459
Test 3: 987654321
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    //assign variables. 
    int coinTotal = 0;
    
    int numberQuarters = 0;
    int numberDimes = 0;
    int numberNickels = 0;
    int numberPennies = 0;
    
    double feeTotal = 0.00;
    double payoutTotal = 0.00;
    
    float feePercentage = 0.109;
    
    //begin program
    cout << "Enter the value of your coins." << endl;
    cin >> coinTotal;
    
    numberQuarters = (coinTotal / 25);
    numberDimes = (coinTotal % 25) / 10;
    numberNickels = (coinTotal - numberQuarters * 25 - numberDimes * 10) / 5;
    numberPennies = (coinTotal % 5);
    
    feeTotal = (coinTotal * feePercentage);
    payoutTotal = (coinTotal - feeTotal);
    
    cout << "You brought in " << endl;
    cout << numberQuarters << " quarters." << endl;
    cout << numberDimes << " dimes." << endl;
    cout << numberNickels << " nickels." << endl;
    cout << numberPennies << " pennies." << endl;
    
    cout << "Your 10.9% fee total is ";
    cout << setprecision (2) << fixed << (feeTotal * .01) << " dollars." << endl;
    cout << "Your payout is ";
    cout << (payoutTotal * .01) << " dollars. Thank you!" << endl;
    
    return 0;
}
    
    
    
    
    
    /*
    quarterMod = coinTotal % 25; //modulo total coin by 25
    quarterVal = (coinTotal - quarterMod); //subtract the modulo by 25 from total coins
    numberQuarters = quarterVal / 25; //divide the value by 25 to obtain number of quarters
    
    dimeMod = quarterMod % 10;
    dimeVal = (quarterMod - dimeMod);
    numberDimes = dimeVal / 10;
    
    nickelMod = dimeMod % 5;
    nickelVal = (dimeMod - nickelMod);
    numberNickles = nickelVal / 5;
    
    numberPennies = nickelMod;
    //assuming we have the highest value of each coin
    //the nickel modulo equals the number of pennies 
    
    feeTotal = (coinTotal * .0109);
    payoutTotal = (coinTotal * .1) - feeTotal;

    //begin readout
    cout << "You brought in..." << endl;
    cout << numberQuarters << " quarters" << endl;
    cout << numberDimes << " dimes," << endl;
    cout << numberNickles << " nickles, and" << endl;
    cout << numberPennies << " pennies." << endl;
    
    cout << "Your 10.9% fee total is ";
    cout << feeTotal;
    cout << " dollars." << endl;
    cout << "Your payout is ";
    cout << payoutTotal;
    cout << " dollars. Thank you!" << endl;
    
    return 0;
}
*/
