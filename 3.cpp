#include <iostream>
using namespace std;

struct Mahasiswa{

    int nim;
    string nama, prodi;

    Mahasiswa *next;
};

Mahasiswa *head, *tail, *cur, *newNode, *del;

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

void addLast(int nim, string nama, string prodi){
  newNode = new Mahasiswa();
  newNode->nim = nim;
  newNode->nama = nama;
  newNode->prodi = prodi;
  newNode-> next = NULL;
  tail->next = newNode;
  tail = newNode;
}

void deleteFirst(){
  del = head;
  head = head->next;
  delete del;
}

void deleteLast(){
  del = tail;
  cur = head;
  while(cur->next != tail){
    cur = cur->next;
  }
  tail = cur;
  tail->next = NULL;
  delete del;
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
  cout << "\n\n\n";
  addFirst(102, "Henny Risnawati", "Ilmu Komputer");
  printSingleLinkedList();
  cout << "\n\n\n";
  addLast(102, "Rani Indriyani", "Bisnis Digital");
  printSingleLinkedList();
  cout << "\n\n\n";
  deleteFirst();
  printSingleLinkedList();
  cout << "\n\n\n";
  deleteLast();
  printSingleLinkedList();
  
  return 0;
}
