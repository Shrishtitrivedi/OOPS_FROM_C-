#include<iostream>
using namespace std;

class base{
  public:
    void show(){
        cout<<"i am in base class"<<endl;
    }
};
class derived: public base{
  public:
   void show(){
    cout<<"i am in derived class"<<endl;
   }
};
int main(){
    derived d;
    base* bas1 = &d;
    bas1->show();
    return 0;
}