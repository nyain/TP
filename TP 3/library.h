/*
    Nama: Vincent Williams Jonathan
    NIM: 1301190381
*/
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
using namespace std;

struct buku{
  string ID, judul, pengarang, penerbit;
  int tahun;
};

typedef buku infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct List{
    address first;
    address last;
};

void buatList(List &L);
bool listKosong(List L);
address cariElemen(List L, string x);

void buatElemen(address &P, string ID, string judul, string pengarang, string penerbit, int tahun);
void tambahDataTerakhir(List &L, address P);
void tambahDataSetelah(List &L, address Prec, address P);
void hapusDataTerakhir(List &L, address P);
void lihatList(List L);
int jumBuku(List L, int thn);
