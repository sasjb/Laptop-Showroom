#include "customer.h"
#include "laptop.h"
 void Customer:: get_data()
{

    cout<<"Enter Customer Name\n";
    cin>>cname;
    cout<<"Enter Customer Address\n";
    cin>>caddress;
    cout<<"Enter Customer Phone\n";
    cin>>cphone;
    cout << "\nEnter Laptop ID: ";
        cin >> ID;

        cout << "\nEnter  Laptop Brand: ";
        cin >> Brand;

        cout << "\nEnter  Laptop RAM: ";
        cin >> RAM;

        cout << "\nEnter  Laptop Processor: ";
        cin >> Processor;

        cout << "\nEnter  Laptop Edition: ";
        cin >> Edition;
    ofstream file;
    file.open("customer.txt",ios::out|ios::app);
    file<<"Customer Name "<<cname<<endl;
    file<<"Customer address "<<caddress<<endl;
    file<<"Customer phone "<<cphone<<endl;

     file<<"Laptop Id "<<ID<<endl;
     file<<"Laptop Brand "<<Brand<<endl;
     file<<"Laptop Ram "<<RAM<<endl;
     file<<"Laptop Processor "<<Processor<<endl;
     file<<"Laptop Edition  "<<Edition <<endl;

     file.close();

}

