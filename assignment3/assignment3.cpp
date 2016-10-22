/*
Alex Bartel
April Browne
CSCI 20 T/Th
10.19.2016

Program/Assignment 3

Game of Nim
Nim is a two-player game based on removing stones.
The game begins with two piles of stones. Players alternate turns.
Each turn, a player chooses to remove one, two, or three stones from a single pile.
The player who removes the last stone wins the game.
The computer should be one player and it just needs to play legally (not well).
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NimGame{
    public:
    NimGame(){
        pile1 = 8;
        pile2 = 8;
        numStones1 = 0;
        numStones2 = 0;
        return;
    }    
    void PlayNim(int uPile, int uStones){
        if(uPile == 1){
            pile1 = pile1 - uStones;
        }
        else{
            pile2 = pile2 - uStones;
        }
        return;
    }    
    int GetPile1(){
        return pile1;
    }
    int GetPile2(){
        return pile2;
    }

    private:
    int pile1;
    int pile2;
    int numStones1;
    int numStones2;
};

int main(){
    
    int userPile;
    int userStones;
    int comPile;
    int comStones;
    NimGame Game;
    
    srand(time(0));
    
    //intro
    cout << "Welcome to the game of Nim." << endl;
    cout << "You will begin with 2 piles of 8 stones." << endl;
    cout << "You will remove 1-3 stones from either pile. " << endl;
    cout << "The computer will remove 1-3 stones from either pile." << endl;
    cout << "The player to remove the last stone wins. You will play first. " << endl;
    cout << " " << endl;
    
      
    while(Game.GetPile1() > 0 || Game.GetPile2() > 0){
        
        //user pile selection
        cout << "Choose to remove stones from pile 1 or 2: ";
        cin >> userPile;
        
        //check for valid pile selection
        while(userPile < 1 || userPile > 2){
            cout << "Choose only pile 1 or 2" << endl;
            cin >> userPile;
    }
    
        //user stones selection
        cout << "You may remove 1, 2 or 3 stones: ";
        cin >> userStones;
        cout << " " << endl;
        
        //check for valid stone selection
        while(userStones < 1 || userStones > 3){
            cout << "Choose a number only between 1 and 3" << endl;
            cin >> userStones;
    }
        if(userPile == 1 && Game.GetPile1() == 0){
            cout << "Pile 1 has no stones. Choose how many stones to remove from pile 2." << endl;
            cin >> userStones;
            userPile = 2;
        }
        if(userPile == 2 && Game.GetPile2() == 0){
            cout << "Pile 2 has no stones. Choose how many stones to remove from pile 1." << endl;
            cin >> userStones;
            userPile = 1;
        }        
        if(userPile == 1 && userStones > Game.GetPile1()){
            cout << "Please choose to take " << Game.GetPile1() << " stone(s) or fewer." << endl;
            cin >> userStones;
        }
        if(userPile == 2 && userStones > Game.GetPile2()){
            cout << "Please choose to take " << Game.GetPile2() << " stone(s) or fewer." << endl;
            cin >> userStones;
        }
    
        //set the number of stones in each pile from the user move "plays the game"
        Game.PlayNim(userPile, userStones);
        
        //outputs player move
        cout << "YOU removed " << userStones << " stone(s) from pile " << userPile << endl;
        
        //computer chooses a random pile and a random number
        comPile =   (rand() % 2 + 1);
        comStones = (rand() % 3 + 1);

        //force computer to choose a pile with stones in it
        if(Game.GetPile1() == 0){
            comPile = 2;
        }
        if(Game.GetPile2() == 0){
            comPile = 1;
        }
        
        //only pick a valid number of stones
        if(comPile == 1 && Game.GetPile1() <= 3){
            comStones = Game.GetPile1();
        }
        if(comPile == 2 && Game.GetPile2() <= 3){
            comStones = Game.GetPile2();
        }
        
        // //enhance computer game strategy ignore this, doesn't work yet
        // if(Game.GetPile1() < 8 && Game.GetPile2() == 0){
        //     comStones = Game.GetPile1() - 4;
        // }
        // if(Game.GetPile2() < 8 && Game.GetPile1() == 0){
        //     comStones = Game.GetPile2() - 4;
        // }
    
        //checks to see if the user has won
        if(Game.GetPile1() == 0 && Game.GetPile2() == 0){
            cout << "Congratulations! You made the last move. You win!" << endl;
            exit(0);
        }
        
        //set the number of stones in each pile from the computer move "plays the game"
        Game.PlayNim(comPile, comStones);
     
        //output info
        cout << "THE COMPUTER removed " << comStones << " stone(s) from pile " << comPile << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "THERE ARE " << Game.GetPile1() << " STONE(S) IN PILE 1 AND " << Game.GetPile2() << " STONE(S) IN PILE 2" << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << " " << endl;
        }
        
        cout << "The computer won! Try again!";
        
        return 0;
}