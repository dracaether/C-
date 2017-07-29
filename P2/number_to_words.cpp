#include<iostream.h>
#include<conio.h>

void main()
{
    int num=0,thou=0,oneh=0,ten=0,one=0;
    int thoux=0,onehx=0,tenx=0,onex=0;
    clrscr();
    

    cout<<"\nEnter a number [1-3000]: ";
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
        cout<<"three thousand ";
    }
    else if ((thoux==2000) && (num<3000))
    {
        cout<<"two thousand ";
    }
    else if ((thoux==1000) && (num<3000))
    {
        cout<<"one thousand ";
    }
    if ((onehx==900) && (num<3000)) 
    {
        cout<<"nine hundred ";
    }
    else if ((onehx==800) && (num<3000))
    {
        cout<<"eight hundred ";
    }
    else if ((onehx==700) && (num<3000)) 
    {
        cout<<"seven hundred ";
    }
    else if ((onehx==600) && (num<3000))
    {
        cout<<"six hundred ";
    }
    else if ((onehx==500) && (num<3000))
    {
        cout<<"five hundred ";
    }
    else if ((onehx==400) && (num<3000))
    {
        cout<<"four hundred ";
    }
    else if ((onehx==300) && (num<3000))
    {
        cout<<"three hundred ";
    }
    else if ((onehx==200) && (num<3000))
    {
        cout<<"two hundred ";
    }
    else if ((onehx==100) && (num<3000))
    {
        cout<<"one hundred ";
    }
    if ((tenx==90) && (num<3000))
    {
        cout<<"ninety ";
    }
    else if ((tenx==80) && (num<3000))
    {
        cout<<"eighty ";
    }
    else if ((tenx==70) && (num<3000))
    {
        cout<<"seventy ";
    }
    else if ((tenx==60) && (num<3000))
    {
        cout<<"sixty ";
    }
    else if ((tenx==50) && (num<3000))
    {
        cout<<"fifty ";
    }
    else if ((tenx==40) && (num<3000))
    {
        cout<<"forty ";
    }
    else if ((tenx==30) && (num<3000))
    {
        cout<<"thirty ";
    }
    else if ((tenx==20) && (num<3000))
    {
        cout<<"twenty ";
    }
    if ((tenx==10) && (onex==9) && (num<3000))
    {
        cout<<"nineteen";
    }
    else if ((tenx==10) && (onex==8) && (num<3000))
    {
        cout<<"eighteen";
    }
    else if ((tenx==10) && (onex==7) && (num<3000))
    {
        cout<<"seventeen";
    }
    else if ((tenx==10) && (onex==6) && (num<3000))
    {
        cout<<"sixteen";
    }
    else if ((tenx==10) && (onex==5) && (num<3000))
    {
        cout<<"fifteen";
    }
    else if ((tenx==10) && (onex==4) && (num<3000))
    {
        cout<<"fourteen";
    }
    else if ((tenx==10) && (onex==3) && (num<3000))
    {
        cout<<"thirteen";
    }
    else if ((tenx==10) && (onex==2) && (num<3000))
    {
        cout<<"twelve";
    }
    else if ((tenx==10) && (onex==1) && (num<3000))
    {
        cout<<"eleven";
    }
    else if ((tenx==10) && (num<3000))
    {
        cout<<"ten";
    }

    if ((onex==9) && (num<3000) && (tenx>10))
    {
        cout<<"nine";
    }
    else if ((onex==8) && (num<3000) && (tenx>10))
    {
        cout<<"eight";
    }
    else if ((onex==7) && (num<3000) && (tenx>10))
    {
        cout<<"seven";
    }
    else if ((onex==6) && (num<3000) && (tenx>10))
    {
        cout<<"six";
    }
    else if ((onex==5) && (num<3000) && (tenx>10))
    {
        cout<<"five";
    }
    else if ((onex==4) && (num<3000) && (tenx>10))
    {
        cout<<"four";
    }
    else if ((onex==3) && (num<3000) && (tenx>10))
    {
        cout<<"three";
    }
    else if ((onex==2) && (num<3000) && (tenx>10))
    {
        cout<<"two";
    }
    else if ((onex==1) && (num<3000) && (tenx>10))
    {
        cout<<"one";
    }


 getch();

}