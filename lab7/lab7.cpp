#include <iostream>
#include <string>
using namespace std;

void OldMacDon()
{
    cout << "Old MacDonald had a farm" << endl;
    cout << "E-I-E-I-O" << endl;
}

void Chorus(string animalName, string animalSound)
{
    cout << "And on his farm he had a " << animalName << endl;
    cout << "E-I-E-I-O" << endl;
    cout << "With a " << animalSound << " " << animalSound << " here" << endl;
    cout << "And a " << animalSound << " " << animalSound << " there" << endl;
    cout << "Here a " << animalSound << ", there a " << animalSound << endl;
    cout << "Everywhere a " << animalSound << " " << animalSound << endl;
}

int main()
{
    
    OldMacDon();
    Chorus("cow", "moo");
    OldMacDon();
    Chorus("pig", "oink");
    OldMacDon();
    Chorus("duck", "quack");
    OldMacDon();
    Chorus("horse", "neigh");
    OldMacDon();
    Chorus("sheep", "baa");
    OldMacDon();
    
    
    return 0;
}