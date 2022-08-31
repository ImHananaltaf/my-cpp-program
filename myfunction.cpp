#include<iostream>
using namespace std;
void myFun(int a,int b);
void myFun(int a,int b,int c);
int main(){
	cout<<"The subtraction of values is: ";
	myFun(15,6);
	cout<<"\nThe sum is: ";
	myFun(20,10,4);
	cout<<"\nThe program is finished...Thank you";
}
void myFun(int a,int b){
	cout<<a-b;
}
void myFun(int a,int b,int c){
	cout<<a+b+c;
}
