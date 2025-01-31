#include <iostream>
using namespace std;

// Define BATSMAN class
class BATSMAN{
	public:
		void bat(){
			cout<<"I am Batsman\n";
		}
};

// Define BOWLER class
class BOWLER{
	public:
		void bowl(){
			cout<<"I am Bowler\n";
		}
};

// Define ALLROUNDER inherit BATSMAN and BOWLER
class ALLROUNDER:public BATSMAN,public BOWLER{
	public:
		void both(){
			cout<<"I am Batsman and Bowler\n";
		}
};


int main()
{
	//creating object of ALLROUNDER class
	ALLROUNDER obj;

    // calling bat() function of BATSMAN class by object of ALLROUNDER class
	obj.bat();

    // calling bowl() function of BOWLER class by object of ALLROUNDER class
	obj.bowl();

    // calling both() function by ALLROUNDER class object
	obj.both();
}