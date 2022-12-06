#include <iostream>
using namespace std;

struct Mahasiswa{

    int nim;
    string nama, prodi;

    Mahasiswa *next;
};

Mahasiswa *head, *tail, *cur, *newNode, *del, *before;

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
void addMiddle(int nim, string nama, string prodi, int posisi){
  if(posisi < 1 || posisi > countSingleLinkedList()){
    cout << "[!] tdk bisa nambah karena posisi di luar jangkauan [!]" << endl;
   } else if(posisi == 1){
    cout << "[!] tdk bisa nambah karena posisi tidak di tengah [!]" << endl;
  } else{
  
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

void changeMiddle(int nim, string nama, string prodi, int posisi){
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
    cur->nim = nim;
    cur->nama = nama;
    cur->prodi = prodi;
    }
}

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

void printSingleLinkedList(){
  cout << "[ Jumlah node ada " << countSingleLinkedList() << " ]\n";
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
  cout << "\n\n\n\n";
  addFirst(102, "Henny Risnawati", "Ilmu Komputer");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  addLast(102, "Rani Indriyani", "Bisnis Digital");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  deleteFirst();
  printSingleLinkedList();
  cout << "\n\n\n\n";
  deleteLast();
  printSingleLinkedList();
  cout << "\n\n\n\n";
  changeFirst(104, "Rahmat Wijaya", "Sistem Informasi");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  addLast(105, "Winny Ekawati", "Bisnis Digital");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  changeLast(105, "Winny Eka Putri", "Bisnis Digital\n");
  printSingleLinkedList();
  addMiddle(111, "Ahmad Fuadi", "Ilmu Komputer", 2);
  printSingleLinkedList();
  cout << "\n\n\n\n";
  //removeMiddle(2);
  //printSingleLinkedList();
  //cout << "\n\n\n\n";
  addLast(106, "Alex Saputra", "Sistem Informasi");
  printSingleLinkedList();
  cout << "\n\n\n\n";
  removeMiddle(1);
  printSingleLinkedList();
  cout << "\n\n\n\n";
  addMiddle(106, "Alex Saputra", "Sistem Informasi", 0);
  printSingleLinkedList();
  cout << "\n\n\n\n";
  changeMiddle(105, "Winny Eka Putriiiii", "Bisnis Digital",1);
  printSingleLinkedList();
  cout << "\n\n\n\n";
  
  return 0;
}
