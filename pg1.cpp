// P1. Define a Person class like we did in the previous module. Only add name and age.
#include <string>
#include <iostream>

using namespace std;
// Problems:
// P1. Define a Person class like we did in the previous module. Only add name and age.
class Person{
 public:
        Person(string name,int age) {
            this->name = name;
            this->age = age ;
       }

        void print_info() {
            cout << "Name:" << name << ", Age :" <<age  << endl;
        };
