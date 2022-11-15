#include <iostream>
using namespace std;

struct Mahasiswa{

    int nim;
    string nama, prodi;

    Mahasiswa *next;
};

Mahasiswa *head, *tail, *cur, *newNode;

void createSingleLinkedList (int nim, string nama, string prodi){
  head = new Mahasiswa();
  head->nim = nim;
  head->nama = nama;
  head->prodi = prodi;
  head->next = NULL;
  tail = head;
}

void addFirst(int nim, string nama, string prodi){
  newNode = new Mahasiswa();
  newNode->nim = nim;
  newNode->nama = nama;
  newNode->prodi = prodi;
  newNode-> next = head;
  head = newNode;
}

void printSingleLinkedList(){
  cur = head;
    while (cur!= NULL){
        cout << "\nNIM: " << cur->nim << endl;
        cout << "Nama Mahasiswa: " << cur->nama << endl;
        cout << "Program Studi: " << cur->prodi << endl;
        cur = cur->next;
    }
}

int main()
{
  createSingleLinkedList(101, "Roni Saputra", "Sistem Informasi");
  printSingleLinkedList();
  addFirst(102, "Henny Risnawati", "Ilmu Komputer");
  printSingleLinkedList();
  
  return 0;
}
