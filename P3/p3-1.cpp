#include<iostream.h>
#include<conio.h>

// P3 Machine Problem #1: Sum and Average of Odd and Even numbers
void main()
{
    int num[10]; 
    int i=0, k=1, n=0, sum=0, sumodd=0, sumeven=0, average=0;

    clrscr();

    cout<<"Erin Casseapey S. Parino"<<endl;
    cout<<"1BSIT-01"<<endl;

    while (k <= 10)
    {
        cout<<"Please enter input number "<<k<<": ";
        cin>>num[n];
        k++;
        n++;
    }

    // a. + c. Output all odd numbers + sum
    cout<<endl<<"ODD NUMBERS:"<<endl;
    for (i=0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            cout<<num[i]<<" ";
            sumodd=sumodd+num[i];
            i++;
        }

    }
    cout<<endl<<"Sum of all odd numbers: "<<sumodd;

    // b. + d. Output all even numbers + sum
    cout<<endl<<"EVEN NUMBERS:"<<endl;
    for (i=0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout<<num[i]<<" ";
            sumeven=sumeven+num[i];
            i++;
        }

    }
    cout<<endl<<"Sum of all even numbers: "<<sumeven;

    // e. + f. Output the sum and average of all input numbers
    sum=sumodd+sumeven;
    average=sum/10;

    cout<<endl<<"ALL INPUT NUMBERS:"<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"Sum: "<<sum;

    getch();
}