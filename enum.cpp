#include<iostream>
using namespace std;
enum dow{sat,sun,mon,tue,wed,thu,fri};
int main(){
	dow a,b;
	a=mon;
	b=thu;
	int diff=b-a;
		cout<<"the difference between days is: "<<diff<<endl;
		if(a<b)
		cout<<"monday comes first";
}
