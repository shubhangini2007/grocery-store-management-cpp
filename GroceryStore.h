#ifndef GROCERYSTORE_H
#define GROCERYSTORE_H
#include "Product.h"
#include "Customer.h"
#include "Supplier.h"
#include "Sale.h"
#include "FileManager.h"

class GroceryStore {
private:
    Product* products;
    Customer* customers;
    Supplier* suppliers;
    Sale* sales;
    int productCount, customerCount, supplierCount, saleCount;
    int productCapacity, customerCapacity, supplierCapacity, saleCapacity;
    int nextSaleId;
    FileManager fileManager;
    void resizeProducts();
    void resizeCustomers();
    void resizeSuppliers();
    void resizeSales();
    int findProductIndex(int id) const;
    int findCustomerIndex(int id) const;
    int findSupplierIndex(int id) const;
public:
    GroceryStore();
    ~GroceryStore();
    void loadData();
    void saveData() const;
    void addProduct();
    void addCustomer();
    void addSupplier();
    void displayProducts() const;
    void displayCustomers() const;
    void displaySuppliers() const;
    void displaySales() const;
    void searchRecord() const;
    void updateRecord();
    void deleteRecord();
    void sellProduct();
    void generateBill(int saleIndex) const;
    void showReport() const;
    void addRecordMenu();
    void displayRecordMenu() const;
    void runSaveLoadMenu();
};
#endif
