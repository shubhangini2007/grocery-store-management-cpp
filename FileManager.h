#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "Product.h"
#include "Customer.h"
#include "Supplier.h"
#include "Sale.h"
#include <string>
using namespace std;

class FileManager {
private:
    string productFile;
    string customerFile;
    string supplierFile;
    string saleFile;
public:
    FileManager();
    void saveProducts(Product* products, int count) const;
    void saveCustomers(Customer* customers, int count) const;
    void saveSuppliers(Supplier* suppliers, int count) const;
    void saveSales(Sale* sales, int count) const;
    int loadProducts(Product* products, int capacity) const;
    int loadCustomers(Customer* customers, int capacity) const;
    int loadSuppliers(Supplier* suppliers, int capacity) const;
    int loadSales(Sale* sales, int capacity) const;
};
#endif
