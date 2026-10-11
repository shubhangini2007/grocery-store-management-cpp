#include "Supplier.h"
#include <iostream>
#include <iomanip>
using namespace std;
Supplier::Supplier() : Person() {}
Supplier::Supplier(int i, const string& n, const string& p) : Person(i,n,p) {}
Supplier::~Supplier() {}
void Supplier::display() const { cout << left << setw(10) << id << setw(25) << name << setw(18) << phone << setw(12) << "Supplier" << '\n'; }
string Supplier::getType() const { return "Supplier"; }
