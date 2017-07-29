#include<iostream.h>
#include<conio.h>

void main()
{
 int num=0,thou=0,oneh=0,ten=0,one=0;
 int thoux=0,onehx=0,tenx=0,onex=0;
 

 clrscr();
 

 cout<<"\nPlease enter a number [1-3000]: ";
 cin>>num;
 
 thou=num/1000;
 thoux=thou*1000;
 int remain=num%1000;
 
 oneh=remain/100;
 onehx=oneh*100;
 int remain2=remain%100;
 
 ten=remain2/10;
 tenx=ten*10;
 int remain3=remain2%10;
 
 one=remain3/1;
 onex=one*1;

 cout<<"\nPress enter to see the result =>";
 getch();
 cout<<"\n"<<num<<" = ";

 if (num>3000)
 {
     cout<<"\n CAN'T PROPERLY PROCESS INPUT. Please enter a number ranged from 1-3000.";
 }

    else if ((thoux==3000) && (num<=3000))
    {
        cout<<"MMM";
    }
    else if ((thoux==2000) && (num<3000))
    {
        cout<<"MM";
    }
    else if ((thoux==1000) && (num<3000))
    {
        cout<<"M";
    }
    if ((onehx==900) && (num<3000)) 
    {
        cout<<"CM";
    }
    else if ((onehx==800) && (num<3000))
    {
        cout<<"DCCC";
    }
    else if ((onehx==700) && (num<3000)) 
    {
        cout<<"DCC";
    }
    else if ((onehx==600) && (num<3000))
    {
        cout<<"DC";
    }
    else if ((onehx==500) && (num<3000))
    {
        cout<<"D";
    }
    else if ((onehx==400) && (num<3000))
    {
        cout<<"CD";
    }
    else if ((onehx==300) && (num<3000))
    {
        cout<<"CCC";
    }
    else if ((onehx==200) && (num<3000))
    {
        cout<<"CC";
    }
    else if ((onehx==100) && (num<3000))
    {
        cout<<"C";
    }
    if ((tenx==90) && (num<3000))
    {
        cout<<"XC";
    }
    else if ((tenx==80) && (num<3000))
    {
        cout<<"LXXX";
    }
    else if ((tenx==70) && (num<3000))
    {
        cout<<"LXX";
    }
    else if ((tenx==60) && (num<3000))
    {
        cout<<"LX";
    }
    else if ((tenx==50) && (num<3000))
    {
        cout<<"L";
    }
    else if ((tenx==40) && (num<3000))
    {
        cout<<"XL";
    }
    else if ((tenx==30) && (num<3000))
    {
        cout<<"XXX";
    }
    else if ((tenx==20) && (num<3000))
    {
        cout<<"XX";
    }
    else if ((tenx==10) && (num<3000))
    {
        cout<<"X";
    }

    if ((onex==9) && (num<3000))
    {
        cout<<"IX";
    }
    else if ((onex==8) && (num<3000))
    {
        cout<<"VIII";
    }
    else if ((onex==7) && (num<3000))
    {
        cout<<"VII";
    }
    else if ((onex==6) && (num<3000))
    {
        cout<<"VI";
    }
    else if ((onex==5) && (num<3000))
    {
        cout<<"V";
    }
    else if ((onex==4) && (num<3000))
    {
        cout<<"IV";
    }
    else if ((onex==3) && (num<3000))
    {
        cout<<"III";
    }
    else if ((onex==2) && (num<3000))
    {
        cout<<"II";
    }
    else if ((onex==1) && (num<3000))
    {
        cout<<"I";
    }


 getch();
}