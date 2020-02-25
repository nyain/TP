/*
    Nama: Vincent Williams Jonathan
    NIM: 1301190381
*/
#include <iostream>
#include "list.h"
using namespace std;

void createList(List &L)
{
    first(L) = NULL;
}

address allocate(infotype x)
{
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst(List &L, address p)
{
    next(p) = first(L);
    first(L) = p;
}

void printInfo(List L)
{
    address p = first(L);
    while (p != NULL)
    {
        cout<<info(p)<<", ";
        p = next(p);
    }
    cout<<endl;
}

void deleteFirst(List &L, address &p)
{
    if (first(L)!= NULL)
    {
        p = first(L);
        first(L) = next(p);

        next(p) = NULL;
    }
}

