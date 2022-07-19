#include<bits/stdc++.h>
using namespace std;
// Polymorphism Compile time or run time polymorphism
// compile time polymoriphis ---- Function overloading , operator overloading
class Soham{
    public:
        void say(){
            cout<< "This  is first function of say \n";
        }
        void say( int num ){
            cout<<"This is second function of say "<<num<<endl;
        }
        int a;
        int  b;
        // Operating  Overloading
        void operator+ (Soham &obj){
                int value = this->a;
                int value2 = obj.a;
                cout<< value - value2<<endl;

        }
};

// method overloading -- Run time polymorphism
class Sonu{
    public:
       void say(){
            cout<<"This is function overlaoding or method overloading \n";
        }
};
int main(){
    Soham s1;
    s1.say();
    // function overloading
    s1.say(20);
    Soham s2 , s3;
    s2.a = 3;
    s3.a = 6;
    s2+s3;

    Sonu s5;
    s5.say();

    return 0;
}