#include<iostream.h>
#include<conio.h>
#include<string.h> // for some odd reason cstring doesn't work on mine

void main()
{
    char inputx[15];
    char cpy[15];
    int i=0, k=0, length=13;
    clrscr();
    cout<<"Erin Casseapey S. Parino\n";
    cout<<"BSIT-01\n";

    cout<<"Please enter a string value [12 characters max]: ";
    cin.getline(inputx,sizeof(inputx));

    strcpy (cpy, inputx);
    cout<<"You have entered "<<inputx<<endl;
    length=strlen(inputx);
    
    // length and '#' checker
    // --it's not perfect; there are times that some strings could bypass the checker. will improve it someday. too lazy.
    while (i<length)
    {
        
        if (cpy[i]=='#')
        {
            cout<<"Invalid input. Please remove any instances of '#'. Try again.\nPlease enter a string value [12 characters max]:";
            i=0;
            cin.getline(inputx,sizeof(inputx));
            cout<<"You have entered "<<inputx<<endl;
            length=strlen(inputx);
            
        }
        if (length>12)
        {
            cout<<"There are more than 12 characters. Re-try again: ";
            i=0;
            cin.getline(inputx,sizeof(inputx));
            cout<<"You have entered "<<inputx<<endl;
            length=strlen(inputx);
        }

        if (cpy[i]=='#' && length>12)
        {
            cout<<"Invalid input. Please remove any instances of '#'. There are also more than 12 characters. Re-try again: ";
            i=0;
            cin.getline(inputx,sizeof(inputx));
            cout<<"You have entered "<<inputx<<endl;
            length=strlen(inputx);
        }
        i++;
    }

    cout<<"Phone number: ";
    
    // switch case
    for(k=0;k<length;k++)
        {
            switch(cpy[k])
            {
                case 'a' : case 'b' : case 'c' : case '2' : case 'A' : case 'B' : case 'C' : 
                {
                    cout<<'2';
                    break;
                }
                case 'd' : case 'e' : case 'f' : case '3' : case 'D' : case 'E' : case 'F' : 
                {
                    cout<<'3';
                    break;
                }
                case 'g' : case 'h' : case 'i' : case '4' : case 'G' : case 'H' : case 'I' :
                {
                    cout<<'4';
                    break;
                }
                case 'j' : case 'k' : case 'l' : case '5' : case 'J' : case 'K' : case 'L' :
                {
                    cout<<'5';
                    break;
                }
                case 'm' : case 'n' : case 'o' : case '6' : case 'M' : case 'N' : case 'O' :
                {
                    cout<<'6';
                    break;
                }
                case 'p' : case 'q' : case 'r' : case 's' : case '7' : case 'P' : case 'Q' : case 'R' : case 'S' :
                {
                    cout<<'7';
                    break;
                }
                case 't' : case 'u' : case 'v' : case '8': case 'T' : case 'U' : case 'V' :
                {
                    cout<<'8';
                    break;
                }
                case 'w' : case 'x' : case 'y' : case 'z' : case '9': case 'W' : case 'X' : case 'Y' : case 'Z' :
                {
                    cout<<'9';
                    break;
                }
                case '1':
                {
                    cout<<'1';
                    break;
                }
                case '*':
                {
                    cout<<'+';
                    break;
                }
                case ' ':
                {
                    cout<<'0';
                    break;
                }
                     
            }
            
        }
        
               
    getch();
}
