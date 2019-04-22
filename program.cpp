#include<iostream>
using namespace std;
int ifusings(){                             //Full inverted pyramid using *
  int rows;

   cout << "Enter number of rows: ";
   cin >> rows;

   for(int i = rows; i >= 1; --i)
   {
       for(int space = 0; space < rows-i; ++space)
           cout << "  ";

       for(int j = i; j <= 2*i-1; ++j)
           cout << "* ";

       for(int j = 0; j < i-1; ++j)
           cout << "* ";

       cout << endl;
   }

   return 0;
}


/*-----------------------------------------------------------*/


int punum(){                                //pyramid using numbers
  int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int space = 1; space <= rows-i; ++space)
        {
            cout << "  ";
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                cout << i+k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
    }
    return 0;
}


/*-------------------------------------------------------------*/


int fullpstar(){                                 //Program to print full pyramid using *
  int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}


/*--------------------------------------------------------*/


int invhnum(){                                   //Inverted half pyramid using numbers
  int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*---------------------------------------------------------------*/


int invhpystar(){                                 //Inverted half pyramid using *
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


/*---------------------------------------------------------------*/



int ihpyramid()                                   //inverted half pyramid using *
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

/*--------------------------------------------*/


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
                 printf("1.Half Pyramid using * , 2.Half Pyramid a using Numbers , 3.Half pyramid using Alphabets , 4.Inverted Half Pyramid using *, 5.Inverted half pyramid using *, 6.Inverted half pyramid using numbers, 7.Full pyramid using *, 8.Pyramid Using numbers 9.Inverted full pyramid using *, 10.Exit\n");
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
                   case 4: ihpyramid();
                           break;
                   case 5: invhpystar();
                           break;
                   case 6: invhnum();
                           break;
                   case 7: fullpstar();
                           break;
                   case 8: punum();
                           break;
                   case 9: ifusings();
                           break;
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");
                 scanf("%d",&option);
               }
               return 0;
           }
