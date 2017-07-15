#include<iostream.h>  // these two libraries are needed to get the code below running
#include<conio.h>

//Based on Machine Problem 4

void main()

 float meter=0; // example
 clrscr();

 cout<<"\nEnter the distance (meters): ";
 cin>>meter;
// cout<< decide which is your basis to do your computation [example, "How many seconds?"]
// then cin>>[variable]
 getch();

// the formula of time can be found on MP3.CPP
 mps = meter/sec;
 kilo = meter*1000;
// then do kpm and kph

 cout<<"\nMeters per Second: "<<(int)mps%60<<" m/s"; // example

 getch();
}
