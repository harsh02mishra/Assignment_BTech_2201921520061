/*
@Techgig
https://www.techgig.com/practice/question/multilevel-inheritance/VTVEVUFGYzV1djFNR0sxZjZnVzd1dFF0c0ljWXZaQkRLU3lKRHlDRHRickdLOFRhSWQ2V2hwNDhYODZnaHJtUQ==/1
*/
#include <iostream>
using namespace std;

class A{
	public:
		void display(){
			cout<<"I am GrandParent"<<endl;
		}
};

class B:public A{
	public:
		void display(){
			cout<<"I am Parent"<<endl;
		}
		void view(){
			cout<<"I am Derived from Class A"<<endl;
		}
};

class C:public B{
	public:
		void display(){
			cout<<"I am Child"<<endl;
		}
		void view(){
			cout<<"I am Derived from Class B"<<endl;
		}
};

int main()
{
	C obj;
	obj.display();
	obj.view();

	obj.B::display();
	obj.B::view();

	obj.A::display();
}