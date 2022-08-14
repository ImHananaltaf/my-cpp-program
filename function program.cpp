#include<iostream>
#include<math.h>
using namespace std;
void Add();
void Sub();
void Mul();
void SquareRoot();
int a,b;
int main(){
	int choice;
	cout<<"Enter value one\n";
	cin>>a;
	cout<<"enter value two\n";
	cin>>b;
	cout<<"press 1 for add\npress 2 for subtract\npress 3 for multiplication\npress 4 for squareRoot \n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			Add();
			break;
		case 2:
			 Sub();
			 break;
	    case 3:
	    	Mul();
	    	break;
	    case 4:
	    	SquareRoot();
	    	break;
	    default :
	    	cout<<"invalid choice\n";
	    	break;
	}
}
void Add()
{
	cout<<a+b;
}
void Sub()
{
	cout<<a-b;
}
void Mul()
{
	cout<<a*b;
}
void SquareRoot()
{
	cout<<sqrt(a);
}
