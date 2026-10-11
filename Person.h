#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
protected:
    int id;
    string name;
    string phone;
public:
    Person();
    Person(int i, const string& n, const string& p);
    virtual ~Person();
    int getId() const;
    string getName() const;
    string getPhone() const;
    void setName(const string& n);
    void setPhone(const string& p);
    virtual void display() const = 0;
    virtual string getType() const = 0;
};
#endif
