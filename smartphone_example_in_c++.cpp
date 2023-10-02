#include<iostream>
using namespace std;

class smartphones{
    private:
      int year_of_manufracture;
      string model_name;
      public:
    smartphones(int yom , string mn){
        year_of_manufracture=yom;
        model_name=mn;
    }
    void print_detail(){
        cout<<year_of_manufracture<<endl;
        cout<<model_name<<endl;
    }
};
int main(){

    smartphones redmi(2010,"redmi");
    cout<<"redmi details"<<endl;
    redmi.print_detail();


    smartphones iphone(2005,"iphones11");
    cout<<"iphone 11"<<endl;
    iphone.print_detail();
    return 0;
}