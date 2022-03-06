#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "laptop.h"

class Customer:public Laptop
{
private:
    string cname;
    string caddress;
    int cid;
    int cphone;
public:
//  virtual show_data()=0;
    static int count ;
  void get_data();
};
#endif // CUSTOMER_H
