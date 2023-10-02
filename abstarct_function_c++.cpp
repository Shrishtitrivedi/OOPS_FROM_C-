#include<iostream>
using namespace std;

class base{
  public:
    virtual void sh()=0;
    
};
class derived: public base{
  public:
   void sh(){
    cout<<"i am in derived class"<<endl;
   }
};
int main(){
    base *b;
    derived d;
     b = &d;
    b->sh();
    return 0;
}