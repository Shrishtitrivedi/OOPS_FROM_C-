#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {
     string name;
     int age;
    // Complete the class
    public:
    void SetValue(int value,string v){
        cout<<value<<endl;
        age=value;
        name=v;
    }
    void GetValue(){
        cout<<"The name of the person is "<<name<<"and the age is"<<age<<".";
    }
};

int main() {
    Person object;
    int lambe;
    string naam;
    cin>>lambe;
    cin>>naam;
    //Write your code here
    object.SetValue(lambe,naam);
     object.GetValue();
    return 0;
}