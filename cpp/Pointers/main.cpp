/* Pointers */

// pointers are a special type of variables in which a memory address is stored. they contain a memory address, not the value of the variable.

// #include<iostream>

// using namespace std;

// main()
// {
//     int *ptr;
//     int x = 10;
//     ptr = &x;
//     // print kerny k method pointer main 
        // *ptr Value of the x
        // ptr Address of the x
        // &ptr Address of the pointer
//     cout<<"\n Value of x:"<<*ptr;
//     cout<<"\n Address of x:"<<ptr;
//     cout<<"\n Address of pointer:"<<&ptr;
//     return 0;
// }

/* constant pointer */

// #include<iostream>

// using namespace std;

// main()
// {
//     int x = 10 , y=20;
//     int *const ptr = &x;
//     ptr = &y;
//     return 0;
// }

/*Swapping (2 numbrs ko interchange kernaa)*/

// #include<iostream>

// using namespace std;

// main()
// {
//     int x = 10 , y=20;
//     int *ptr1 ,*ptr2;
//     ptr1 = &x;
//     ptr2 = &y;
//     *ptr1 = *ptr1 + *ptr2;   //ptr1 = 30 
//     *ptr2 = *ptr1 - *ptr2;   //ptr2 = 10
//     *ptr1 = *ptr1 - *ptr2;   //ptr1 = 20
//     cout<<"\n Value of x:"<<*ptr1;
//     cout<<"\n Value of x:"<<*ptr2;
//     return 0;
// }

// Example:

#include<iostream>
using namespace std;
void convert(char *str)
{
    while(*str != '\0')
    {
        if(islower(*str))
        {
            *str = toupper(*str);
        }
        str++;
    }
}
main()
{
    char str[30] = "Pakistan Zindahbaad";
    convert(str);
    cout<<"\n " << str;
    return 0;
}


