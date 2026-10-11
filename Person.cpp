#include "Person.h"
#include <stdexcept>
using namespace std;

Person::Person() : id(0), name(""), phone("") {}
Person::Person(int i, const string& n, const string& p) : id(i), name(n), phone(p) {
    if (i <= 0 || n.empty()) throw invalid_argument("Invalid person data.");
}
Person::~Person() {}
int Person::getId() const { return id; }
string Person::getName() const { return name; }
string Person::getPhone() const { return phone; }
void Person::setName(const string& n) { if (n.empty()) throw invalid_argument("Name cannot be empty."); name = n; }
void Person::setPhone(const string& p) { phone = p; }
