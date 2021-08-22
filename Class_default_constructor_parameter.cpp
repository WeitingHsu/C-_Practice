# include<iostream>
# include<string>
using namespace std;


class human{
    // Private is usually used to run internal working and internal representation 
    private:
        int age;
        string name;

    public:
        human(){
            cout<<"default constructor"<<endl;
            name = "noname";
            age = 0;
        };
        // The following is overloadning construnctor with different arguement required.
        human(string iname, int iage = 0){
            cout<< "overload constructor"<<endl;
            name = iname;
            age = iage; 
        };

        void speakUp(){
            cout<<name<<endl<<age<<endl;

        }
};

int main(){
    human Weiting("Weiting",24);
    Weiting.speakUp();

    return 0;

}