#include "FileManager.h"
#include <fstream>
#include <iomanip>
#include <sstream>
using namespace std;
FileManager::FileManager() : productFile("Data/products.txt"), customerFile("Data/customers.txt"), supplierFile("Data/suppliers.txt"), saleFile("Data/sales.txt") {}
void FileManager::saveProducts(Product* p,int n) const { ofstream f(productFile); for(int i=0;i<n;i++) f<<p[i].getId()<<'|'<<p[i].getName()<<'|'<<p[i].getPrice()<<'|'<<p[i].getStock()<<'\n'; }
void FileManager::saveCustomers(Customer* p,int n) const { ofstream f(customerFile); for(int i=0;i<n;i++) f<<p[i].getId()<<'|'<<p[i].getName()<<'|'<<p[i].getPhone()<<'\n'; }
void FileManager::saveSuppliers(Supplier* p,int n) const { ofstream f(supplierFile); for(int i=0;i<n;i++) f<<p[i].getId()<<'|'<<p[i].getName()<<'|'<<p[i].getPhone()<<'\n'; }
void FileManager::saveSales(Sale* p,int n) const { ofstream f(saleFile); f<<setprecision(15); for(int i=0;i<n;i++) f<<p[i].getSaleId()<<'|'<<p[i].getProductId()<<'|'<<p[i].getCustomerId()<<'|'<<p[i].getQuantity()<<'|'<<p[i].getTotal()<<'\n'; }
int FileManager::loadProducts(Product* p,int cap) const { ifstream f(productFile); string line; int n=0; while(n<cap && getline(f,line)){ stringstream s(line); string x, name; int id,stock; double price; getline(s,x,'|'); if(x.empty()) continue; id=stoi(x); getline(s,name,'|'); getline(s,x,'|'); price=stod(x); getline(s,x,'|'); stock=stoi(x); p[n++]=Product(id,name,price,stock);} return n; }
int FileManager::loadCustomers(Customer* p,int cap) const { ifstream f(customerFile); string line; int n=0; while(n<cap&&getline(f,line)){ stringstream s(line); string a,b,c; getline(s,a,'|'); getline(s,b,'|'); getline(s,c,'|'); if(a.empty()) continue; p[n++]=Customer(stoi(a),b,c);} return n; }
int FileManager::loadSuppliers(Supplier* p,int cap) const { ifstream f(supplierFile); string line; int n=0; while(n<cap&&getline(f,line)){ stringstream s(line); string a,b,c; getline(s,a,'|'); getline(s,b,'|'); getline(s,c,'|'); if(a.empty()) continue; p[n++]=Supplier(stoi(a),b,c);} return n; }
int FileManager::loadSales(Sale* p,int cap) const { ifstream f(saleFile); string line; int n=0; while(n<cap&&getline(f,line)){ stringstream s(line); string a,b,c,d,e; getline(s,a,'|'); getline(s,b,'|'); getline(s,c,'|'); getline(s,d,'|'); getline(s,e,'|'); if(a.empty()) continue; p[n++]=Sale(stoi(a),stoi(b),stoi(c),stoi(d),stod(e)/stoi(d)); } return n; }
