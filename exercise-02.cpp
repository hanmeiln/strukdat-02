/*
Nama program    : Exercise 02
Nama            : Hana Meilina Fauziyyah
NPM             : 140810180012
Tanggal buat    : 6 Maret 2019
Deskripsi       : Menginput room, seat, dan movie title menggunakan stuct
*************************************************/

#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};

main(){
    Theater jatos;
    jatos.room=7;
    strcpy(jatos.seat, "J9"); //mencopy 2 buah string
    strcpy(jatos.movieTitle, "Adit & Jarwo");

    cout<<jatos.room<<endl;
    cout<<jatos.seat<<endl;
    cout<<jatos.movieTitle<<endl;
}
