#include <iostream>
using namespace std;

class Person {
protected:
    string Name;
    int Age;
public:
    Person() {};
    Person(string name, int age) {
        Name = name;
        Age = age;
    }
    void IntroduceYourself() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};


class Student : public Person {
private:
    string School;

public:
    Student(string name, string school, int age) {
        School = school;
    }
    void IntroduceYourself() {
        cout << "Name: " << Name << endl;
        cout << "School: " << School << endl;
        cout << "Age: " << Age << endl;
    }
};


class Employee : protected Person {
private:
    string Company;

public:
    Employee(string name, string company, int age) {
        Company = company;
    }
    void IntroduceYourself() {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};


int main() {
    Student student = Student("Kacper", "ZSJP2", 19);
    student.IntroduceYourself();

    Employee employee = Employee("Krzysztof", "MAN", 2);
    employee.IntroduceYourself();
    return 0;
}


