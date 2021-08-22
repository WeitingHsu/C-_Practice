# include<iostream>
# include<string>
using namespace std;



class father{
    public:
    int height;
    void askFather(){
        cout<<"Does your father tell you what you want? "<<endl;

    };
};


class mother{
    public:
    string skincolor;
    void askMother(){
        cout<<"Does your mother tell you what you want? "<<endl;

    };
};

// multiple inheritacne, we're inherting two or more class
class child:public father, public mother{
    public:
        void askParents(){
            cout<<"asking my parents"<<endl;
        }

        void setcolorandheight(string color, int iheight){
            skincolor = color;
            height = iheight;
        }

        void display(){
            cout<<"height is "<<height<<" and skincolor is "<<skincolor<<endl;
        }
};




int main(){



    child Weiting;
    Weiting.setcolorandheight("White",182);
    Weiting.display();


    return 0;
}