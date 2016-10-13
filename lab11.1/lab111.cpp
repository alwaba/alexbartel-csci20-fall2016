/*Alex Bartel
April Browne
CSCI 20 T/Th
10.11.16
TAX PROGRAM
Compare the calculated tax with the amount withheld.
If the tax is larger than the withholding, the person owes more tax.
If it is smaller, then the person is entitled to a refund.
Requirements: At least one if/else statement
Input
Joe Vandal, single, Wages: $12,100, Withheld: $250
Alfonso Haynes, married, Wages: $32,351, Withheld: $3,192
Bridget Rowe, single, Wages: $88,229, Withheld: $12,057
Wendy Joseph, married, Wages: $73,291, Withheld: $6,972
Output
Name:
Total Gross Adjusted Income:
Total tax owed:
Name is entitled to a REFUND of $x.
*/


#include <iostream>
#include <string>
using namespace std;

int main(){
    string userName;
    string maritalStatus;
    double userIncome = 0.00;
    double adjIncome = 0.00;
    double userWhold = 0.00;
    double totalTax = 0.00;
    
    cout << "Please enter your first and last name" << endl;
    getline(cin, userName);
    
    cout << "Please enter S for single or M for married" << endl;
    cin >> maritalStatus;
    
    cout << "Please enter your income" << endl;
    cin >> userIncome;
    
    cout << "Please enter your tax withholding" << endl;
    cin >> userWhold;
    
    if(maritalStatus == "s"){
        
        adjIncome = userIncome - 10000.00;
        
        if(adjIncome < 8925.00){
            totalTax = (adjIncome * .1);
        }
        else if(adjIncome < 36250.00){
            totalTax = (((adjIncome - 8925.00) * 00.15) + 892.50);
        }
        else if(adjIncome < 87850.00){
            totalTax = (((adjIncome - 36250.00) * 00.25) + 4991.25);
        }
        else if(87850.00 < adjIncome){
            totalTax = (((adjIncome - 87850.00) * 00.28) + 17891.25);
        }
    }
    else{
        
        adjIncome = userIncome - 20000.00;
        
        if(adjIncome < 17850.00){
            totalTax = (adjIncome * .1);
        }
        else if(17850.00 < adjIncome < 72500.00){
            totalTax = (((adjIncome - 17850.00) * .15) + 1785.00);
        }
        else if(72500.00 < adjIncome){
            totalTax = (((adjIncome - 72500.00) * .28) + 9982.50);
        }
    }
    
    if(adjIncome < 0){
        cout << "No tax owed" << endl;
    }
    
    else if(totalTax < userWhold){
        cout << userName << ", your adjusted income is " << adjIncome << ". You owe " << totalTax << " in taxes and you withheld "
        << userWhold << ". You are entitled to a refund of " << userWhold - totalTax << endl;
    }
    else{
        cout << userName << ", your adjusted income is " << adjIncome << ". You owe " << totalTax << " in taxes and you withheld "
        << userWhold << ". You owe " << totalTax - userWhold << endl;
    }
    
    return 0;
}
