GROCERY STORE MANAGEMENT - CPP21

Project type: C++ Console-Based OOP Project
Language: C++17

QUICK START (Windows): Double-click run.bat. It changes to the project folder, compiles all source files using g++, and starts the program. Extract the ZIP before running.

MANUAL BUILD (VS Code PowerShell, from this folder):
g++ -std=c++17 main.cpp Product.cpp Person.cpp Customer.cpp Supplier.cpp Sale.cpp FileManager.cpp GroceryStore.cpp -o GroceryStoreManagement.exe
.\GroceryStoreManagement.exe

CLASSES:
Product, Person, Customer, Supplier, Sale, FileManager, GroceryStore

CONCEPTS DOCUMENTED:
- Classes and objects
- Encapsulation
- Default and parameterized constructors
- Destructors
- Inheritance
- Runtime polymorphism
- Dynamic memory and dynamic array resizing
- File handling using text files
- Validation and exception handling
- CRUD operations
- Main sales transaction and bill generation

DATA FILES:
Data/products.txt
Data/customers.txt
Data/suppliers.txt
Data/sales.txt

IMPORTANT: Run from this project folder so the Data folder is found. run.bat rebuilds the executable; a working g++/MinGW installation must be installed and available on PATH.
