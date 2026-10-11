#include "Customer.h"
#include <iostream>
#include <iomanip>
using namespace std;
Customer::Customer() : Person() {}
Customer::Customer(int i, const string& n, const string& p) : Person(i,n,p) {}
Customer::~Customer() {}
void Customer::display() const { cout << left << setw(10) << id << setw(25) << name << setw(18) << phone << setw(12) << "Customer" << '\n'; }
string Customer::getType() const { return "Customer"; }
