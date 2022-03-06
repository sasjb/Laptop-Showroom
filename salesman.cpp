#include "salesman.h"
Salesman::  Salesman(string eid, string d, string desg, double salary, int exp)
    {
        eID = eid;

        salary = salary;
        Experience = exp;
    }
void Salesman::  get_data()
    {

        cout << "\nEnter Salesman ID : ";
        cin >> eID;
        cout << "\nEnter Salary: ";
        cin >> salary;
        cout << "\nEnter Experience (In Years): ";
        cin >> Experience;
        Laptop :: get_data();
    }
 void  Salesman:: display()
    {

        cout << "Salesman ID: " << eID << endl;
        cout << "Salesman Salary: " << salary << endl;
        cout << "Salesman Experience:  " << Experience << endl;
           Laptop :: display();
    }
 Salesman::Salesman()
    {
        eID = "";
        salary = 0.00;
        Experience = 0;
    }

