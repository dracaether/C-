#include<iostream.h>
#include<conio.h>

// Machine Problem 2

void main()
{
 int   thou=0,fiveH=0,oneH=0,fifty=0,ten=0,one=0;
 float cent=0,amount=0,remain=0,remain2=0,remain3=0,remain4=0,remain5=0;
 clrscr();
 cout<<"insert name";
 cout<<"\n1BSIT-01";
 getch();
 cout<<"\nPlease enter the amount in peso: ";
 cin>>amount;
 cout<<"List of denominations:" ;
 thou=amount/1000;
 cout<<"\n1000\t\t - "<<thou<<" x 1000\t= "<<(thou*1000);
 remain=(int)amount%1000;
 fiveH=remain/500;
 cout<<"\n500\t\t - "<<fiveH<<" x 500\t= "<<(fiveH*500);
 remain2=(int)remain%500;
 oneH=remain2/100;
 cout<<"\n100\t\t - "<<oneH<<" x 100\t= "<<(oneH*100);
 remain3=(int)remain2%100;
 fifty=remain3/50;
 cout<<"\n50\t\t - "<<fifty<<" x 50\t= "<<(fifty*50);
 remain4=(int)remain3%50;
 ten=remain4/10;
 cout<<"\n10\t\t - "<<ten<<" x 10\t= "<<(ten*10);
 remain5=(int)remain4%10;
 one=remain5/1;
 cout<<"\n1\t\t - "<<one<<" x 1\t= "<<(one*1);
 float amount2=amount-(int)amount;
 cent=amount2;
 cout<<"\ncentavo(s)\t - "<<cent<<"\t= "<<cent;
 getch();
}