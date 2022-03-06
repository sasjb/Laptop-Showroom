#include <iostream>
#include "customer.h"
#include "salesman.h"
#include "laptop.h"
using namespace std;

int main()
{

    cout<< "\n\t               WELCOME TO MY PROJECT\t\n" <<endl
        << "                         MY PROJECT IS" <<endl
        << "                        LAPTOP SHOWROOM " <<endl;

    int n=0;

 Customer c1;

      int s;
      abc:
      cout<<"Log in as Salesman or Customer\n\nChoose One Option:\n\n1. For Salesman\n2.For Customer\n";
      cin>>s;
      if(s==2)
      {
          c1.get_data();
          goto abc;
      }
    Salesman *e[100];

    do
    {
        cout << "\n\n\t\tMENU\t\t"<<endl

             << "\t\t1.Add New Record"  << endl
             << "\t\t2.Edit Record"     << endl
             << "\t\t3.Display Record"  << endl
             << "\t\t4.Search Record"  << endl
             << "\t\t5.Delete Record"  << endl
             << "\t\tOtherwise------>Exit\n\n"  << endl;

        cout << "Enter Your option: ";

        int option;
        cin >> option;

        if(option == 1)
        {

            e[n]=new Salesman;
            e[n]->get_data();
            e[n]->flag = 1;
            n++;
        }

        if(option == 2)
        {
            cout << "Enter ID to Edit: ";
            string id;
            cin >> id;
            int found = false;
            for(int i = 0; i < n; i ++)
            {
                if(e[i]->flag==0)
                    continue;
                if(id == e[i]->ID)
                {
                    e[i]->get_data();
                    found = true;
                    break;

                }
            }
        }

        if(option == 3)
        {
            int cnt = 0;
            for(int i = 0; i <n; i ++)
            {
                if(e[i]->flag==0)
                    continue;
                e[i]->display();
            }
        }

        if(option == 4)
        {
            cout << "Enter ID to Search: ";
            string id;
            cin >> id;
            int found = false;
            for(int i = 0; i < n; i ++)
            {
                if(e[i]->flag==0)
                    continue;
                if(id == e[i]->ID)
                {
                    e[i]->display();
                    found = true;

                }
            }
        }

        else if(option==5)
        {
            string id;
            cout<<"Enter ID: ";
            cin>>id;
            int found = false;

            for(int i=0; i<n; i++)
            {
                if(e[i]->flag==0)
                    continue;

                if(id==e[i]->ID)
                {
                    found = true;
                    e[i]->flag = false;
                }
            }
            if(!found)
                cout << "Not found" << endl;
            else
                cout << "Successfully Deleted" << endl;
        }

        int opt;
        cout << "\t\tGo To:---->" << endl
             << "\t\t\t1. Menu" << endl
             << "\t\t\t0. Exit" << endl
             << "\t\t\tEnter the Choice: ";

        cin>>opt;
        if(opt==1)
            continue;
        else if(opt==0)
        {
            break;
        }
        else
            cout << "Invalid Option" << endl << endl;
    }

    while(1);
    fstream file;
    file.open("sakib.txt", ios::out );

    for(int i=0; i<n; i++)
    {
        file << e[i]->ID << endl;
        file << e[i]->Brand << endl;
        file << e[i]->RAM << endl;
        file << e[i]->Processor << endl;
        file << e[i]->Edition << endl;
        file << e[i]->eID << endl;
        file << e[i]->salary << endl;
        file << e[i]->Experience << endl;
    }
    file.close();

    return 0;
}
