#include<iostream>
using namespace std;

class Animal{
    public:
     bool live_in_ground;
     bool live_in_water;
     bool live_in_wings;
     bool gives_birth;
     bool lay_egg;
};

int main(){
    Animal mammal;
    mammal.gives_birth=true;
    mammal.lay_egg=false;
    mammal.live_in_ground=true;
    mammal.live_in_water=false;
    mammal.live_in_wings=false;

    Animal bird;
    bird.gives_birth=true;
    bird.lay_egg=true;
    bird.live_in_ground=true;
    bird.live_in_wings=true;
    bird.live_in_water=false;


    cout<<mammal.gives_birth<<endl;
    return 0;

}