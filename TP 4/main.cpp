/*
    Nama: Vincent Williams Jonathan
    NIM: 1301190381
*/
#include <iostream>
#include "doublelinkedlist.h"
using namespace std;

int main()
{
    list L1,L2,L3;
    address a,b;
    infotype input;
    int i;

    createList(L1);
    createList(L2);
    createList(L3);

    cout<<"Test insertFirst(L1): ";
    for (i=0; i<4; i++)
    {
        cin>>input;
        createNewElmt(input,a);
        insertFirst(L1,a);
    }
    cout<<endl;
    cout<<"L1: ";
    printList(L1);
    cout<<"After: ";
    cin>>input;
    b = searching(L1,input);
    cout<<"Input untuk insertAfter: ";
    cin>>input;
    createNewElmt(input,a);
    insertAfter(L1,b,a);
    cout<<"Hasil insertAfter(L1): ";
    printList(L1);
    cout<<"deleteFirst: ";
    deleteFirst(L1,a);
    printList(L1);
    cout<<endl;
    cout<<"Test insertLast(L2): ";
    for (i=0; i<4; i++)
    {
        cin>>input;
        createNewElmt(input,a);
        insertLast(L2,a);
    }
    cout<<"L2: ";
    printList(L2);
    cout<<"After: ";
    cin>>input;
    b = searching(L2,input);
    deleteAfter(L2,b,a);
    cout<<"Tes deleteAfter : ";
    printList(L2);
    cout<<"Tes deleteLast : ";
    deleteLast(L2,a);
    printList(L2);
    cout<<endl;

    cout<<"L3 (L1 + L2):";
    concat(L1,L2,L3);
    printList(L3);
    cout<<endl;

    cout<<"Median L3: ";
    cout<<median(L3);
    return 0;
}
