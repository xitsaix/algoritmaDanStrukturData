#include <iostream>
using namespace std;

struct dosen{

    int nidn;
    string nama, alamat;

    dosen *next;
};

dosen *head, *tail, *cur, *newNode, *del;

void createSingleLinkedList (int nidn, string nama, string alamat){
  head = new dosen();
  head->nidn = nidn;
  head->nama = nama;
  head->alamat = alamat;
  head->next = NULL;
  tail = head;
}

void addFirst(int nidn, string nama, string alamat){
  newNode = new dosen();
  newNode->nidn = nidn;
  newNode->nama = nama;
  newNode->alamat = alamat;
  newNode-> next = head;
  head = newNode;
}

void addLast(int nidn, string nama, string alamat){
  newNode = new dosen();
  newNode->nidn = nidn;
  newNode->nama = nama;
  newNode->alamat = alamat;
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
        cout << "\nNIDN: " << cur->nidn << endl;
        cout << "Nama Dosen: " << cur->nama << endl;
        cout << "Alamat: " << cur->alamat << endl;
        cur = cur->next;
    }
}


int main()
{
  createSingleLinkedList(320211108, "Febri Yulianti", "Belimbing Rejo");
  printSingleLinkedList();
  cout << "\n\n\n";
  addFirst(320211109, "Osama bin Laden", "Jati Kulon");
  printSingleLinkedList();
  cout << "\n\n\n";
  addLast(320211110, "Yi Akbar Munajad", "Karanganyar Lama");
  printSingleLinkedList();
  cout << "\n\n\n";
  deleteFirst();
  printSingleLinkedList();
  cout << "\n\n\n";
  deleteLast();
  printSingleLinkedList();
  
  return 0;
}
