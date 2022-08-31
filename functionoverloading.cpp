#include<iostream>
using namespace std;
void condition(int a,int b);
void condition(int a,int b,int c);
int main(){
	cout<<"we will check first condition here...and find the sum ";
	condition(10,20);
	cout<<"\nFirst condition is checked now we will check second condition\n ";
	condition(3,4,7);
}
void condition(int a,int b)
{
	if(a<b)
	cout<<a+b;
}
void condition(int a,int b,int c)
{
	if(a||b<c)
	cout<<"Both conditions are true...";
}
