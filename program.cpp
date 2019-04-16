#include<iostream>
using namespace std;
int hfusingalphabets(){                           //half pyramid using alphabets
    char input, alphabet = 'A';

    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;

    for(int i = 1; i <= (input-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << alphabet << " ";
        }
        ++alphabet;

        cout << endl;
    }
    return 0;
}



/*----------------------------------------------------------*/



int hfusingnumbers()                              //half pyramid using numbers
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}



/*------------------------------------------------------------------------------*/



int halfpyramid()                               //half pyramid using *
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}



/*-------------------------------------------------------------------------------*/



int main()
           {
             int choice;
             int option=-1;
             while(option)
               {
                 printf("1.Half Pyramid using * , 2.Half Pyramid a using Numbers , 3.Half pyramid using Alphabets , 4.Exit\n");
                 printf("Enter your choice :- ");
                 scanf("%d",&choice);
                 switch(choice)
                 {
                   case 1: halfpyramid() ;
                           break;
                   case 2: hfusingnumbers();
                           break;
                   case 3: hfusingalphabets();
                           break;
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");
                 scanf("%d",&option);
               }
               return 0;
           }
