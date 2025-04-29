//Problem 14
//#include<iostream>

//return_type function_name(argu);
//void Test(int a);    (function Decleration)

//****************************
//void Test(int a)   (fnction definition) 
//{
//	Code here 
//}
//********************************
//using namespace std;
//
//void Sum()
//{
//	int a,b;
//	cout<< "\n Enter 1st Value: ";
//	cin>>a ;
//	cout<<"\n Enter 2nd value : ";
//	cin>>b;
////	a = a+b ;
//	cout<<"\n Sum is:"<<a+b;
//}
//main()
//{
//	Sum();
//	return 0;
//}

//Problem 15
//Calculate the square of a given number :

//#include<iostream>
//
//using namespace std;
//
//void Sqr()
//{
//	int number ;
//	cout<<"\n Enter a Number : ";
//	cin>>number;
//	cout<<"\n Square is :"<<number*number;
//}
//main()
//{
//	Sqr();
//	return 0;
//}


//Problem 16

#include<iostream>

using namespace std;

void Pow()
{
	int number , limit ;
	int result = 1;
	cout<<"\n Enter a Number : ";
	cin>>number;
	cout<<"\n Power Limit : ";
	cin>>limit;
	for(int i=1 ; i<=limit ; i++)
	{
//		result = result*number;
        result *= number;
	}
	cout<<"\n Result is :"<<result;
}
main()
{
	Pow();
	return 0;
}

//Problem 17
//Find the area of circle.

