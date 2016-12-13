#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

class Dice{
    public: 
    
    int Roll(){
        return ((rand() % 6) + 1);
    }
    
    int ComHold(){
        return ((rand() % 6) + 1);
    }
    
    private: 
    int rollVal = 0;
    int comHo = 0;
};

class Score{
    public:
    
    void SetScore(int points){
        score = score + points;
        return;
    }
    
    int GetScore(){
        return score;
    }
    
    void SetName(string playerName){
        name = name + playerName;
    }
    
    string GetName(){
        return name;
    }
    
    Score(){
        score = 90;
        return;
    }
    
    Score(int points){
        score = points;
        return;
    }
    
    private: 
    int score;
    string name;
    
    
};

int main(){
    srand(time(0));
    char userIn = 'r';
    int rollVal = 0;
    int turnVal = 0;
    string computer;
    int totalPoints = 0;
    int comIn = 0;
    string ready;
    int numPlayers;
    int i = 0;
    int k = 0;
    string plyr;
    Score Player[10];


    Dice Pig;
    
    cout << "Would you like to play against the computer? y/n" << endl;
    cin >> computer;
    
    if(computer == "y" || computer == "y"){ //enter in computer program or play against other people
    
        Score User;
        Score Comp;
        
        while(User.GetScore() < 100 && Comp.GetScore() < 100){ //checks winning score criteria
        
            while(userIn == 'r' || userIn == 'R'){ //userIn r means continue rolling
                
                rollVal = Pig.Roll(); //rolls dice
                
                if((rollVal + turnVal + User.GetScore()) >= 100){ //if the user scores 100 or over points win!
                    cout << "You rolled a " << rollVal << "." << endl;
                    cout << "CONGRATULATIONS! You won with " << (rollVal + turnVal + User.GetScore()) << " points!" << endl;
                    cout << "The computer had " << Comp.GetScore() << " points." << endl;
                    cout << "You beat the computer by " << (rollVal + turnVal + User.GetScore()) - Comp.GetScore() << " points!" << endl;
                    comIn = 1; //prevents the computer from rolling
                    return 0;
                }
                
                else if(rollVal != 1){
                    
                    cout << "------------------------------------------------" << endl;
                    
                    cout << "You rolled a " << rollVal << "." << endl;
                    turnVal = turnVal + rollVal;
                    cout << "You have " << turnVal << " points this turn." << endl;
                    cout << "You could have " << turnVal + User.GetScore() << " if you hold now." << endl;
                    
                    cout << "------------------------------------------------" << endl;
                    
                    cout << "Enter r to roll or h to hold." << endl;
                    cin >> userIn;
                    
                    
                    if (userIn == 'h' || userIn == 'H'){
                        User.SetScore(turnVal);
                        
                        cout << "------------------------------------------------" << endl;
                        
                        cout << "You scored " << turnVal << " points this turn." << endl;
                        cout << "You have " << User.GetScore() << " total points." << endl;
                        cout << "Enter r to continue" << endl;
                        cin >> ready;
                        
                        cout << "------------------------------------------------" << endl;
                        
                        userIn = 'z';
                        comIn = 0;
                        turnVal = 0;
                    }
                    
                else{
                    cout << "------------------------------------------------" << endl;
                    cout << "OUCH. YOU ROLLED A 1!" << endl;
                    cout << "You have " << User.GetScore() << " points." << endl;
                    cout << "------------------------------------------------" << endl;
                    cout << "Enter r to continue." << endl;
                    cin >> ready;
                    cout << "------------------------------------------------" << endl;
                    turnVal = 0;
                    userIn = 'z';
                    comIn = 0;
                }
            }
        }
            
            while(comIn != 1){ //comIn == 1 signifies "hold"
                
                rollVal = Pig.Roll(); //"roll" the dice within the loop for a new roll every time
                comIn = Pig.ComHold(); // computer "decision" to hold or roll
                
                if((rollVal + turnVal + Comp.GetScore()) >= 100){
                    turnVal = turnVal + rollVal;
                    Comp.SetScore(turnVal);
                    cout << "The computer rolled a " << rollVal << "." << endl;
                    cout << "The computer wins with " << Comp.GetScore() << " points!" << endl;
                    cout << "You had " << User.GetScore() << " points." << endl;
                    cout << "You got beat by " << Comp.GetScore() - User.GetScore() << " points!" << endl;
                    comIn = 1;
                    return 0;
                }
                
                else if(rollVal != 1){ //if the roll is something other than 1
                    cout << "The computer rolled a " << rollVal << endl; //info output
                    turnVal = turnVal + rollVal; //temporary score tracking
                    
                    if(comIn == 1){ //holds computer turn and sums the points.
                        Comp.SetScore(turnVal);
                        cout << "------------------------------------------------" << endl;
                        cout << "The computer scored " << turnVal << " points this turn." << endl;
                        cout << "The computer has " << Comp.GetScore() << " total points" << endl;
                        cout << "It's your turn. Enter r to roll!" << endl;
                        cin >> ready;
                        cout << "------------------------------------------------" << endl;
                        userIn = 'r'; //sets the dice to roll for the user
                        turnVal = 0; // sets the temporary scorekeeper to zero
                        comIn = 1; //sets the computer not to roll
                    }
                }
                
                else{
                    cout << "------------------------------------------------" << endl;
                    cout << "The computer rolled a 1." << endl;
                    cout << "The computer has " << Comp.GetScore() << " points." << endl;
                    cout << "------------------------------------------------" << endl;
                    cout << "Enter r to continue" << endl; //this was added to slow down gameplay. the user can enter anything.
                    cin >> ready;
                    userIn = 'r'; //sets the dice to roll for the user
                    turnVal = 0; //sets the temporary scorekeeper to zero
                    comIn = 1; //sets the computer not to roll
                }
            }
        }
    }
    
    else{
        cout << "How many players would you like to play with?" << endl;
        cin >> numPlayers;
        
        while(numPlayers > 10 || numPlayers < 2){
            cout << "Please enter between 2 and 10 players." << endl;
            cin >> numPlayers;
        }
        
        for(i = 0; i < numPlayers; i++){
            cout << "Enter the name of player #" << i + 1 << endl;
            cin >> plyr;
            Player[i].SetName(plyr);
        }
        

        do{
            
            k = (k % numPlayers);
            
            rollVal = Pig.Roll(); //rolls dice
                
                
                cout << "Okay " << Player[k].GetName() << ", enter anything to begin!" << endl;
                cin >> ready;
                
                
                if((rollVal + turnVal + (Player[k].GetScore())) >= 100){
                    turnVal = turnVal + rollVal;
                    Player[k].SetScore(turnVal);
                    cout << "You rolled a " << rollVal << "." << endl;
                    cout << "CONGRATULATIONS! " << Player[k].GetName() << " won with " << Player[k].GetScore() << " points!" << endl;
                    for(k = 0; k < numPlayers; k++){
                        cout << Player[k].GetName() << " had " << Player[k].GetScore() << " points." << endl;
                    }
                    return 0;
                }
                
                
                else if(rollVal != 1){
                    
                    cout << "------------------------------------------------" << endl;
                    
                    turnVal = turnVal + rollVal;
                    
                    cout << "You rolled a " << rollVal << "." << endl;
                    cout << "You have " << turnVal << " points this turn." << endl;
                    cout << "You could have " << turnVal + Player[k].GetScore() << " if you hold." << endl;
                    
                    cout << "------------------------------------------------" << endl;
                    
                    cout << "Enter r to roll or h to hold." << endl;
                    cin >> userIn;
                    
                    
                    if (userIn == 'h' || userIn == 'H'){
                        Player[k].SetScore(turnVal);
                        
                        cout << "------------------------------------------------" << endl;
                        
                        cout << "You scored " << turnVal << " points this turn." << endl;
                        cout << "You have " << Player[k].GetScore() << " total points." << endl;
                        
                        cout << "------------------------------------------------" << endl;
                        
                        turnVal = 0;
                    }
                }
                    
                else{
                    cout << "------------------------------------------------" << endl;
                    cout << "OUCH. YOU ROLLED A 1!" << endl;
                    cout << "You have " << Player[k].GetScore() << " points." << endl;
                    cout << "------------------------------------------------" << endl;
                    cout << "Enter anything to continue." << endl;
                    cin >> ready;
                    cout << "------------------------------------------------" << endl;
                    turnVal = 0;
                }
                
                k++;
                
            }
            
        while(k <= numPlayers);
    }
    
    return 0;
}
