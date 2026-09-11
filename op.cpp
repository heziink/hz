#include <iostream>
#include <cstring>
using namespace std;

class Student{
public:
    Student(string name, double score): name_(name),score_(score){
        cout << name_ << " 构造" << endl;

    }

    void print() const {cout << name_ << " 1" << endl;cout << score_ << " 2" << endl;}
    void getScore(){
        cout << score_ <<endl;
    }
    ~Student(){

    }


private:
    string name_;
    double score_;

};

int main(){
    Student a("hezi",95.3);
    a.getScore();

    return 0;
}