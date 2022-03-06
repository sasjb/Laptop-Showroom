#ifndef SALESMAN_H
#define SALESMAN_H
#include "salesman.h"
#include "laptop.h"
class Salesman : public Laptop
{
public:
    string eID;
    double salary;
    int Experience;
    Salesman();
    Salesman(string eid, string d, string desg, double salary, int exp);

    void get_data();

    void display();

};

#endif // SALESMAN_H
