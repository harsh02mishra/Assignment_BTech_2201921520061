#include <iostream>
#include <sstream>
using namespace std;

class Student{
    int age_stu;
    string first_name_stu;
    string last_name_stu;
    int standard_stu;
    
    // setter and getter functions for each element 
    public:
    
       void set_age(int age){
            age_stu=age;
       }
       int get_age(){
          return age_stu;
       }
       
       void set_first_name(string first_name){
            first_name_stu=first_name;
       }
       string get_first_name(){
          return first_name_stu;
       }
       
       void set_last_name(string last_name){
            last_name_stu=last_name;
       }
       string get_last_name(){
          return last_name_stu;
       }
       
        void set_standard(int standard){
            standard_stu=standard;
        }
        int get_standard(){
            return standard_stu;
        }
       
        // to_string() , fpr collecting all data in single line(string)
    string to_string(){
                
        string s1=std::to_string(age_stu);
        string s2=std::to_string(standard_stu);
       
        string all_value= s1 + ',' + first_name_stu +',' + last_name_stu + ',' + s2;
        return all_value;
    }   
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
