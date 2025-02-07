/*
@Techgig
https://www.techgig.com/practice/question/single-inheritance/aUM1dDg4NzE5WmZucnh6WHNoa3NEcnc0bS94NS84d3R6VjZ3ZjBrZ1VpekpQR20rS2Vpb2NNSlhlaGpvdWY4Vg==/1
*/
#include <iostream>
using namespace std;

class Parent{
	public:
		void whoAreYou(){
			cout<<"I am Parent"<<endl;
		}
};
class Child:public Parent{
	public:
		void whoAreYou(){
			cout<<"I am Child"<<endl;
		}
};
int main()
{
	
	Child obj;  //object of child class
	obj.Parent::whoAreYou();  //calling parent class function by child class object by scope resolution operator 
	obj.whoAreYou();     //calling child class function 
}