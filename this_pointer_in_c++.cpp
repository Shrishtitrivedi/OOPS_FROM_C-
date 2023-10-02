#include<iostream>
using namespace std;

class mobile{
    public:
    string model;
    int year_of_manufracture;
    void set_detail(string model,int year_of_manufracture){
        this->model=model;
        this->year_of_manufracture=year_of_manufracture;
    }
    void print_detail(){
        cout<<model<<endl;
        cout<<year_of_manufracture<<endl;
    }
};

int main(){
    mobile redmi;
    redmi.set_detail("redmi",2020);
    redmi.print_detail();
    return 0;
}