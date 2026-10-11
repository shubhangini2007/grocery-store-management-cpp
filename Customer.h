#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"
class Customer : public Person {
public:
    Customer();
    Customer(int i, const string& n, const string& p);
    ~Customer() override;
    void display() const override;
    string getType() const override;
};
#endif
