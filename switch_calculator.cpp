#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int valueOne,valueTwo,choice;
	char ch;
	cout<<"Enter first value:";
	cin>>valueOne;
	cout<<"Enter second value:";
	cin>>valueTwo;
	do
	{
	cout<<"enter your choice: \n";
	cout<<"1: Add\n2: Subtract\n3: Sin of valueOne\n4: Cos of valueTwo\n5: For the square root of valueOne\n6: To check the larger number\n7: For multiplication\n ";
	cin>>choice;
	cout<<"Result is: ";
	
	switch(choice)
	{
		case 1:
			cout<<valueOne+valueTwo;
			break;
	    case 2:
	    	cout<<valueOne-valueTwo;
	    	break;
	    case 3:
	    	cout<<sin(valueOne);
	    	break;
	    case 4:
	    	cout<<cos(valueTwo);
	    	break;
	    case 5:
	    	cout<<sqrt(valueOne);
	    	break;
	    case 6:
	    	cout<<max(valueOne,valueTwo);
	    	break;
	    case 7:
	    	cout<<valueOne*valueTwo;
	    	break;
	    default:
		cout<<"Invalid choice";
		break;
		}
cout<<"\npress Y or y to continue another to exit: ";
cin>>ch;
}
while(ch=='Y'||ch=='y');
return 0;
}
   
