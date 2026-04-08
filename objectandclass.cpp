// #include<iostream>
// using namespace std;

// class hero {
    
//     private:
//     char health;
//     public:
//     int level;
    
    
//     hero() {
//         cout<<"consructer called";
        
//     }

//     // hero(int health) {
//     //     cout<<this<<endl;
//     //     (*this).health=health;   //this store ramesh address
//     // }
    
//     hero(int health,int level) {
//         // cout<<this<<endl;
//         (*this).level=level;
//         (*this).health=health;   //this store ramesh address
//         cout<<(*this).level<<" ";
        
        
//     }
//     hero(hero& temp) {
//         (*this).health=temp.health;
//         (*this).level=temp.level;
//         cout<<temp.level<<" ";
//     }
//     char gethealth() {
//         return health;
//     }
//     void sethealth(char ch) {
//         health=ch;
//     }

// };
// int main() {
//     // hero ramesh(10);  // hero ramesh=ramesh.hero()
//     // cout<<&ramesh<<" ";
//     hero temp('1',12);
//     hero r(temp);
    
//     // hero *b=new hero;
//     // (*b).sethealth('a');
//     // (*b).level=70;
//     // cout<<"health is "<<(*b).gethealth();
//     // cout<<"level is "<<(*b).level;
    
//     // ramesh.sethealth('a');
//     // cout<<"health is "<<ramesh.gethealth();
//     // ramesh.level=70;
//     // cout<<"level is "<<ramesh.level;
//     // delete b;
// }
// name=new char[100];
// char *name;

// #include<iostream>
// using namespace std;
// #include <cstring>
// class hero {
    
//     private:
//     char health;
//     public:
//     int level;
//     char *name;
//     static int timetocomplete;
    
//     hero() {
//         cout<<"consructer called";
//         name=new char[100];
//     }

//     int getlevel() {
//         return level;
//     }
//     void setlevel(int l) {
//         level=l;
//     }
    
//     char gethealth() {
//         return health;
//     }
//     void sethealth(char ch) {
//         health=ch;
//     }

//     void setname(char name[]) {
//         strcpy((*this).name , name); 
//     }

//     void print() {
//     cout<<(*this).gethealth()<<endl;
//     cout<<(*this).name<<" "<<endl;
//     cout<<(*this).getlevel()<<endl;
//     }

// };
//  int hero::timetocomplete=5;
// int main() {

//     cout<<hero::timetocomplete<<endl;
//     hero hero1;
//     hero1.sethealth('a');
     
//     hero1.setlevel(12);
//     char name[8]="mohitgo";
//     hero1.setname(name);
//     hero1.print();

//     hero hero2(hero1);
//     hero2.print();
//     hero2.setlevel(1);
//     hero1.name[0] = 'r';
//     cout<<hero1.name<<" "<<endl;
//     cout<<hero2.name<<" "<<endl;

//     hero1=hero2;
//     hero1.print();
//     hero2.print();
// }

// inheritance in cpp
// #include<iostream>
// using namespace std;

// class human {

//     public:
//     int height;
//     int weight;
//     int age;

//     public:
//     int getage() {
//         return age; 
//     }
//     void setweight(int w) {
//         weight=w;
//     }
// };
//     class male: public human {
//         public:
//         string colour;

    

//         void sleep() {
//             cout<<"i am sleeping"<<endl;
//         }

// };

// // class female: protected human {
// //         public:
// //         string colour;
// //         int getweight() {
// //             return  weight;
// //         }
// // };
// class femal: private human {
//         public:
//         string colour;
//         int getweight() {
//             return  weight;
//         }
// };


// int main() {
    
//     // male object1;
//     // cout<<object1.age<<endl;
//     // cout<<object1.weight<<endl;
//     // cout<<object1.height<<endl;
//     // cout<<object1.colour<<endl;
//     // object1.setweight(84);
//     // cout<<object1.weight<<endl;
//     femal object2;
//     cout<<object2.getweight()<<endl;

// }


// types of inheritance
// #include<iostream>
// using namespace std;

// class animal {
//     public:
//     int height;

//     void bark() {
//         cout<<"barking"<<endl;
//     }
// };

// class human {
//     public:
//     int weight;

//     void speak() {
//         cout<<"sparking"<<endl;
//     }

// };
// // multi level in inheritance
// class dog: public animal {
//     public:
//     int colour;
    
// };

// class cat: public dog {
//     public:
//     int colour;
    
// };

// // multiple inheritance 
// class hybrid: public animal , public human {
//     public:
//     int age;
// };
// int main() {
//     dog d;
//     d.bark();
//     cat c;
//     c.bark();
//     hybrid h;
//     h.bark();
//     h.speak();
// }

// #include<iostream>
// using namespace std;

// class a {
//     public:
//     void func1() {
//         cout<<"inside function 1"<<endl;
// }
// };
// class b: public a{
//     public:
//     void func2() {
//         cout<<"inside function 2"<<endl;
//     }
// };
// class c: public a{
//     public:
//     void func3() {
//         cout<<"inside function 3"<<endl;
//     }
// };

// int main() {
//     a object1;
//     object1.func1();
//     b obejct2;
//     obejct2.func1();
//     obejct2.func2();
//     c object3;
//     object3.func1();
//     object3.func3();
// }

#include<iostream>
using namespace std;

class a {
    public:
    void func1() {
        cout<<"inside function 1"<<endl;
}
};
class b {
    public:
    void func1() {
        cout<<"inside function 2"<<endl;
    }
};
class c: public a,public b {
    public:
    void func() {
        cout<<"hello mohit";
    }
    void func(string name) {
        cout<<"hello";
    }
};


int main() {
    c obj;
    obj.a::func1();
    obj.b::func1();

    c obj1;
    obj1.func();
    

     
}