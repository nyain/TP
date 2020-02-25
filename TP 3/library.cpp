/*
    Nama: Vincent Williams Jonathan
    NIM: 1301190381
*/
#include "library.h"

void buatList(List &L)
{
    first(L) = NULL;
    last(L) = NULL;
}

bool listKosong(List L)
{
    if(first(L) == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

address cariElemen(List L, string x)
{
    address P = first(L);
    while (P != NULL && info(P).penerbit != x)
    {
        P = next(P);
    }
    return P;
}

void buatElemen(address &P,string ID, string judul,string pengarang,string penerbit,int tahun)
{
    P = new elmlist;
    info(P).ID = ID;
    info(P).judul = judul;
    info(P).pengarang = pengarang;
    info(P).penerbit = penerbit;
    info(P).tahun = tahun;
    next(P) = NULL;
}

void tambahDataTerakhir(List &L, address P)
{
    if (first(L) == NULL)
    {
        next(P) = first(L);
        first(L) = P;
        last(L) = first(L);
    }
    else
    {
        next(last(L)) = P;
        last(L) = P;
    }
}

void tambahDataSetelah(List &L, address Prec, address P)
{
    if (Prec != NULL)
    {
        if (Prec == NULL)
        {
            next(P) = first(L);
            first(L) = P;
            last(L) = first(L);
        }
        else if(next(Prec) != NULL)
        {
            next(P) = next(Prec);
            next(Prec) = P;
        }
        else
        {
            next(last(L)) = P;
            last(L) = P;
        }
    }
}

void hapusDataTerakhir(List &L, address P)
{
    address Q = first(L);
    if (next(Q) == NULL)
    {
        P = first(L);
        first(L) = next(P);
        last(L) = first(L);
        next(P) = NULL;
    }
    else
    {
        while (next(next(Q)) != NULL)
        {
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = NULL;
        last(L) = Q;
    }
}

void lihatList(List L)
{
    address P = first(L);
    while (P != NULL)
    {
        cout<<info(P).ID<<" "<< info(P).judul<<" "<< info(P).pengarang<<endl;
        P = next(P);
    }
    cout<<endl;
}

int jumBuku(List L, int thn)
{
    int i = 0;
    address P = first(L);
    while (P != NULL)
    {
        if (info(P).tahun <= thn)
        {
            i++;
        }
        P = next(P);
    }
    return i;
}
