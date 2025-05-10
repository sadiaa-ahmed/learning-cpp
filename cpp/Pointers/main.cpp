/* Pointers */

// pointers are a special type of variables in which a memory address is stored. they contain a memory address, not the value of the variable.

#include<iostream>

using namespace std;

main()
{
    int *ptr;
    int x = 10;
    ptr = &x;
    // print kerny k method pointer main 
    // *ptr Value of the x
    // ptr Address of the x
    // &ptr Address of the pointer
    cout<<"\n Value of x:"<<*ptr;
    cout<<"\n Address of x:"<<ptr;
    cout<<"\n Address of pointer:"<<&ptr;
    return 0;
}