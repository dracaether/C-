#include<iostream.h>  // these two libraries are needed to get the code below running
#include<conio.h>

// Based on Machine Problem 3

void main() // NEVER add semi-colon (;)

// make sure all lines of code here has semi-colon (;)

 int seconds=0, hours=0, minutes=0; // add variables needed
 clrscr(); // to clear the screen

 cout<<"\nHow many seconds? "; // print/display the string
 cin>> seconds; // whatever the user typed in goes to the variable you set up
 minutes = seconds / 60; // formula first before displaying the result
 hours = minutes / 60;

 // conversion from float to int + % process
 cout<< seconds << " seconds is equal to " << int(hours) << " hours " << int(minutes%60)
     << " minutes " << int(seconds%60) << " seconds.";
 getch();
}
