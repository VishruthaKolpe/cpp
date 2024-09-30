#include <string>
#include <iostream>

using namespace std;
// Problems:
// P1. Define a Person class like we did in the previous module. Only add name and age.
class Person{
// P3. Make the attributes private and see if you can still access them from outside the class.
 private:
        Person(string name,int age) {
            this->name = name;
            this->age = age ;
       }

        void print_info() {
            cout << "Name:" << name << ", Age :" << age << endl;
        }
  private:
        string name;
        int age;
};

// P2. Create two instances of Person and call print_info() on them.
int main(){

Person p1("Saikiran", 21);
p1.print_info();
}
