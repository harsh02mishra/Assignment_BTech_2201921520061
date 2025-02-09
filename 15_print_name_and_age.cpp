#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

    string name;
    int age;
    public: 
        void setValue(){
            cin>>name;
            cin>>age;
        }
        void getValue(){
            cout<<"The name of the person is "<<name<<" and the age is "<<age<<'.';
        }
};

int main() {
    string name;
    cin>>name;
    int age;
    cin>>age;
    //Creating object of Person class
    Person person;
    person.setValue();   //Input of name and age
    
    person.getValue();   //print the output
    return 0;
}