//OOPS concept Four major pilors Inheritance ,Encapsulation,Polymorphism,Abstraction
#include<bits/stdc++.h>
using namespace std;

// Encapuslation is binding data member and  member function in a class like a capsule
class Encapuslation{
    public:
        int time;
        int score;
        void speak(){
            cout<<"Hello this is polymorphis\n";
        } 
        // in this class time , score is data member and speak is  member function which is bind in class Encapuslation    
};

// Inheritance
// Parent class
class Human{
    public:
        int age;
        string name;
        int score;
};
//child class or Inherited class
// this is single level inheritance
class Soham : public Human{
    public:
        string color;
};

// multilevel first  human is parent for Soham , Soham is parent for sonu
class Sonu : public Soham{
    public:
        void  speak(){
            cout<<"Soham is my Father and Human is my grand Father\n";
        }
};

// Heirarchial Inheritance Here Human is Parent class for Soham , Sonam
class Sonam :public Human{
    public:
        int favourit_number;
};


// Multiple Inheritance where Animal and Person two parent class and Friends is base class
class Animal{
    public:
        void say(){
            cout<<"Animal are saying.....\n";
        }
};

class Person{
    public:
        void speak(){
            cout<<"Person is saying .....\n";
        }
};
// friend is reserve keyword in cpp
class Friends : public Animal,public Person{
    public:
        void playing(){
            cout<<"Animal and Person are playing together\n";
        }
};

int main(){
    // Encapuslation p1;
    // p1.speak();

    Soham s1;
    s1.color = "blue";
    s1.age = 20;
    s1.name = "soham";
    s1.score = 85;
    // cout<<"[ Name is : "<<s1.name;
    // cout<<", Age is : "<<s1.age;
    // cout<<", Score is : "<<s1.score;
    // cout<<", Color is : "<<s1.color<<"]"<<endl;
    // Multilevel Inheritance
    Sonu s2;
    s2.color = "Gray";
    s2.age = 1;
    s2.name = "Sonu";
    s2.score = 35;
    cout<<"[ Name is : "<<s2.name;
    cout<<", Age is : "<<s2.age;
    cout<<", Score is : "<<s2.score;
    cout<<", Color is : "<<s2.color<<"]"<<endl;
    s2.speak();


    // Heirarchial Inheritance
    // Sonam can access all member or Human only but Sonam can not  access any member of Soham or other class
    Sonam s3;
    // s3.color = "Gray"; // this can not be accessed by s3 because it is not parent class of Sonam no connection
    s3.age = 13;
    s3.name = "Sonam";
    s3.score = 89;
    s3.favourit_number = 3;
    cout<<"[ Name is : "<<s3.name;
    cout<<", Favourite Number is : "<<s3.favourit_number;
    cout<<", Age is : "<<s3.age;
    cout<<", Score is : "<<s3.score<<"]"<<endl;
   

    // Multiple Inheritance
    Friends f1;
    f1.playing();
    f1.say();
    f1.speak();
    return 0;

}