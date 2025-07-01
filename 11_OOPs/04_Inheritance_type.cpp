
//Single level inheritance example;

// #include<iostream>
// using namespace std;


// class Car{
//     public:
//     string name;
//     int weight;
//     int age;

//     void speedUp(){
//         cout<<"Speeding Up"<<endl;

//     }
//     void breakMarro()
//     {
//         cout<<"break maardi"<<endl;
//     }

// };

// class Scorpio:public Car{

// };

// int main(){

//     Scorpio babbarWali;  //babbarWali is a objectof class scorpio
//     babbarWali.speedUp();

// }



//Multilevel inheritance example;

// #include<iostream>
// using namespace std;

// class Fruit{

//     public:
//     string name;
// };

// class Mango:public Fruit{
//     public:
//         int weight;
// };

// class Alphanso:public Mango{
//     public:
//     int sugarLevel;
// };

// int main(){
//     Alphanso a;
//     cout<<a.name<<endl<<a.weight<<endl<<a.sugarLevel<<endl;
// }




//multiple inheritance example;

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     int chemistry;

//     A(){                //constructor
//         chemistry=10;
//     }
// };

// class B{
//     public:
//     int chemistry;

//     B(){                //constructor
//         chemistry=20;
//     };
// };

// class C:public A,public B{
//     public:
//     int maths;
// };

// int main(){
//     C obj;
//     cout<<endl<<obj.A::chemistry<<endl<<obj.maths<<endl;
// }




// hierarchical inheritance example;

// #include<iostream>
// using namespace std;


// class Car{
//     public:
//     int age;
//     int height;
//     string name;
//     void speedup(){
//         cout<<"Speeding Up"<<endl;
//     }
// };

// class Scorpio:public Car{

// };

// class Fortuner:public Car{

// };


// int main(){

//     Scorpio s11;
//     s11.speedup();
//     Fortuner f11;
//     f11.speedup();
// }

