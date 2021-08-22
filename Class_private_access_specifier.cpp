# include<iostream>
# include<string>
using namespace std;
// This example will show private function in the class


class human{
    // Private is usually used to run internal working and internal representation 
    private:
        int age;
        int getage(){
            return age-5;
        };
        string Nationality;

    public:
        human(){
            // constructor is called automatically when you call a object. Normally constructor is specified in public area
            Nationality = "Taiwan";
            age = 0;
        }
        void display(){
            cout<<getage()<<endl;
        }
        void setage(int n){
            age = n;
        }
        void displaynationality(){
            cout<<Nationality<<endl;
        }
};


int main(){

    human Weiting;
    Weiting.setage(25);
    Weiting.display();
    Weiting.displaynationality();



}