/*
    Nama: Vincent Williams Jonathan
    NIM: 1301190381
*/
#include "library.h"

int main()
{
    List L;
    address ad,adbaru;
    buatList(L);

    buatElemen(ad,"id01","buku1","anna","informatika",2017);
    tambahDataTerakhir(L,ad);
    buatElemen(ad,"id03","buku3","cikita","gramedia",2018);
    tambahDataTerakhir(L,ad);
    lihatList(L);
    ad = cariElemen(L,"informatika");
    buatElemen(adbaru,"id02","buku2","bana","informatika",2018);
    tambahDataSetelah(L,ad,adbaru);
    lihatList(L);
    ad = cariElemen(L, "penerbit");
    buatElemen(adbaru,"id05","buku5","wafa","informatika",2018);
    tambahDataSetelah(L,ad,adbaru);
    lihatList(L);

    hapusDataTerakhir(L,ad);
    lihatList(L);

    cout << "Jumlah buku yang terbit sebelum tahun 2015 yaitu "<<jumBuku(L,2015)<<endl;
    cout << "Jumlah buku yang terbit sebelum tahun 2018 yaitu "<<jumBuku(L,2018)<<endl;
    return 0;
}
