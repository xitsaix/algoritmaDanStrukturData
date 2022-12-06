#include <iostream>
using namespace std;

struct dosen{

    int nidn;
    string nama, alamat;

    dosen *next;
};

dosen  *head, *tail, *cur, *newNode, *del, *before;

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

int countSingleLinkedList(){
  cur = head;
  int jumlah = 0;
  while(cur!=NULL){
    jumlah++;
    cur = cur->next;
    }
  return jumlah;
}

//kok bedaa
void addMiddle(int nidn, string nama, string alamat, int posisi){
  if(posisi < 1 || posisi > countSingleLinkedList()){
    cout << "[!] tdk bisa nambah karena posisi di luar jangkauan [!]" << endl;
   } else if(posisi == 1){
    cout << "[!] tdk bisa nambah karena posisi tidak di tengah [!]" << endl;
  } else{
  
  newNode = new dosen();
  newNode->nidn = nidn;
  newNode->nama = nama;
  newNode->alamat = alamat;
  cur = head;
  int nomor = 1;
  while (nomor < posisi-1){
    cur = cur->next;
    nomor++;
  }
  newNode->next = cur->next;
  cur->next = newNode;
}
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

void removeMiddle(int posisi){
  if(posisi < 1 || posisi > countSingleLinkedList()){
    cout << "[!] tdk bsa dihps krn di luar jangkauan [!]" << endl;
   } else if(posisi == 1){
    cout << "[!] posisi node yg dihps tidak di tengah [!]" << endl;
  } else{
    
  int nomor = 1;
  cur = head;
  while(nomor <= posisi){
    if(nomor == posisi-1){
      before = cur;
    }
    if(nomor == posisi){
      del = cur;
    }
    cur = cur->next;
    nomor++;
  }
  before->next = cur;
  delete del;
}
  }

void changeMiddle(int nidn, string nama, string alamat, int posisi){
  if(posisi < 1 || posisi > countSingleLinkedList()){
    cout << "[!] posisi di luar jangkauan [!]" << endl;
   } else if(posisi == 1 || posisi > countSingleLinkedList()){
    cout << "[!] posisi tidak di tengah [!]" << endl;
  }else{
  cur = head;
  int nomor = 1;
  while(nomor < posisi){
      cur = cur -> next;
      nomor++;
    }
    cur->nidn = nidn;
    cur->nama = nama;
    cur->alamat = alamat;
    }
}

void changeFirst(int nidn, string nama, string alamat){
  head->nidn = nidn;
  head->nama = nama;
  head->alamat = alamat;
}

void changeLast(int nidn, string nama, string alamat){
  tail->nidn = nidn;
  tail->nama = nama;
  tail->alamat = alamat;
}

void printSingleLinkedList(){
  cout << "[ Jumlah node ada " << countSingleLinkedList() << " ]\n";
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
  createSingleLinkedList(042001, "Munajad L", "KarangLawas");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  addFirst(042002, "Henny Risnawati", "Ilmu Komputer");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  addLast(042003, "Rani Indriyani", "Bisnis Digital");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  deleteFirst();
  printSingleLinkedList();
  cout << "\n\n\n\n";
  deleteLast();
  printSingleLinkedList();
  cout << "\n\n\n\n";
  changeFirst(042004, "Osama bin Laden", "Mesir");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  addLast(042005, "Yi Akbar", "Arab");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  changeLast(042005, "Yi Akbar", "Arab");
  printSingleLinkedList();
  addMiddle(042011, "Al Nawab", "Jawa Utara", 2);
  printSingleLinkedList();
  cout << "\n\n\n\n";
  //removeMiddle(2);
  //printSingleLinkedList();
  //cout << "\n\n\n\n";
  addLast(042006, "Febri Yulianti", "Jepara Pinggiran");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  removeMiddle(1);
  printSingleLinkedList();
  cout << "\n\n\n\n";
  addMiddle(042006, "Febri Yulianti", "Jepara Pinggiran", 0);
  printSingleLinkedList();
  cout << "\n\n\n\n";
  changeMiddle(042005, "Yi Akbar", "Arab",1);
  printSingleLinkedList();
  cout << "\n\n\n\n";
  
  return 0;
}
