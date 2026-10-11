#include "Sale.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
Sale::Sale() : saleId(0), productId(0), customerId(0), quantity(0), total(0.0) {}
Sale::Sale(int sid, int pid, int cid, int qty, double price) : saleId(sid), productId(pid), customerId(cid), quantity(qty), total(0.0) {
    if (sid <= 0 || pid <= 0 || cid <= 0 || qty <= 0 || price < 0) throw invalid_argument("Invalid sale data.");
    calculateTotal(price);
}
Sale::~Sale() {}
int Sale::getSaleId() const { return saleId; }
int Sale::getProductId() const { return productId; }
int Sale::getCustomerId() const { return customerId; }
int Sale::getQuantity() const { return quantity; }
double Sale::getTotal() const { return total; }
double Sale::calculateTotal(double price) { if (price < 0 || quantity <= 0) throw invalid_argument("Invalid calculation data."); total = price * quantity; return total; }
void Sale::display() const { cout << left << setw(10) << saleId << setw(12) << productId << setw(12) << customerId << setw(10) << quantity << right << setw(12) << fixed << setprecision(2) << total << '\n'; }
