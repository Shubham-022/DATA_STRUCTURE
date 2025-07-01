// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//     int age;
//     int weight;

//     void eat(){
//         cout<<"Eating"<<endl;
//     }

// };

// class Dog:private Animal{

//     public:
//     void print(){
//         cout<<this->age;
//     }
// };


// int main(){
//     cout<<"Hello  world"<<endl;

//     Dog d1;
//     d1.print();
//   //  cout<<d1.age<<endl;
//     //d1.eat();
// }






// #include<iostream>
// using namespace std;

// class Animal{
//     protected:
//     int age;
//     int weight;

//     void eat(){
//         cout<<"Eating"<<endl;
//     }

// };

// class Dog:private Animal{

//     public:
//     void print(){
//         cout<<this->age;
//     }
// };


// int main(){
//     cout<<"Hello  world"<<endl;

//     Dog d1;
//     //d1.age;
//     d1.print();
//   //  cout<<d1.age<<endl;
//     //d1.eat();
// }












#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }

};

class Dog:private Animal{

    public:
    void print(){
        cout<<this->age;
    }
};


int main(){
    cout<<"Hello  world"<<endl;

    Dog d1;
    //d1.age;
    d1.print();
  //  cout<<d1.age<<endl;
    //d1.eat();
}