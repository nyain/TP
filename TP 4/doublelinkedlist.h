/*
    Nama: Vincent Williams Jonathan
    NIM: 1301190381
*/
#ifndef DOUBLELINKEDLIST_H_INCLUDED
#define DOUBLELINKEDLIST_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev
#define last(L) L.last

using namespace std;

typedef int infotype;
typedef struct elmList *address;
struct elmList
{
    infotype info;
    address prev;
    address next;
};
struct list
{
    address first;
    address last;
};
bool isEmpty(list L);
void createList(list &L);
void createNewElmt(infotype X,address &P);
void insertFirst(list &L, address P);
void insertAfter(list &L,address &Prec,address P);
void insertLast(list &L, address P);
void deleteFirst(list &L, address P);
void deleteAfter(list &L,address Prec,address &P);
void deleteLast(list &L, address &P);
void concat(list L1, list L2, list &L3);
float median(list L);
void printList(list L);
address searching(list &L, infotype X);
#endif // DOUBLELINKEDLIST_H_INCLUDED

