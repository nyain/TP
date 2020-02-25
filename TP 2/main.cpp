/*
    Nama: Vincent Williams Jonathan
    NIM: 1301190381
*/
#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    int x;
    List l;
    createList(l);
    address p;
    cout<<"Input 3 angka terakhir NIM anda: ";
    for (int i = 0; i < 3; i++)
    {
        cin>>x;
        p = allocate(x);
        insertFirst(l,p);
        printInfo(l);
    }
    deleteFirst(l,p);
    cout<<"Uji coba delete first: ";
    printInfo(l);
    return 0;
}
