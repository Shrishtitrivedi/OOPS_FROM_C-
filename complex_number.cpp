#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
int real;
int img;
public:
ComplexNumbers(int r,int v){
    real=r;
    img=v;
}
void plus(ComplexNumbers &b){
    cout<<real<<endl;
    real=real+b.real;
    img=img+b.img;
}
void  multiply(ComplexNumbers &b){
   int real1=real*b.real-img*b.img;
   int img1=img*b.real+real*b.img;
   real=real1;
   img=img1;
}
void print(){
    cout<<real<<" "<<"+"<<" "<<"i"<<img<<endl;
}
};

int main() {
    int real1, imaginary1, real2, imaginary2;


    ComplexNumbers c1(3,4);
    ComplexNumbers c2(4,51);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c2.plus(c2);
        c2.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}