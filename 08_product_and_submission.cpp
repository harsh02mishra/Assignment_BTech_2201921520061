/* 
@Techgig

*/
#include <iostream>
using namespace std;

class Base{
	protected:
		int num1,num2;
        int num3,num4;

	public:
		void input(){
			cin>>num1>>num2;
            cin>>num3>>num4;
		}	
};

class Summation :virtual public Base{
public:
    int getSum() {
        return num1+num2;
    }
};

class Product :virtual public Base {
public:
    long long getProduct() {
        return 1LL*num3*num4;
    }
};

class Child : public Summation, public Product {
public:
    void display(){
        cout<<num1<<" "<<num2<<endl;
        cout << getSum()<<endl;
    
        cout<<num3<<' '<<num4<<endl;
        cout << getProduct()<<endl;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--){
		Child obj;

		obj.input();
        obj.display();    
	}
}
