#include<iostream>
using namespace std;

/*-----------------------------mathematical functions-----------------------------------*/
int landsl(){

    int a[5][5],big1=1,big2=0,n,m,i,j;
    cout<<"Enter no of rows and columns(max 5):";
    cin>>m>>n;
    cout<<"Enter the array:\n";

    for(i=0;i<m;i++)
        for(j=0;j<n;++j)
            cin>>a[i][j];

    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        {
            if(a[i][j]>big1)
                big1=a[i][j];
        }

    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        {
            if(a[i][j]>big2&&a[i][j]<big1)
                big2=a[i][j];
        }

    cout<<"\nLargest number:"<<big1;
    cout<<"\nSecond largest number:"<<big2;

    return 0;
}


/*-------------------------------------------------------------------*/



int sumofd(){
  int i,j,n,d1=0,d2=0,a[5][5];
	cout<<"Enter size of square matrix:"<<endl;
	cin>>n;
	cout<<"Enter Elements of matrix:\n";

	for(i=0;i<n;++i)
		for(j=0;j<n;++j)
		{
			cin>>a[i][j];
			if(i==j)
				d1+=a[i][j];
			if((i+j)==(n-1))
				d2+=a[i][j];
		}

	cout<<"\nFirst Diagonal Sum= "<<d1<<endl;
	cout<<"\nSecond Diagonal Sum= "<<d2<<endl;

	return 0;
}


/*------------------------------------------------------------------*/


inverse(){                                          // inverse of a matrix 3 by 3
  int mat[3][3], i, j;
	float determinant = 0;

	cout<<"Enter elements of matrix row wise:\n";
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
           cin>>mat[i][j];

	printf("\nGiven matrix is:");
	for(i = 0; i < 3; i++){
		cout<<"\n";

		for(j = 0; j < 3; j++)
			cout<<mat[i][j]<<"\t";
	}

	//finding determinant
	for(i = 0; i < 3; i++)
		determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));

	cout<<"\n\ndeterminant: "<<determinant;

	cout<<"\n\nInverse of matrix is: \n";
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			cout<<((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant<<"\t";

		cout<<"\n";
	}

}



/*------------------------------fun pattern functions-----------------------------------*/
int starglass(){                             //The Star hourglass

   int i, j, s, nos = 0;
   for (i = 9; i >= 1; (i = i - 2)) {
    for (s = nos; s >= 1; s--) {
     cout<<("  ");
    }
    for (j = 1; j <= i; j++) {
     if ((i % 2) != 0 && (j % 2) != 0) {
      cout<<'*';
     } else {
      cout<<"  ";
     }
    }
    cout<<endl;
    nos++;
   }
   nos = 3;
   for (i = 3; i <= 9; (i = i + 2)) {
  for (s = nos; s >= 1; s--) {
     cout<<"  ";
    }
    for (j = 1; j <= i; j++) {

     if ((i % 2) != 0 && (j % 2) != 0) {
      cout<<'*';
     } else {
      cout<<"  ";
     }
    }
    nos--;
    cout<<endl;
   }
   return 0;
  }



/*-------------------------------------------------------------*/



void pattern2()                             //The Hourglass
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
               { cout<<"1.Fun patterns\n2.Mathematical Problems\n3.Exit\n";
                 int x1;
                 cin>>x1;
                 if(x1==1){
                 printf("1.Half Pyramid using *  \n2.Half Pyramid a using Numbers\n3.Half pyramid using Alphabets\n4.Inverted Half Pyramid using *\n5.Inverted half pyramid using *\n6.Inverted half pyramid using numbers\n7.Full pyramid using *\n8.Pyramid Using numbers\n9.Inverted full pyramid using *\n10.Pascal's Triangle\n11.Floyd's Triangle\n12.Diamond in rectangle\n13.The Hourglass\n14.The Star hourglass\n15.Exit\n");
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
                   case 14: starglass();
                            break;
                 }
                 fflush(stdin);
                 printf("To continue press 1\nTo exit press 0.\n -  ");
               }
               else if(x1==2){
                 cout<<"1.Inverse of a matrix\n2.Sum of diagonals of matrix\n3.Largest and second largest number in a matrix"<<endl;
                 cout<<"Enter your choice: ";
                 cin>>choice;
                 switch(choice){
                   case 1: inverse();
                           break;
                   case 2: sumofd();
                           break;
                   case 3: landsl();
                           break;
                 }
                 fflush(stdin);
                 cout<<"To continue press 1\nTo exit press 0.\n - "<<endl;;
               }
               else if(x1==3)
                 break;
               else
                 continue;
                 scanf("%d",&option);
               }

               return 0;
           }
