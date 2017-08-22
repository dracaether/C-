#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
    int num[6];
    int x=0, y=0, lowest=0, temp=0, i=0;

    //get 6 numbers
    for(x=0; x<6; x++)
    {
        cout<<"Enter a number: ";
        cin>>num[x];
    }

    cout<<endl<<"ORIGINAL VALUES: ";
    for(x=0; x<6; x++)
    {
        cout<<num[x]<<" ";
    }
    cout<<endl;
    cout<<endl<<"SELECTION SORT RESULT"<<endl;

    //SELECTION SORT
    for(x=0; x<5; x++)
    {
        y=x+1;
        lowest = num[y];
        while(y<6)
        {
            if(num[y]<lowest)
            {
                lowest = num[y];
                i=y;
            }
            y++;
        }
        if (num[i]<num[x])
        {
            num[i] = num[x];
            num[x] = lowest;
        }
        cout<<"LOOP #"<<x+1<<": ";
        for(y=0; y<6; y++)
        {
            cout<<num[y]<<" ";
        }
        cout<<endl;
    }
    getch(); 
}