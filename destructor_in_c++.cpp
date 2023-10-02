#include<iostream>
using namespace std;

class guided_path{
    public:
    guided_path(){
        cout<<"constructor is called"<<endl;
        cout<<"welcome to guided path"<<endl;
    }
    ~guided_path(){
        cout<<"happy learning"<<endl;
        cout<<"destructor is calles"<<endl;
    }
};
int main(){
    guided_path student;
   
}