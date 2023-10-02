#include<iostream>
using namespace std;

class print{
private:
int a,b;
public:
void set(int x,int y){
    a=x;
    b=y;
}
void display(){
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}
};

int main(){
    print object;
    object.set(4,5);
    object.display();
    return 0;
}