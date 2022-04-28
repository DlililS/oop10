#include <iostream>
#include <string>
using namespace std;
class Human {
public:
    Human() {}
    Human(string n1, string n2, string n3, int n4):
        surname(n1), name(n2), midname(n3), age(n4){}
    virtual void print() = 0;
    virtual ~Human() {}
protected:
    string surname, name, midname;
    int age;
};
class Student : public Human {
public:
    Student(string n1, string n2, string n3, int n4, bool n5):
        Human(n1, n2, n3, n4) {
        on_lesson = n5;
    }
        void print()override
        {
            cout << this->surname << ' ' << this->name << ' ' << this->midname << ' ' << this->age << ' ' << this->on_lesson << endl;
        }
private:
    bool on_lesson;
};
class Boss : public Human {
public:
    Boss(string n1, string n2, string n3, int n4, int n5):
        Human(n1, n2, n3, n4) {
        number_of_workes = n5;
    }
    void print()override
    {
        cout << this->surname << ' ' << this->name << ' ' << this->midname << ' ' << this->age << ' ' << this->number_of_workes << endl;
    }
private:
    int number_of_workes;
};
int main()
{
    Student n5("Ivanov", "Alexandr", "Vladislavovich", 19, true);
    n5.print();
    Boss n("Ivanov", "Alexandr", "Vladislavovich", 24, 5);
    n.print();
    return 0;
}
