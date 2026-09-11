#include <iostream>
#include <cstring>
using namespace std;

class Student{
public:


    Student():name_("Hezi"){
        age = 18;
    };

    Student(double score){
        this->score = score;
    }

    void print() const{
        cout<<name_<<endl;
        cout<<age<<endl;
        cout<<score<<endl;
    };

    ~Student(){

    };

private:
    const string name_;
    int age;
    double score;
};

int main(){
    Student s1(98);
    s1.print();
    const Student s2;
    s2.print();


    return 0;
}