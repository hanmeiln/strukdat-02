/*
Nama program    : Exercise 01
Nama            : Hana Meilina Fauziyyah
NPM             : 140810180012
Tanggal buat    : 6 Maret 2019
Deskripsi       : Menginput nama, umur, goldar, dan jenis kelamin menggunakan stuct
*************************************************/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char jk[10];
    char goldar[10];
};

main(){
    Orang orang;
    orang.umur=19;
    strcpy(orang.nama, "hana"); //mencopy 2 buah string
    strcpy(orang.jk, "p");
    strcpy(orang.goldar, "AB");

    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.jk<<endl;
    cout<<orang.goldar<<endl;
}
