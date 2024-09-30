
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
            cout << "Name:" << name << ", Age :" << age << endl;
        }
  //private:
        string name;
        int age;
};


// P7. Add a class called Student that inherits from Person. Add a field called department. Add a constructor that takes a name, age and department. Add a method called print_info() that prints out the name,age and department of the student.

class Student: public Person {
  public:
    string department;
    Student(string name,string department,int age) :Person(name,age){
    this ->department = department;
    }
     void print_info() {
            cout << "Name: " << name << " ,Age:" << age << " ,Department: " << department << endl;
        }

};

// P9. Create a class called Teacher that inherits from Person. Add a field called salary. Add a constructor that takes a name, age and salary. Add a method called print_info() that prints out the name, age and salary of the teacher.
class Teacher : public Person{
 public:
        int salary;
        Teacher(string name,int age,int salary):Person(name,age){
                this ->salary = salary;
        }
        void print_info() {
            cout << "Name: " << name << " ,Age:" << age << " ,salary: " << salary << endl;
        }
};

// P2. Create two instances of Person and call print_info() on them.
int main(){

Person person1("Saikiran",21);
person1.print_info();

Student student1("Saikiran", "ECE",21);
student1.print_info();

// P10. Create an instance of Teacher and call print_info() on it.
Teacher  teacher1("Saikiran",21,15000);
teacher1.print_info();

}
