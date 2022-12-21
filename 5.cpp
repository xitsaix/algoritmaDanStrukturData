#include <iostream>
using namespace std;

int maksimalAntrianArray = 5, front = 0, rear = 0;
string antrianKasir[5];

bool isFull(){
    if(rear == maksimalAntrianArray){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(){
    if(rear == 0){
        return true;
    }else{
        return false;
    }
}

void enqueue(string data){
    if(isFull()){
        cout << "[!] Antrian penuh [!]" << endl;
    }else{
        if(isEmpty()){
            antrianKasir[0] = data;
            front++;
            rear++;
        }else{
            antrianKasir[rear] = data;
            rear++;
        }
    }
}

void dequeue(){
    if(isEmpty()){
        cout << "Maaf Antrian Kosong" << endl;
    }else{
        for(int i = 0; i < rear; i++){
            antrianKasir[i] = antrianKasir[i+1];
        }rear--;
    }

}

int countQueue(){
    if(isEmpty()){
        return 0;
    }else if(isFull()){
        return maksimalAntrianArray;
    }else{
        return rear;
    }
}

void destroyQueue(){
    if(isEmpty()){
        cout << "Antrian sudah kosong" << endl;
    }else{
        for(int i = 0; i < maksimalAntrianArray; i++){
            if(rear > 1){
                antrianKasir[rear-1] = "";
                rear--;
            }else if(rear == 1){
                antrianKasir[rear-1] = "";
                front = 0;
                rear = 0;
            }
        }
    }
}

void displayQueue(){
    cout << "\n\n---==  Jumlah data pengunjung yang antri: " << countQueue() << " data  ==---";
    cout << "\nData Antrian Kasir: " << endl;
    if(isEmpty()){
        cout << "[!] Data Antrian Kosong [!]" << endl;
    }else{
        for (int i = 0; i < maksimalAntrianArray; i++){
            if(antrianKasir[i] != ""){
                cout << i + 1 << ". " << antrianKasir[i] << endl;
            }else{
                cout << i + 1 << ". " << "Kosong" << endl; 
            }
        }
    }
}


int main(){
    enqueue("Radit");
    displayQueue();
    enqueue("Joni");
    displayQueue();
    enqueue("Ayu");
    displayQueue();
    enqueue("Seno");
    displayQueue();
    enqueue("Citra");
    displayQueue();
    dequeue();
    displayQueue();
    destroyQueue();
    displayQueue();
  
    return 0;
}
