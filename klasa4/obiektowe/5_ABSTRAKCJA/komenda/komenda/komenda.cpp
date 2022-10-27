
#include <iostream>
#include <string>
using namespace std;
class GroupUp {
public:
    virtual string display() = 0;
};
class Person : virtual public GroupUp {
protected:
    string firstName;
    string lastName;
public:
    Person(string imie, string nazwisko) {
        this->firstName = imie;
        this->lastName = nazwisko;
    }
    string display() {
        return "Imie: " + firstName + " Nazwisko: " + lastName;
    }
};
class Policjant : public Person {
protected:
    string rank;
public:
    Policjant(string imie, string nazwisko, string stopien) :Person(imie, nazwisko) {
        this->rank = stopien;
        this->firstName = imie;
        this->lastName = nazwisko;
    }
    string display() {
        return  Person::display() + " stopien sluzbowy: " + rank;
    }
};
class Naczelnik : public Policjant {
private:
    string department;
public:
    Naczelnik(string imie, string nazwisko, string stopien, string Wydzial) :Policjant(imie, nazwisko, stopien) {
        this->rank = stopien;
        this->Person::lastName = nazwisko;
        this->Person::firstName = imie;
        this->department = Wydzial;
    }
    string display() {
        return Policjant::display() + " Wydzial: " + department;
    }
};

class Komenda {
    string name;
    int bedCount;
public:
    Komenda(string name, int beds) {
        this->bedCount = beds;
        this->name = name;
    }
    void display() {
        cout << "Nazwa komendy: " + name + " liczba miejsc: " + to_string(bedCount) << endl;;
    }
};
int main()
{
    cout << "--------------------------------------------------------------------------------------------" << endl;
    Person p1 = { "Kacper","Szczudlo" };
    cout << p1.display() << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    Policjant d1 = { "Kuba","Nowak","Komisarz" };
    cout << d1.display() << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    Naczelnik o1 = { "Jakub","Kowalski","Naczelnik","Wydzial Ruchu Drogowego" };
    cout << o1.display() << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    Komenda h1 = { "Imienia Mickiewicza",231412 };
    h1.display();
    cout << "--------------------------------------------------------------------------------------------" << endl;


}

