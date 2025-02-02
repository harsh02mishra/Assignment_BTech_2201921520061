#include <iostream>
using namespace std;
class A{
	protected:	
		int x,y;
	public:
		void read(){
			cin>>x>>y;
		}
};

class B{
	protected:
	   string s;
	public:
		void read(){
			cin>>s;
		}
};

class C:public A,public B{
	public:
		void sum(){
			int sum=x+y;

			cout<<sum<<endl<<s<<' '<<x<<' '<<y<<endl;
		}
};

int main(){
	int t;
	cin>>t;

	while(t--){
		C obj;

		obj.A::read();
		obj.B::read();
		obj.sum();

	}
}