#include<iostream.h> // these two libraries are needed to get the code below running
#include<conio.h>

// Based on Machine Problem 2

void main() // NEVER add semi-colon (;)

// make sure all lines of code here has semi-colon (;)

 int    thousand=0; // example         // insert variables that should be whole number
 float  amount=0;  // example         // insert variables that should be decimal
 clrscr(); // to clear the screen


 getch(); // asks input from user
 cout<<"\nPlease enter the amount in peso: "; // print/display the string
 cin>>amount; // whatever the user typed in goes to the variable you set up
 cout<<"List of denominations:" ;
 thou=amount/1000; // formula first before displaying the result
 cout<<"\n1000\t\t - "<<thou<<" x 1000\t= "<<(thou*1000); // result merged with another formula (thou*1000)
 remain=(int)amount%1000; // convert a float to an int before attempting % process

 // in case of centavos
 float amount2=amount-(int)amount; // setting a float variable + float to int conversion
 cent=amount2; // assigning of variables
 cout<<"\ncentavo(s)\t - "<<cent<<"\t= "<<cent;
 getch(); // to pause the program
} // do not forget the curly bros (brackets). they are important.
