/*
@Techgig
https://www.techgig.com/practice/question/area-and-perimeter/U3dnWUdOb0VHa1RGMlFBeWhIRWlqOE9QVjBSTkpzQ1dPYnFQanBBZW5xUVlNbWV0Rm53N0E3Zy9LSFF0N0JlTw==/1
*/
#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

class Shape{
	protected:
		int length,breadth;
		int sq_side;
		int radius;
		int d1,d2;

	public:
		void read_rectangle(){
			cin>>length>>breadth;
		}
		void read_square(){
			cin>>sq_side;
		}
		void read_circle(){
			cin>>radius;
		}
		void read_rhombus(){
			cin>>d1>>d2;
		}

};

class Area:public Shape{
	public:
		void area_rectangle(){
			cout<<length*breadth<<endl;
		}
		void area_square(){
			cout<<sq_side*sq_side<<endl;
		}
		void area_circle(){
			cout<<fixed << setprecision(2) <<3.14*radius*radius<<endl;
		}
		void area_rhombus(){
			cout<<fixed<<setprecision(2)<<(d1*d2)/2.0<<endl;
		}

};

class Perimeter:public Area{
	public:
		void perimeter_rectangle(){
			cout<<2*(length+breadth)<<' ';
		}
		void perimeter_square(){
			cout<<4*sq_side<<' ';
		}
		void perimeter_circle(){
			cout<<fixed << setprecision(2) <<2*3.14*radius<<' ';
		}
		void perimeter_rhombus(){
			cout<<fixed<<setprecision(2)<<2*sqrt(pow(d1,2)+pow(d2,2))<<' ';
		}

};

int main()
{
	int t;
	cin>>t;
	while(t--){
		// Area ar;
		Perimeter pm;

		pm.read_rectangle();
		pm.read_square();
		pm.read_circle();
		pm.read_rhombus();

		pm.perimeter_rectangle();
		pm.area_rectangle();

		pm.perimeter_square();
		pm.area_square();

		pm.perimeter_circle();
		pm.area_circle();

		pm.perimeter_rhombus();
		pm.area_rhombus();

	}
}
