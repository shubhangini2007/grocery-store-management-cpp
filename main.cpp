#include "GroceryStore.h"
#include <iostream>
#include <limits>
using namespace std;

int main(){
    GroceryStore store;
    store.loadData();
    int choice;
    do{
        cout<<"\n============================================\n";
        cout<<"        GROCERY STORE MANAGEMENT\n";
        cout<<"============================================\n";
        cout<<"1. Add Record\n2. Display Records\n3. Search Record\n4. Update Record\n5. Delete Record\n6. Main Transaction / Process\n7. Report\n8. Save / Load\n9. Exit\n";
        cout<<"============================================\n";
        cout<<"Enter your choice: ";
        if(!(cin>>choice)){
            cout<<"Invalid input. Please enter a number.\n";
            cin.clear(); cin.ignore(numeric_limits<streamsize>::max(),'\n'); continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        switch(choice){
            case 1: store.addRecordMenu(); break;
            case 2: store.displayRecordMenu(); break;
            case 3: store.searchRecord(); break;
            case 4: store.updateRecord(); break;
            case 5: store.deleteRecord(); break;
            case 6: store.sellProduct(); break;
            case 7: store.showReport(); break;
            case 8: store.runSaveLoadMenu(); break;
            case 9: store.saveData(); cout<<"Thank you for using Grocery Store Management.\n"; break;
            default: cout<<"Invalid choice. Please select 1-9.\n";
        }
    }while(choice!=9);
    return 0;
}
