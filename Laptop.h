#ifndef LAPTOP_H
#define LAPTOP_H
#include "laptop.h"
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
class Laptop
{

public:
    string ID;
    string Brand;
    string RAM;
    string Processor;
    string Edition;
    int flag;

    Laptop();


    Laptop(string id, string nm, int ram, string pro, string ed, int flg);

    void get_data();


    void display();

};


#endif // LAPTOP_H
