#include<iostream>
using namespace std;

class rectangle{
    private:
    int length=10;
    public:
    rectangle(){
        length=10;
    }
    protected:
    friend int print_rectangle(rectangle);
};
int print_rectangle(rectangle obj){
    obj.length += 10;
    return obj.length;
}
int main(){
    rectangle obj;
    cout<<print_rectangle(obj)<<endl;
    return 0;
}