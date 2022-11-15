#include <iostream>
using namespace std;

struct dosen{

    int nidn;
    string nama, alamat;

    dosen *next;
};

dosen *head, *tail, *cur, *newNode, *newerNode;

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
  newNode-> next = newerNode;
  head = newNode;
}

void addFirster(int nidn, string nama, string alamat){
  newerNode = new dosen();
  newerNode->nidn = nidn;
  newerNode->nama = nama;
  newerNode->alamat = alamat;
  newerNode-> next = NULL;
  head = newerNode;
}

void printSingleLinkedList(){
  cur = head;
    while (cur!= NULL){
        cout << "\nNIDN       : " << cur->nidn << endl;
        cout << "Nama Dosen : " << cur->nama << endl;
        cout << "Alamat     : " << cur->alamat << endl;
        cur = cur->next;
    }
}

int main()
{
  createSingleLinkedList(322104, "Akbar Reihan", "Demak");
  printSingleLinkedList();
  addFirst(322105, "Osama bin Laden", "Kudus");
  printSingleLinkedList();
  addFirster(322106, "Pebrianto", "Jepara");
  printSingleLinkedList();
  
  return 0;
}
