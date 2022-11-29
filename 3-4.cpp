#include <iostream>
using namespace std;

struct Mahasiswa{

    int nim;
    string nama, prodi;

    Mahasiswa *next;
};

Mahasiswa *head, *tail, *cur, *newNode, *del;

void changeFirst(int nim, string nama, string prodi){
  head->nim = nim;
  head->nama = nama;
  head->prodi = prodi;
}

void changeLast(int nim, string nama, string prodi){
  tail->nim = nim;
  tail->nama = nama;
  tail->prodi = prodi;
}

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

void addMiddle(int nim, string nama, string prodi, int posisi){
  newNode = new Mahasiswa();
  newNode->nim = nim;
  newNode->nama = nama;
  newNode->prodi = prodi;
  cur = head;
  int nomor = 1;
  while (nomor < posisi-1){
    cur = cur->next;
    nomor++;
  }
  newNode->next = cur->next;
  cur->next = newNode;
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
  cout << "\n\n\n";
  changeFirst(104, "Rahmat Wijaya", "Sistem Informasi");
  printSingleLinkedList();
  cout << "\n\n\n";
  addLast(105, "Winny Ekawati", "Bisnis Digital");
  printSingleLinkedList();
  cout << "\n\n\n";
  changeLast(105, "Winny Eka Putri", "Bisnis Digital");
  printSingleLinkedList();
  addMiddle(111, "Ahmad Fuadi", "Ilmu Komputer", 1);
  printSingleLinkedList();
  cout << "\n\n\n";
  
  return 0;
}
