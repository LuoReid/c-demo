
#include <iostream>
using namespace std;
class Person
{
protected:
    int id;
    char name[50];

public:
    Person()
    {
        cout << "please input id" << endl;
        cin >> id;
        cout << "please input name:" << endl;
        cin >> name;
    }
    void show()
    {
        cout << "id: " << id << endl;
        cout << "name:" << name << endl;
    }
};

class Student : public Person
{
protected:
    int classno;
    double score;

public:
    Student() : Person()
    {
        cout << "please input class number:" << endl;
        cin >> classno;
        cout << "please input score:" << endl;
        cin >> score;
    }
    void show()
    {
        Person::show();
        cout << "class number:" << classno << endl;
        cout << "score:" << score << endl;
    }
};

int main()
{
    Student stu;
    stu.show();
    return 0;
};