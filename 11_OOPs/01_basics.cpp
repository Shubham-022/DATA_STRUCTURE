#include<iostream>
using namespace std;


class Animal{
    // state or properties;
    private:
    int weight;
    public:
    int age;
    string type;

    // Default Constructor
    Animal(){
        this->weight=0;
        this->age=0;
        this->type="";
        cout<<"Conatructor called"<<endl;
    } 

    //parameterised Constructor
    Animal(int age){
        this->age=age;
        cout<<"Parametrised Constructor called"<<endl;
    }

    Animal(int age,int weight){
        this->age=age;
        this->weight=weight;
        cout<<"Parametrised Constructor with two parameters called"<<endl;
    }

    //copy constructor
    Animal(Animal & obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->type=obj.type;
    }

    //behaviours (cpp->functions,java->methods)
    void eat(){
            cout<<"eating"<<endl;
    }
    void sleep(){
            cout<<"sleeping"<<endl;

    }
    int getWeight(){
        return weight;
    }

    // void setWeight(int w)
    // {
    //     weight=w;
    // }
    void setWeight(int weight)
    {
       this-> weight=weight;
    }



    //Destructor

    ~Animal(){
        cout<<"I am inside Destructor";
    }
};
  
int main(){
//     cout<<"Hellow world"<<endl;
//     cout<<"Size of Empty class is: "<<sizeof(Animal)<<endl;

//     //Object Creation
//     //static
//     Animal ramesh;  //object; 
//     ramesh.age=12;
//     ramesh.type="Lion";
//     cout<<"Age of ramesh is: "<<ramesh.age<<endl;
//     cout<<"Age of ramesh is: "<<ramesh.type<<endl;
    
    
//     ramesh.eat();
//     ramesh.sleep();
    
//     ramesh.setWeight(101);
//     cout<<"weight"<<ramesh.getWeight()<<endl;


//     //dynamic memory 
//     Animal*suresh=new Animal;
//     (*suresh).age=15;
//     (*suresh).type="billi";

//    //alternate way of access dynamicaly
//    suresh->age=15;
//    suresh->type="kutta";

//    suresh->eat();
//    suresh->sleep();

// Animal a(100);
// Animal*b= new Animal(100);

// // parametrized
// Animal a(100,1000);
// Animal*b= new Animal(100);
 
// //object copy
//     Animal c=a;

//     Animal animal1(c);


//     cout<<"Age of animal1 is: "<<animal1.age<<endl;

Animal a;
a.age=5;

Animal*b=new Animal();
b->age=12;
    return 0;
}

