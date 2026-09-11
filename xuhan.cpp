#include <iostream>
#include <cstring>
using namespace std;
#define pi 3.14159

class Shape{
public:
    virtual double area() const = 0;

    virtual ~Shape(){}
};

class Circle :public Shape{
public:
    Circle(double r): r_(r){

    }
    double area() const override {
        return pi*r_*r_;

    }
private:
    double r_;
};

class Rect :public Shape{
public:
    Rect(int h, int w) :h_(h),w_(w){

    }

    double area() const override {
        return h_ * w_;
    }
private:
    int h_;
    int w_;
};

void printarea(Shape& s){
    cout<<s.area()<<endl;
}

int main(){
    Circle a(3);
    Rect b(2,4);
    printarea(a);
    printarea(b);

    Shape *s = new Circle(4);
    cout<< s->area()<<endl;

    return 0;
}