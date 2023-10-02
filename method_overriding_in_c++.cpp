#include<iostream>
using namespace std;

class parent{
    public:
    void show(){
        cout<<"inside parent class"<<endl;
    }
};
class subclass1: public parent{
    public:
    void show(){
        cout<<"inside subclass1"<<endl;
    }
};
int main(){
    subclass1 obj;
    obj.show();
    return 0;
}