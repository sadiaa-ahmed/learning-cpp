// #include<iostream>

// using namespace std;

// main()
// {
//     int a[5];   // 5-element integer array

//     //1st for loop – taking input from user
//     for(int i=0; i<=4; i++)
//     {
//         cout<<"\n Enter value of Index " <<i<<":" ;
//         cin>>a[i];
//     }
    
//     // 2nd for loop – displaying stored values
//     for(int i=0; i<=4; i++)
//     {
//         cout<<"\n Index of "<< i <<" : "<<a[i];
//     }
//     return 0 ;
// }

// --------------------------------------------------------------------------------------

// #include<iostream>

// using namespace std ;

// main()
// {
//     string array[5] = {"ALi","maha", "khan","saad","Akbar"};
//     for(int i=0; i<=4; i++)
//     {
//         cout<<"\n " <<array[i];
//     }
// }

// -----------------------------------------------------------------------
/* Write a program which reads positive integers from the user and 
stores these ones in an array. User can enter a maximum of 100 
numbers. Stop taking input when user enters -1. */

// #include<iostream>

// using namespace std;

// main()
// {
//     int a[10] , z, i=0;
//     do
//     {
//         cout<<"\n Enter Number :";
//         cin>>z;
//         if(z != -1)
//         {
//             a[i] =z;
//         }
//         i++;
//     } while (z != -1 && i < 10);
//     for(int k=0; k<i ; k++)
//     {
//         cout<<" "<< a[k];
//     }
//     return 0;
    
// }

// --------------------------------------------------------------------------

/* Copying Array */

// #include<iostream>

// using namespace std;

// main()
// {
//     int a[5],b[5];
//     for(int i=0; i<=4; i++)
//     {
//         a[i] = i+1;
//         b[i]= a[i];
//     }
//     b[0] = a[0];
//     cout<<"\n"<<a[0]<<" "<<b[0];
//     return 0;
// }

/* Take the sum of squares of 10 different numbers stored in an array.  (UNSOLVED) */ 

// Another Example (Linear Search):

// #include<iostream>

// using namespace std;

// main()
// {
//     int a[5] ={10 , 30 , 20 , 40, 50};
//     int search, found = 0;
//     cout<<"\n Enter Search Value :" ;
//     cin>>search;
//     for(int i=0;i<=4;i++)
//     {
//         if(search == a[i])
//         {
//             found++;
//             break;
//         }
//     }
//     if (found == 0)
//     {
//         cout<<"\n Value Can't Found";
//     }
//     else
//     {
//         cout<<"\n Value if Found ";
//     }
//     return 0;
// }

// This program is used to find a number from the array. 

// #include <iostream> 

// using namespace std;

// main() 
// { 
//     int z, i ; 
//     int a [ 100 ] ; 
//     // Initializing the array. 
//     for ( i =0 ; i < 100 ; i ++ ) 
//     { 
//         a [ i ] = i ; 
//     } 
//     cout << "\n Please enter a positive integer " ; 
//     cin >> z ; 
//     int found = 0 ; 
//     // loop to search the number. 
//     for ( i = 0 ; i < 100 ; i ++ ) 
//     { 
//         if ( z == a [ i ] ) 
//         { 
//             found = 1 ;
//             break ; 
//         } 
//     } 
//     if ( found == 1 ) 
//     {
//         cout << "\n We found the integer at index"<< i ; 
//     }
//     else 
//     {
//         cout << "\n The number was not found" ; 
//     }
//     return 0;
// }

/* Character Array*/

// #include <iostream> 

// using namespace std;

// main()
// {
//     char array[5] = {'k', 's','e', 't', 'r'};
//     char array[5] = "IBRHIM";
//     cout<<array;
//     return 0;
// }

/* Arrays Comparision */

/* Sorting */
// #include <iostream> 

// using namespace std;

// main()
// {
//     int a[5] = {15,2,7,4,1};
//     for(int i=0;i<=4;i++)
//     {
//         for(int j=0; j<=4 ; j++)
//         {
//             if(a[j] > a[j+1])
//             {
//                 a[j] = a[j]+a[j+1];
//                 a[j+1] = a[j] - a[j+1];
//                 a[j] = a[j] - a[j+1];
//             }
//         }
//     }
//     for(int i=0;i<=4;i++)
//     {
//         cout<<" "<<a[i];
//     }
// }

/* Short Version of Sorting */

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5] = {15, 2, 7, 4, 1};

//     for(int i = 0; i < 4; i++) // 4 passes
//     {
//         for(int j = 0; j < 4 - i; j++) // reduce comparisons each time
//         {
//             if(a[j] > a[j + 1])
//             {
//                 // swap using temp variable
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }

//     for(int i = 0; i < 5; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }
