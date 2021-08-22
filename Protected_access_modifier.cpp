# include <iostream> 
# include <string>
using namespace std;

// For prectected part in class, its children can access it 
// For protected part, any other class outside of this class cannot read it except for its children
// Besides, you cannot read it from main function due to inside protected part

// public can be accessed by same class, derived class(inheritance), and outside class(User use class)
// protected can be accessed by the same class, derived class(inheritance), and outside class(User use class)
// private can only be accessed by the private class.

class person{

    protected:
        string name;
    public:
        void setName(string iname){
            name = iname;
        }


};

// public inheritance
class student:public person{
    public:
        void display(){
            cout<<name<<endl;
        }
        void setStudentname(string iname){
            setName(iname);
        }
};






int main(){

    person Weiting;
    // cannot access name due to name inside protected part

    student Willy;
    Willy.setName("Willy");
    Willy.display();

    Willy.setStudentname("Will");
    Willy.display();


    return 0;
}   