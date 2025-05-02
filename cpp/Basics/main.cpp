// Command For Run (Ctrl + Alt + N)
// Command For Compile (g++ (file name) -o main ->output file name (g++ main.cpp -o main)) 
// Command For Run(file name.exe)
// Agr Code Runner mein input nahi ho raha tu Manually terminal mein compile aur run karo


// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hey! You're running C++ in VS Code!" << endl;
//     return 0;
// }

// *******************************************************
// #include <iostream>
// #include <conio.h> // Required for getch()

// using namespace std;

// main()
// {
//     int a;
//     cout << "Please Enter 4 Digit Number: ";
//     cin >> a;

//     cout << "\n 4 Digits are: ";
//     cout << a % 10 << ", ";
//     a = a / 10;
//     cout << a % 10 << ", ";
//     a = a / 10;
//     cout << a % 10 << ", ";
//     a = a / 10;
//     cout << a % 10;

//     getch(); 
//     return 0;
// }

// ************************************************************
// if and if/else 
#include <iostream>

using namespace std;

int main()
{
	int hours;
	int fee = 0;
	
	cout<<"Enter the total numbers of hours spent at the gym:";
	cin>>hours;
	
	if(hours<=0)
	{
		cout<<"Invalid input!. Hours must be a positive integer." << endl;
	}else{
		if(hours == 1){
			fee = 0;
		}else{
			fee = (hours - 1)*200;
		}
		cout<<"Total fee is Rs."<< fee << endl;
	}
	
	return 0;
}