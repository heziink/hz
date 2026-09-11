#include <iostream>
#include <cstring>
using namespace std;

class Animal{
public:
    Animal(){}

    Animal(const int leg) :leg_(leg){

    }
    void eat(){
        cout<<"chi"<<endl;
    };

    virtual void draw(){
        cout<<"draw::Animal"<<endl;
    }

protected:
    int leg_;
};

class dog: public Animal{
public:
    dog(int x, int y): Animal(x),ear_(y){}

    void eat(){
        cout<<"wang"<<endl;
    }

    void  draw() override {
        cout<<"draw::dog"<<endl;
    }

    void bark(){cout<<"www"<<endl;}

    void show_leg(){
        cout<<leg_<<endl;
    }

    void show_ear(){
        cout<<ear_<<endl;
    }
private:
    int ear_;
};

int main(){
    dog a(4,2);
    Animal* b = &a;
    
    a.bark();
    a.eat();
    a.show_ear();
    a.show_leg();
    a.draw();
    b->draw();
    return 0;
}