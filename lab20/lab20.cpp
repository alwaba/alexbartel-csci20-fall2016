#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
                char firststr[10]; //char array
                int firstname = 0; //initialize firstname int
                char *head = firststr; //initialize pointer variable to firststr
                char *tail = firststr; //initialize pointer variable to firststr
                
                cout << "Please enter a 10 letter word or less" << endl; //user input
                cin >> firststr; //user input into firststr
                strlen(firststr); //check the length of the string
                firstname = strlen(firststr); //assign the length of the string to firstname
                cout << "Your word is " << firststr << endl; //output word
                
                if (firstname<10) //check to see if word is wtihin the limit of the char array
                {
                                while (*head != '\0') //while the pointer reading the char array is not equal to the null character
                                {
                                                cout << *head; //output the pointer as it reads through the char array
                                                head++; //increment the head pointer to output the next position of the char array
                                }
                }
                else //if the length of the firstname array is greater than 10
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; //output
                }
                cout << endl; //endline
                tail = &firststr[strlen(firststr) - 1]; //assigns the memory address of tail to the memory address of
                                                        //firststr position one fewer than the length of the char array
                if (firstname < 10) //if the firstname is less than 10
                {
                                while (*tail>0) //while the pointer pointing to the end of the char array is greater than 0
                                {
                                                cout << *tail; //output what tail is pointing tot
                                                tail--; //decrement tail to output each position of firststr in reverse
                                }
                }
                cout << endl; //newline
                head = firststr; //assign the memory location of head to firststr
                tail = &firststr[strlen(firststr) - 1]; //assign tail to the contents of the last position of firststr
                head++; //increment head
                tail--; //decrement tail
                if (*head == *tail) //if whatever head points to is equal to whatever tail points to
                {
                                cout << "It is an palindrome!" << endl; //if they are equal
                }
                else
                {
                                cout << "It is not an palindrome" << endl; //if they are not equal
                }
 
                return 0;
}