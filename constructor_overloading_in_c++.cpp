#include<iostream>
using namespace std;

class smartphone{
   private:
  int year_of_manufracture;
  string model;
  int expire;
   public:
  smartphone(){
    year_of_manufracture=0;
    model="unknown";
  }
  smartphone(int year,string mol){
    year_of_manufracture=year;
    model=mol;
  }
  smartphone(int year,int expie,string mol){
    year_of_manufracture=year;
    expire=expie;
    model=mol;
  }
  void print_detail(){
    cout<<year_of_manufracture<<" "<<model<<" "<<expire<<endl;
  }

};


int main(){
    smartphone unknown;
    smartphone redmi(2010,"redmi 11");
    smartphone iphone(2000,2060,"iphone11");
   unknown.print_detail();
   redmi.print_detail();
   iphone.print_detail();
   return 0;
}