#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string name;
    double price;
    int stock;
public:
    Product();
    Product(int id, const string& n, double p, int s);
    ~Product();
    int getId() const;
    string getName() const;
    double getPrice() const;
    int getStock() const;
    void setName(const string& n);
    void setPrice(double p);
    void setStock(int s);
    void updateStock(int change);
    void display() const;
};
#endif
