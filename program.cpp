#include<iostream>
using namespace std;
pattern2()                             //The Hourglass
{
    int i,j;
    int n=7;
    // This is upper half of pattern
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(2*n); j++)
        {
            // Left part of pattern
            if (i<j)
                printf(" ");
            else
                printf("*");

            // Right part of pattern
            if (i<=((2*n)-j))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    // This is lower half of pattern
    for (i=1; i<=n; i++)
    {
        for (j=1;j<=(2*n);j++)
        {
            // Left part of pattern
            if (i>(n-j+1))
                printf(" ");
            else
                printf("*");

            // Right part of pattern
            if ((i+n)>j)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}


/*------------------------------------------------------------*/


pattern()                                            //Diamond in rectangle
{
    int i,j;
    int n=7;

    // This is upper half of pattern
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(2*n); j++)
        {
            // Left part of pattern
            if (i>(n-j+1))
                cout<<" ";
            else
                cout<<"*";

            // Right part of pattern
            if ((i+n)>j)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;;
    }

    // This is lower half of pattern
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(2*n); j++)
        {
            // Right Part of pattern
            if (i<j)
                cout<<" ";
            else
                cout<<"*";

            // Left Part of pattern
            if (i<=((2*n)-j))
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
}

/*-------------------------------------------------*/



int floydstri(){                            //Floyd's Triangle
int rows, number = 1;

  cout << "Enter number of rows: ";
  cin >> rows;

  for(int i = 1; i <= rows; i++)
  {
      for(int j = 1; j <= i; ++j)
      {
          cout << number << " ";
          ++number;
      }

      cout << endl;
  }

  return 0;
}


/*---------------------------------------------------*/


int pascaltri(){                           //Pascal's triangle
int rows, number = 1;

   cout << "Enter number of rows: ";
   cin >> rows;

   for(int i = 1; i <= rows; i++)
   {
       for(int j = 1; j <= i; ++j)
       {
           cout << number << " ";
           ++number;
       }

       cout << endl;
   }

   return 0;

return 0;
}


/*------------------------------------------------------------------*/




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
                 printf("1.Half Pyramid using *  \n2.Half Pyramid a using Numbers\n3.Half pyramid using Alphabets\n4.Inverted Half Pyramid using *\n5.Inverted half pyramid using *\n6.Inverted half pyramid using numbers\n7.Full pyramid using *\n8.Pyramid Using numbers\n9.Inverted full pyramid using *\n10.Pascal's Triangle\n11.Floyd's Triangle\n12.Diamond in rectangle\n13.The Hourglass\n14.Exit\n");
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
                   case 10: pascaltri();
                            break;
                   case 11: floydstri();
                            break;
                   case 12: pattern();
                            break;
                   case 13: pattern2();
                            break;
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");
                 scanf("%d",&option);
               }
               return 0;
           }
