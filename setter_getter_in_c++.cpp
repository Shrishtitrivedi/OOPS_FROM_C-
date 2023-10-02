#include<iostream>
using namespace std;
class exampleclass{

  private:
    int data;
  private:
     int getdata(){
        return data;
     }
     void setdata(int value){
        data=value;
     }
};
int main(){
    exampleclass obj;
    obj.setdata(8);
    int value=obj.getdata();
    cout<<value<<endl;
    return 0;
}