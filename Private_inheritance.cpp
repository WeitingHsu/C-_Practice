# include <iostream> 
# include <string>
using namespace std;

// For prectected part in class, its children can access it 
// For protected part, any other class outside of this class cannot read it except for its children
// Besides, you cannot read it from main function due to inside protected part

// public can be accessed by same class, derived class(inheritance), and outside class(User use class)
// protected can be accessed by the same class, derived class(inheritance), and outside class(User use class)
// private can only be accessed by the private class.


// This example will show what's the difference between public inheritance and private inheritance

class person{

    protected:
        string name;
    public:
        void setName(string iname){
            name = iname;
        }


};

// private inheritance
// protected and public inherited from base class will be private in child class
// All methods and arguments inherited from base class will be private.
class student:private person{

    public:
        // create special access through person even if person inheritance is private 
        // access handler using plus :: (change level of access)
        using person::name;

        void display(){
            cout<<name<<endl;
        }
        void setStudentname(string iname){
            setName(iname);
        }
};

// Gstudent inherite from student but with private from base class
// so it cannot access any method and arguement from base class but can access from student class 
// because it inherite it with public.
class Gstudent:public student{
    public:
        void setGstudentName(string iname){
            setStudentname(iname);
        }

};






int main(){

    
    

    Gstudent Willy;
    Willy.setGstudentName("Willy");
    Willy.display();

    student Weiting;
    Weiting.name = "Weiting";
    Weiting.display();
    


    return 0;
}   