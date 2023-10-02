#include<iostream>
using namespace std;

class student{
 private:
   int student_rollno;
   string student_name;
   int student_age;
public:
   int getstudent_rollno(){
    return student_rollno;
   }
   void setstudent_rollno(int value){
    student_rollno=value;
   }
   int getstudent_age(){
    return student_age;
   }
   void setstudent_age(int value){
    student_age=value;
   }
    string getstudent_name(){
    return student_name;
   }
   void setstudent_name(string value){
    student_name=value;
   }
};

int main(){
    student obj1;
    obj1.setstudent_age(20);
    obj1.setstudent_rollno(234);
    obj1.setstudent_name("Kittu");
    cout<<obj1.getstudent_age()<<" "<<obj1.getstudent_name()<<" "<<obj1.getstudent_rollno();
    return 0;
}