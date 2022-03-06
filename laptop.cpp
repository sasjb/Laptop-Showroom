#include "laptop.h"
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
Laptop ::  Laptop(string id, string nm, int ram, string pro, string ed, int flg)
    {
        ID = id;
        Brand = nm;
        RAM = ram;
        Processor = pro;
        Edition = ed;
        flag = flg;
    }
void Laptop::get_data()
    {
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

        flag = 1;

    }
void Laptop:: display()
    {
        cout << "Laptop Id:          " << ID << endl;
        cout << "Laptop Brand:        " << Brand << endl;
        cout << "Laptop RAM:         " << RAM << endl;
        cout << "Laptop processor:      " << Processor << endl;
        cout << "Laptop Edition:  " << Edition << endl;
    }
Laptop::  Laptop()
    {
        ID = "";
        Brand = "";
        RAM = "";
        Processor = "";
        Edition = "";
        flag = 0;
    }


