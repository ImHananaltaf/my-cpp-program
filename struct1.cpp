#include<iostream>
using namespace std;
struct bushra
{
	int abc;
};
struct hanan
{
	int size;
	int inches;
    bushra a;
	
};
int main(){
   hanan len;
   len.size=10;
   len.inches=20;
   len.a.abc=30;
   cout<<len.size+len.a.abc;
}
