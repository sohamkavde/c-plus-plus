#include<bits/stdc++.h>
using namespace std;

//line no 111 - 114 copy deep construction imp instructions
class Person{
   
};
class Person1{
    public:
        int  age;
        string name;
    private:
        int HouseNO;
    public:
    void setHOuseNo(int val){
        HouseNO = val;
    }
    int getHouseNo(){
        return HouseNO;
    }
};

class Person2{
    public:
        string name;
        int age;
    // Default constructor  has no return value,no parameter;
        Person2(){            
            cout<<"This is default Constructor"<<endl;
        }

    // Parameteriesed Constructor
        Person2(string name,int  age){
            this->name = name;
            this-> age = age;
            cout<<"This is Parameteriesed Constructor"<<endl;
        }
};

class Person3{
        public:
            string name ;
            int age;
            char *nam;
            static int time;
            Person3(){
                cout<<"Person3 class called"<<endl;
                nam  = new char[100];
                // this->name = name;
                // this->age  = age;
            }
       
            // copy constructor for deep copy
            Person3(Person3 &temp){                

                char *ch = new char[strlen(temp.nam)+1]; 
                strcpy(ch,temp.nam); 
                this->nam = ch;

                this->name =  temp.name;
                this->age = temp.age;
            }
            ~Person3(){
                cout<<"Destructor is called \n";
            }
            static void staticfunction(){
                    cout<<"No need to create  object  for static function"<<endl;
            }
};
int Person3::time = 3300;
int main(){
        // size of empty class Person1
        // cout<<"size Of Person1 : "<< sizeof(Person)<<endl;
       //first node Person1 p1 for Access  Modifiers

       Person1 p1;
       // age  , name : Public
       p1.age = 20;
       p1.name = "Soham Kavde";

    //    cout<<"Age :"<<p1.age<<endl;
    //    cout<<"Name :"<<p1.name<<endl;
      // HouseNo : Private
      // Need to use Getter and setter both are basically function in the same class
       p1.setHOuseNo(420); // setter
    //    cout<<"House NO :"<<p1.getHouseNo()<<endl; // gettter 
    // There is one another Access Modifier which is Protector this used in Parent  child functionality
       // dynamic memory Allocation
       Person1* p2 = new Person1();
       p2->age = 43;
       p2->name = "Rohit";
    //    cout<<"Age :"<<p2->age<<endl;
    //    cout<<"Name :"<<p2->name<<endl;


    // Creating Another class for showing constructors
    //Default  Constructor
    
    Person2 p3;

    p3.age = 4;
    p3.name = "soham";
    cout<<p3.age<<endl;
    cout<<p3.name<<endl;

    Person2 p4("Rohit",20);
    cout<<p4.name<<endl;
    cout<<p4.age<<endl;
    p4.age = 4;
    cout<<p4.age<<endl;
    // Copy constructor (***This will create shallow Copy which means if I do change in p4 object it will  reflect on p5 object as well )
    Person2 p5(p4);
    cout<<p5.name<<endl;
    cout<<p5.age<<endl;

    // Creating another object for showing Deep Copy
    // Deep copy work for pointer variable why because pointer variable saves address ,
    // with default constructor when we change value of pointer it changes on the value which is stored as address 

    Person3 p6;
    p6.name = "soham";
    p6.age = 20;
    char nam[7] = "output";
    strcpy(p6.nam,nam);
    cout<<p6.name<<endl;
    cout<<p6.age<<endl;
    cout<<p6.nam<<endl;

    Person3 p7(p6);
    cout<<p7.name<<endl;
    cout<<p7.age<<endl;
    cout<<p7.nam<<endl;
    p6.nam[0] = 'R';
    cout<<"p6 nam :"<<p6.nam<<endl;
    cout<<"p7 nam :"<<p7.nam<<endl;



    cout<<"The time of static varible is :"<<Person3::time<<endl;
    Person3::staticfunction();
    return 0;

}