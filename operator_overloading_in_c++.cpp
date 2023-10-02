#include<iostream>
using namespace std;

class complex{
    private:
       int real,img;
    public:
    complex(int r,int i){
        real=r;
        img=i;
    }
    complex operator + (complex &b){
        complex a;
        a.real=real+b.real;
        a.img=img+b.img;
        return a;
    }

   void print(){
    cout<<real<<"+ i"<<img<<endl;
   }

};
int main(){
    complex c1(10,5) , c2(2,4);
    complex c3=c1+c2;
    c3.print();
    c1.print();
    
    return 0;
}