/*
@Techgig
https://www.techgig.com/practice/question/report-card/dE5GOVBWSithQlNtVkFXcW9rbDIzSVphdXRGcFFreUxEengvL2dNYXRWdnVDWVRWdzlNNks1Rms5KzRnRG5qRg==/1
*/

#include <iostream>
#include <iomanip>
using namespace std;

//Student class have a read() function which will read the name of the student and marks of 5 subjects.
class Student{
protected:
    string name;
    int marks[5];
    char grade_stu;

public:
    void read(){
        cin >> name;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    //input of grade
    void read_grade(){
        cin >> grade_stu;
    }
};

// defining Percentage class derived from Student class 
class Percentage : virtual public Student{
    float sum = 0;
public:
    float percentage(){

        for (int i = 0; i < 5; i++){
            sum += marks[i];
        }

        sum = (sum / 500.0f) * 100.0f;
        return sum;
    }
};

//Grade class return th grade of student
class Grade : virtual public Student{
public:
    char grade(){
        return grade_stu;
    }
};
//Report class print the output
class Report : public Percentage, public Grade{
public:
    void display(){
        cout << name << endl;

        for (int i = 0; i < 5; i++){
            cout << marks[i] << ' ';
        }
        cout << endl;

        cout << fixed << setprecision(2) << percentage() << "% " << grade() << endl;
    }
};

int main(){
    int t;                     //t--> no. of test case
    cin >> t;

    while (t--){
        Report obj;           //creating object of Report class

        obj.read();           //Calling read() to read data from user
        obj.read_grade();     //Calling read_grade() using obj of Report class to read grade

        obj.display();        // calling to print the output 
    }
}