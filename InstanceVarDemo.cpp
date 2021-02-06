#include <iostream>

using namespace std;

class Demo
{
    private://(Optional)
        int x; // x and y are instance Vars
        int y;

   public:
    //void setValues(int x,int y)// a and b var are local Var
    void setValues(int a,int b)
    {
        // By Using this function i am initializing an Object
        x =  a;
        y =  b;
        //this->x = x; // this pointer: pointer to current Object d1.x
        //this->y = y;     // this function is used for Object initialization
    }

    void showValues()
    {
        cout<<"Value of X ="<<x<<endl;
        cout<<"Value of Y ="<<y<<endl;
    }
};

int main()
{
    Demo d1,d2;

    d1.setValues(100,200);// Object initialization

    d2.setValues(111,222);//Object initialization

    d2.showValues(); // 100 200

    d1.showValues(); //  100 200
}
