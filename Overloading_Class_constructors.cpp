# include<iostream>
# include<string>
using namespace std;
// This example will show what is function overloading.
// Function overloading is nothing but writing the function with the same name, but with different type, or different number of parameter.
// Since these constructor are also function or method of class, we can overlaod them just like the way we overload the funciton 


class human{
    // Private is usually used to run internal working and internal representation 
    private:
        int age;
        string Nationality;

    public:
        human(){
            cout<<"default constructor"<<endl;
            age = 0;
            Nationality = "No";
           
        };
        // The following is overloadning construnctor with different arguement required.
        human(string nation){
            cout<< "constructor with nation as  parameter"<<endl;
            age = 0;
            Nationality = nation; 
        }
        human(int iage){
            cout<< "constructor with iage as  parameter"<<endl;
            age = iage;
            Nationality = "No"; 
        }
        human(int iage, string nation){
            cout<< "constructor with iage and nation as  parameter"<<endl;
            age = iage;
            Nationality = nation; 
        }
        void display(){
            cout<<Nationality<<endl<<age<<endl;
        }

};

int main(){

    human Weiting;
    Weiting.display();

    human Willy("Taiwann");
    Willy.display();

    human Will(25,"Taiwann");
    Will.display();

    human Wei(25);
    Wei.display();



    return 0;
}