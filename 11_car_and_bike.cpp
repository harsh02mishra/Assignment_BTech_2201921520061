/*
@Techgig
https://www.techgig.com/practice/question/cars-and-bikes/SnliNi9DWVRvdnZIR3ZOTnZKK0hNWmVwekFGUloyZEp4K0dNUnB6alhDUVI2UTRPNFFmSVh4WDNXcUhVbFhYUA==/1
*/

#include <iostream>
using namespace std;

class Vehicle{
	public:
		void display(){
			cout<<"This is a Vehicle"<<endl;
		}
};

class Car:public Vehicle{
	public:
		void display(){
			cout<<"This is a Bike"<<endl;
		}
};

class Bike:public Vehicle{
	public:
		void display(){
			cout<<"This is a Car"<<endl;
		}
};

int main()
{
	int n;  //number of tyres
	cin>>n;

	if(n==2){
		Car obj1;	//object Car class
		obj1.display();
	}
	else if(n==4){
		Bike obj2;	//object of Bike class
		obj2.display();
	}

	else{
		Vehicle obj;   //object of Vehicle class
		obj.display();
	}
}

/*In the given problem Car class have "This is a Bike " 
and Bike class have "This is a Car";*/