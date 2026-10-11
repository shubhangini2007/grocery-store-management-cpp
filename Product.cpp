#include "Product.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

Product::Product() : productId(0), name(""), price(0.0), stock(0) {}
Product::Product(int id, const string& n, double p, int s) : productId(id), name(n), price(p), stock(s) {
    if (id <= 0 || p < 0 || s < 0) throw invalid_argument("Invalid product data.");
}
Product::~Product() {}
int Product::getId() const { return productId; }
string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
int Product::getStock() const { return stock; }
void Product::setName(const string& n) { if (n.empty()) throw invalid_argument("Name cannot be empty."); name = n; }
void Product::setPrice(double p) { if (p < 0) throw invalid_argument("Price cannot be negative."); price = p; }
void Product::setStock(int s) { if (s < 0) throw invalid_argument("Stock cannot be negative."); stock = s; }
void Product::updateStock(int change) {
    if (stock + change < 0) throw invalid_argument("Insufficient stock.");
    stock += change;
}
void Product::display() const {
    cout << left << setw(10) << productId << setw(22) << name
         << right << setw(12) << fixed << setprecision(2) << price
         << setw(10) << stock << '\n';
}
