#include<iostream.h>
#include<conio.h>

void main()
{
    int num[6];
    int x=0,y=0,temp=0;
    clrscr();

    cout<<"Please enter the first number: ";
    cin>>num[0];
    cout<<"Please enter the second number: ";
    cin>>num[1];
    cout<<"Please enter the third number: ";
    cin>>num[2];
    cout<<"Please enter the fourth number: ";
    cin>>num[3];
    cout<<"Please enter the fifth number: ";
    cin>>num[4];
    cout<<"Please enter the sixth number: ";
    cin>>num[5];

    while (x<6)
    {
        y=x;
        while(y<6)
        {
            if (num[y]<=num[x])
            {
                temp=num[y];
                num[y]=num[x];
                num[x]=temp;
            }
            y++;
        }
        cout<<endl<<"LOOP #"<<x+1<<endl;
        for(y=0;y<6;y++)
        {
            cout<<num[y]<<" ";
        }
        cout<<endl;
        x++;
    }
    //x=0;
    //while(x<6)
    //{
    //  cout<<num[x]<<" ";
    //x++;    
    //}
    getch();
}