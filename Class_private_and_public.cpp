# include <iostream>
# include <string>
using namespace std;

class namesetting{
    private:
         string name;

    public:
        void setname(string x){
            name = x;
        }
        string getname(){
            return name;
        }

};

int main(){

    namesetting name1;

    name1.setname("Weitng");
    // Using this way can let user not direcly change the variable in side class.
    //Instead, use set function to change the variable inside object 
    cout<<name1.getname()<<endl;


}




