#include <iostream>

using namespace std;

//deklarasi single
struct Mahasiswa{
    //komponen member
    int nim;
    string nama, prodi;

    Mahasiswa *next;
};
int main()
{
    //inisialisasi single linked list
    Mahasiswa *node1,*node2, *node3;

    node1 = new Mahasiswa();
    node2 = new Mahasiswa();
    node3 = new Mahasiswa();

    // pengisian node
    node1->nim = 112;
    node1->nama = "Andreas";
    node1->prodi = "Ilmu Komputer";
    node1->next = node2;

    //pengisian node2
    node2->nim = 113;
    node2->nama = "Riza Setiawan";
    node2->prodi = "Sistem Informasi";
    node2->next = node3;

    //pengisian node3
    node3->nim = 114;
    node3->nama = "Dewi Hasanah";
    node3->prodi = "Bisnis Digital";
    node3->next = NULL;

    //mencetak single linked list
    Mahasiswa *cur;
    cur = node1;
    while (cur!= NULL){
        cout << "NIM : " << cur->nim << endl;
        cout << "Nama Mahasiswa : " << cur->nama << endl;
        cout << "Program Studi : " << cur->prodi << endl;
        cur = cur->next;
    }

    return 0;
}

