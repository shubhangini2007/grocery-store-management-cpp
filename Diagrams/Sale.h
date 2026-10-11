#ifndef SALE_H
#define SALE_H
#include <string>
using namespace std;
class Sale {
private:
    int saleId;
    int productId;
    int customerId;
    int quantity;
    double total;
public:
    Sale();
    Sale(int sid, int pid, int cid, int qty, double price);
    ~Sale();
    int getSaleId() const;
    int getProductId() const;
    int getCustomerId() const;
    int getQuantity() const;
    double getTotal() const;
    double calculateTotal(double price);
    void display() const;
};
#endif
