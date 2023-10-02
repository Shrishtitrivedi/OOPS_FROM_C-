// constructor
/*
        //default constructor
class class_name{
    public:
    int x;
    char y;
    class_name(){
        x=0;
        y='q';
    }
};
        //parametrized constructor
   class_name(int x1, char y1){
    x=x1;
    y=y1;
};
        //copy constructor
class_name(class_name &obj){
    x=obj.x;
    y=obj.y;
}
*/

#include<iostream>
using namespace std;

class smartphone{
     public:
     string model;
     int year_of_manufracture;
     smartphone(){
        model="unknown";
        year_of_manufracture=0;
     }
     smartphone(string mo,int yom){
        model=mo;
        year_of_manufracture=yom;
     }
     smartphone(smartphone &obj){
        model=obj.model;
        year_of_manufracture=obj.year_of_manufracture;
     }
     public:
     void print_detail(){
        cout<<model<<" "<<year_of_manufracture<<endl;
     }

};

int main(){
   smartphone unknown;
   smartphone redmi("redmi 11",2005);
   smartphone iphone(redmi);
    unknown.print_detail();
    redmi.print_detail();
    iphone.print_detail();
   return 0;

}