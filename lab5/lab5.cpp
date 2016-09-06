#include <iostream>
#include <string>
using namespace std;

struct monsterStruct{
    
    int monsterBirthYear;
    string monsterHead;
    string monsterEyes;
    string monsterEars;
    string monsterNose;
    string monsterMouth;
    
};

int main (){
    
    int currentYear = 2016;

    monsterStruct oneMonster;
    oneMonster.monsterHead = "zombus";
    oneMonster.monsterEyes = "spritem";
    oneMonster.monsterEars = "vegitas";
    oneMonster.monsterNose;
    oneMonster.monsterMouth = "whackus";
    oneMonster.monsterBirthYear;
    
    monsterStruct twoMonster;
    twoMonster.monsterHead = "zombus";
    twoMonster.monsterEyes = "whackus";
    twoMonster.monsterEars = "vegitas";
    twoMonster.monsterNose = "spritem";
    twoMonster.monsterMouth = "zombus";
    
    monsterStruct threeMonster;
    threeMonster.monsterHead = "zombus";
    threeMonster.monsterEyes = "zombus";
    threeMonster.monsterEars = "whackus";
    threeMonster.monsterNose = "vegitas";
    threeMonster.monsterMouth = "spritem";
    
    monsterStruct fourMonster;
    fourMonster.monsterHead = "spritem";
    fourMonster.monsterEyes = "zombus";
    fourMonster.monsterEars = "zombus";
    fourMonster.monsterNose = "whackus";
    fourMonster.monsterMouth = "vegitas";
    
    monsterStruct fiveMonster;
    fiveMonster.monsterHead = "vegitas";
    fiveMonster.monsterEyes = "spritem";
    fiveMonster.monsterEars = "zombus";
    fiveMonster.monsterNose = "zombus";
    fiveMonster.monsterMouth = "vegitas";
    
    
    cout << "Would you like a zombus, whackus, vegitas or spritem nose?" << endl;
    cin >> oneMonster.monsterNose;
    
    cout << "What year was your monster born in?" << endl;
    cin >> oneMonster.monsterBirthYear;
    
    
    cout << "Your monster has a spooky "
         << oneMonster.monsterHead << " head, a pair of "
         << oneMonster.monsterEyes << " eyes, a set of "
         << oneMonster.monsterEars << " ears, a "
         << oneMonster.monsterNose << " nose, and a "
         << oneMonster.monsterMouth << " monster mouth. Your monster was born "
         << (currentYear - oneMonster.monsterBirthYear) << " years ago. Scary!" << endl;
         
    cout << "My first monster has a spooky "
         << twoMonster.monsterHead << " head, a pair of "
         << twoMonster.monsterEyes << " eyes, a set of "
         << twoMonster.monsterEars << " ears, a "
         << twoMonster.monsterNose << " nose, and a "
         << twoMonster.monsterMouth << " monster mouth." << endl;
         
    cout << "My second monster has a spooky "
         << threeMonster.monsterHead << " head, a pair of "
         << threeMonster.monsterEyes << " eyes, a set of "
         << threeMonster.monsterEars << " ears, a "
         << threeMonster.monsterNose << " nose, and a "
         << threeMonster.monsterMouth << " monster mouth." << endl;
         
    cout << "My third monster has a spooky "
         << fourMonster.monsterHead << " head, a pair of "
         << fourMonster.monsterEyes << " eyes, a set of "
         << fourMonster.monsterEars << " ears, a "
         << fourMonster.monsterNose << " nose, and a "
         << fourMonster.monsterMouth << " monster mouth." << endl;
         
    cout << "My fourth monster has a spooky "
         << fiveMonster.monsterHead << " head, a pair of "
         << fiveMonster.monsterEyes << " eyes, a set of "
         << fiveMonster.monsterEars << " ears, a "
         << fiveMonster.monsterNose << " nose, and a "
         << fiveMonster.monsterMouth << " monster mouth." << endl;
    
    return 0;
}