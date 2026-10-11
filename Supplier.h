#ifndef SUPPLIER_H
#define SUPPLIER_H
#include "Person.h"
class Supplier : public Person {
public:
    Supplier();
    Supplier(int i, const string& n, const string& p);
    ~Supplier() override;
    void display() const override;
    string getType() const override;
};
#endif
