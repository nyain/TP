/*
    Nama: Vincent Williams Jonathan
    NIM: 1301190381
*/
#include "doublelinkedlist.h"
#include <iostream>

using namespace std;

bool isEmpty(list L)
{
    return first(L) == NULL && last(L) == first(L);
}
void createList(list &L)
{
    first(L)=NULL;
    last(L)=NULL;
}
void createNewElmt (infotype X,address &P)
{
    P = new elmList;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
}
void insertFirst(list &L, address P)
{
    if (first(L) != NULL)
    {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
    else
    {
        first(L) = P;
        last(L) = P;
    }
}
void insertAfter(list &L,address &Prec,address P)
{
    next(P) = next(Prec);
    prev(P) = Prec;
    prev(next(Prec)) = P;
    next(Prec) = P;
}
void insertLast(list &L, address P)
{
    if (first(L) == NULL)
    {
        insertFirst(L,P);
    }
    else if (last(L) != NULL)
    {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}
void deleteFirst(list &L, address P)
{
    if (first(L)!= NULL)
    {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
        prev(P) = NULL;
    }
    else if (first(L) == last(L))
    {
        P = first(L);
        first(L) = NULL;
        last(L) = NULL;
    }
}
void deleteAfter(list &L,address Prec,address &P)
{
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    next(P) = NULL;
    prev(P) = NULL;
}
void deleteLast(list &L, address &P)
{
    if (last(L)!=NULL)
    {
        P = last(L);
        last(L) = prev(P);
        prev(P) = NULL;
        next(last(L))=NULL;
    }
    else if(last(L) == first(L))
    {
        P= last(L);
        first(L) = NULL;
        last(L) = NULL;
    }
}
void concat(list L1, list L2, list &L3)
{
    address P ;
    address Q ;

    if ((first(L1) != NULL) && (first(L2)!= NULL))
    {
        P = first(L1);
        while(P != NULL)
        {
            Q = P;
            P = next(P);
            insertLast(L3,Q);
            deleteFirst(L1,Q);
        }
        P = first(L2);
        while(P != NULL)
        {
            Q = P;
            P = next(P);
            insertLast(L3,Q);
            deleteFirst(L2,Q);
        }
    }
}
float median(list L)
{
    address Q = first(L);
    int Count = 0;
    int i;
    while (Q != NULL)
    {
        Count++;
        Q = next(Q);
    }
    int median = Count / 2;
    if (Count % 2 == 1)
    {
        i = 0;
        address P = first(L);
        while (median > i)
        {
            P = next(P);
            i++;
        }
        median++;
        return info(P);
    }
    else
    {
        i = 1;
        address P=first(L);
        while (median > i)
        {
            P = next(P);
            i++;
        }
        int head = info(P);
        int tail = info(next(P));
        float sum = (head+tail)/2;
        return sum;
    }
}
void printList(list L)
{
    address P=first(L);
    while (P!=NULL)
    {
        cout<<info(P)<<", ";
        P = next(P);
    }
    cout<<endl;
}

address searching(list &L, infotype X)
{
    address P = first(L);

    while(P != NULL && info(P)!= X)
    {
        P = next(P);
    }
    if (info(P)==X)
    {
        return P;
    }
    else
    {
        P = NULL;
    }
    return P;
}
