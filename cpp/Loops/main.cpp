// #include <iostream>

// using namespace std;
// main()
// {
// 	// while loop    ?   Runs continuously until the condition becomes false
//    // do-while loop ?   Runs at least once and then depends on the user's input or condition
//    // for loop      ?   Used when the number of repetitions is known (limited repetition)
//     int start = 1 ; 
//     do
//     {
//         cout<< "\n Virtual University";
//         start++ ;
// 	}while(start <= 5);
	
// 	return 0 ;    
// }
// *****************************
// #include <iostream>

// using namespace std;
// main()
// {
//     char choice ; 
//     do
//     {
//     cout<< "\n Virtual University";
//     cout<< "\n Do You Want to Continue (Y , N) : ";
//     cin>>choice; 
// 	}while(choice == 'Y' || choice == 'y');

// 	return 0 ;    
// }
//  *******************************

// #include <iostream>

// using namespace std;

// main()
// {
// 	for(int i = 1 ; i <= 5 ; i++ )
// 	{
// 		cout<< "\n\n Man Antaa? ";
// 	}
// 	return 0 ;
// }

// ******************************************
// #include <iostream>

// using namespace std;

// main()
// {
// 	for(int i = 1 ; i <= 5 ; i++ )
// 	{
// 		cout<< "\n\n Man Antaa? ";
// 	}
// 	return 0 ;
// }
// ************************************
// #include <iostream>

// using namespace std;

// main()
// {
// 	for(int i = 1 ; i <= 10 ; i++ )
// 	{
// 		cout<< "\n 5 * "<<i<<"=" << 5*i;
// 	}
// 	return 0 ;
// }
// **********************************************
//Switch Statement 

// #include<iostream>

// using namespace std;

// main()
// {
// 	int number ;
// 	cout<<"Enter a number (1-7):";
// 	cin>>number;
// 	switch(number){
// 		case 1:
// 			cout<<"Monday";
// 			break;
// 		case 2:
// 			cout<<"\n Tuesday";
// 			break;
// 		case 3:
// 			cout<<"\n Wednesday";
// 			break;
// 		case 4:
// 			cout<<"Thursday";
// 			break;
// 		case 5:
// 			cout<<"Friday";
// 			break;
// 		case 6:
// 			cout<<"\n Saturday";
// 			break;
// 		case 7:
// 			cout<<"\n Sunday";
// 			break;
// 		default:
// 			cout<<"Invalid Number";							
// 	}
// 	return 0;
// }

// ************************************************
#include<iostream>

using namespace std;

main()
{
	int percentage, gradeCategory ;
	cout<<"Enter the percentage:"; 
	cin>>percentage;
	
	gradeCategory = percentage/10; 
	switch(gradeCategory)
	{
		case 10:
		case 9:
			cout<<"Grade A+" <<endl;
			break;
		case 8:
			cout<<"Grade A" <<endl;
			break;
		case 7:
			cout<<"Grade B" <<endl;
			break;
		case 6:
			cout<<"Grade C" <<endl;
			break;
		case 5:
			cout<<"Grade D" <<endl;
			break;						
		default:
			cout<<"Grade Failed"<<endl;		
	}
	return 0;	
}

// Problem 12
// Create a program that asks the user to input the traffic light color (Red, Yellow, Green) and displays a corresponding message. For example, if the user inputs "Red," the output should be "Stop."
// (UNSOLVED)

// Problem 13
// Create a simple calculator that takes two numbers and an operator (+, -, *, /) as input from the user and calculates the result accordingly, then displays the output.
// (UNSOLVED)