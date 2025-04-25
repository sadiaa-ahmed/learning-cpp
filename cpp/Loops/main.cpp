#include <iostream>

using namespace std;
main()
{
	// while loop    ?   Runs continuously until the condition becomes false
   // do-while loop ?   Runs at least once and then depends on the user's input or condition
   // for loop      ?   Used when the number of repetitions is known (limited repetition)
    int start = 1 ; 
    do
    {
        cout<< "\n Virtual University";
        start++ ;
	}while(start <= 5);
	
	return 0 ;    
}
// *****************************
#include <iostream>

using namespace std;
main()
{
    char choice ; 
    do
    {
    cout<< "\n Virtual University";
    cout<< "\n Do You Want to Continue (Y , N) : ";
    cin>>choice; 
	}while(choice == 'Y' || choice == 'y');

	return 0 ;    
}
//  *******************************

#include <iostream>

using namespace std;

main()
{
	for(int i = 1 ; i <= 5 ; i++ )
	{
		cout<< "\n\n Man Antaa? ";
	}
	return 0 ;
}

// ******************************************
#include <iostream>

using namespace std;

main()
{
	for(int i = 1 ; i <= 5 ; i++ )
	{
		cout<< "\n\n Man Antaa? ";
	}
	return 0 ;
}
// ************************************
#include <iostream>

using namespace std;

main()
{
	for(int i = 1 ; i <= 10 ; i++ )
	{
		cout<< "\n 5 * "<<i<<"=" << 5*i;
	}
	return 0 ;
}


