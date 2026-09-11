#include <iostream>
#include <cstring>
using namespace std;


class DeepCopy{
public:
    DeepCopy() : data_(new int[10]){

    }

    void show(){
        cout<<data_[1]<<endl;
    }

    DeepCopy(const DeepCopy& other){
        data_ = new int[10];
        for(int i = 0; i<10; i++){
            data_[i] = other.data_[i];
        }

    }

    DeepCopy& operator=(const DeepCopy& other){
        if(this == &other) {return *this;}
        delete[] data_;
        data_ = new int[10];
        for(int i = 0; i<10; i++){
            data_[i] = other.data_[i];
        }
        return *this;
    }

    ~DeepCopy(){delete[] data_;}

private:
    int *data_;

};

int main(){
    DeepCopy d;
    DeepCopy C = d;
    DeepCopy a(d);
    d.show();
    C.show();
    a.show();
    return 0;
}