#include<iostream>
using namespace std;

class person{
    public:
        person(){
            cout<<"Constructor of the person class called"<<endl;
        }
        ~person(){
            cout<<"Destructor of the person class called"<<endl;
        }
};

class student:public person{
    public:
        student(){
            cout<<"constructor of the person class called"<<endl;
        }

        ~student(){
            cout<<"destructor of the person class called"<<endl;
        }

};


int main(){

    student Weiting;
    return 0;
}