#include <iostream>
#include <cstring>
using namespace std;

struct A{
    A(){
        cout<<"A"<<endl;
    }
    ~A(){
        cout<<"~A"<<endl;
    }
};

int main(){
    A a1;
    A* a2 = new A;
    delete a2;


    return 0;
}
