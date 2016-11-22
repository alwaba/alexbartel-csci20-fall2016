/*Alex Bartel
 *April Browne
 *CSCI 20 T/Th 
 *11.29.2016
 *
 *LAB 5.4 / LAB 21
 *
 *Take the code below and break it up into the appropriate separate files for compilation.  You may create a makefile for 1 point extra credit or just compile by command line.
 */

#include"lab21.h"

/*
 *  This class is a dummy class to help show how to
 *  break our class into an interface and implementation
 *  file. It will set a member variable to 1 on initialization
 *  and output it using the Output() function.
 */


#include"myclass.h"

int randomNumber(){
   srand(time(0));
   return ((rand()% 10) + 1);
}

// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;
  // Call the output member function
  object.Output();
  // This ends our program
  return 0;
}
