//#include<iostream>

//return_type function_name(argu);
//void Test(int a);    (function Decleration)
//void Test(int a)   (fnction definition) 
//{
//	Code here 
//}

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

// ****************************************************************************************

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


//*******************************************************************************************

// #include<iostream>

// using namespace std;

// void Pow()
// {
// 	int number , limit ;
// 	int result = 1;
// 	cout<<"\n Enter a Number : ";
// 	cin>>number;
// 	cout<<"\n Power Limit : ";
// 	cin>>limit;
// 	for(int i=1 ; i<=limit ; i++)
// 	{
// //		result = result*number;
//         result *= number;
// 	}
// 	cout<<"\n Result is :"<<result;
// }
// main()
// {
// 	Pow();
// 	return 0;
// }

//Find the area of circle.

// #include<iostream>

// using namespace std;

// void Area()
// {
//     float radius , area;
// 	const float PI = 3.142;

// 	cout<<"\nEnter Radius:";
// 	cin>>radius;

// 	area = PI * radius * radius;
// 	cout<<"The Area of Circle "<< area <<endl;
// }
// int main() {
//     Area();
//     return 0;
// }

// ******************************************************************

// #include<iostream>

// using namespace std;

// void Test(int a, char b, string c)
// {
// 	cout<<"\n : "<<a<<" "<<b<<" "<<c;
// }
// main()
// {
// 	// Test();  //Simple calling
// 	// Test(10, 'k' , "Sadia");     //Call By Value
// 	return 0;
// }

// -----------------------------------------------------------------------------------

// #include<iostream>

// using namespace std;

// void Test(int i, char d, string e)
// {
// 	cout<<"\n : "<<i<<" "<<d<<" "<<e;
// }
// main()
// {
// 	// Call by Variable
// 	int i = 14;
// 	char d = 'S';
// 	string e = "Ssssssss";
// 	Test(i , d, e);
// 	return 0;
// }

// ----------------------------------------------------------------------------------

// #include<iostream>

// using namespace std;

// void Test(int &i, char &d, string &e)
// {
// 	cout<<"\n : "<<i<<" "<<d<<" "<<e;
// }
// main()
// {
// 	// Call by Reference 
// 	// is main direct values nahi jayengi balky oper address jayengy ........ inn address sy values ko hasil kerna asan hota hai

// 	int i = 14;
// 	char d = 'S';
// 	string e = "Ssssssss";
// 	Test(i , d, e);
// 	return 0;
// }

// ------------------------------------------------------------------------------------

// #include<iostream>

// using namespace std;

// // void Test(int a, int b)
// int Test(int a, int b)
// {
// 	int sum = 0 ;
// 	sum = a + b;
// 	// cout<<"\n Sum is :" << sum; 
// 	return sum;
// }
// main()
// {
// 	int a = 10, b = 20 , z = 0;
// 	z= Test(a,b);
// 	cout<<"\n Sum is :" << z ; 
// 	return 0 ;
// }

// -------------------------------------------------------------------------------
#include<iostream>

using namespace std;

// void Test(int a, int b)
int Test(int a, int b)
{
	int sum = 0 ;
	sum = a + b;
	return sum;
}
main()
{
	int a = 10, b = 20;
	cout<<"\n Sum is :" << Test(a,b) ; 
	return 0 ;
}