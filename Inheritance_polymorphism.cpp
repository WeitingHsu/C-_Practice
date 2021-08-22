# include <iostream> 
# include <string>
using namespace std;


class person{
    public:
        string name;
        int age;
        void setname(string iname){name = iname;};
        void setage(int iage){age = iage;}

};

class student : public person{
    public:
        int id;
        void setID(int iid){id = iid;}
        void introduce(){
            cout<<"hi I am "<<name<<" and my age is "<<age<<" years old "<<endl<<" and my student id is "<<id;
        }


};

int main(){

    student Weiting;
    Weiting.setname("Weitng");
    Weiting.setage(25);
    Weiting.setID(41682);
    Weiting.introduce();

    return 0;
}