#include<iostream>
#include<conio.h>
#define MAX 5
using namespace std;
 
struct Stack {
    int top, data[MAX];
} Tumpukan;
 
void init() {
    Tumpukan.top = -1;
}
 
bool isEmpty() {
    return Tumpukan.top == -1;
}
 
bool isFull() {
    return Tumpukan.top == MAX -1;
}
 
void push() {
    if (isFull()) {
        cout << "\tStack Penuh" << endl;
    } else {
        Tumpukan.top++;
        cout << "\nMasukkan data = ";
        cin >> Tumpukan.data[Tumpukan.top];
        cout << "\n--- Data '" << Tumpukan.data[Tumpukan.top] << "' masuk ke stack -"
             << endl;
    }
}
 
void pop() {
    if (isEmpty()) {
        cout << "\tStack Is Empty !! " << endl;
    } else {
        cout << "\n--- Data '" << Tumpukan.data[Tumpukan.top] << "' keluar dari stack -"
             << endl;
        Tumpukan.top--;
    }
}
 
void printStack() {
    if (isEmpty()) {
        cout<< "\tStack Kosong\n";
    } else {
        cout << "Data Stack : ";
        for (int i = Tumpukan.top; i >= 0; i--)
            cout << Tumpukan.data[i] << ((i == 0) ? "" : ",");
    }
}
 
void Clear()
{
    if (isEmpty()){
        cout<< "\tTidak Ada Data\n";
    }else{  
        Tumpukan.top=-1;
        cout<<"\nSemua Data Dalam Stack Akan Di HAPUS, Silahkan Tekan 'Enter'\n";
    }
}
 
void Search()
{
    int cari, ketemu = 0;
    if(isEmpty())
    {
        cout<< "\tTidak Ada Data\n";
    }else{
        cout << "\n\nMasukkan nilai data yang akan dicari = "; cin >> cari;
        for (int i = 0; i<Tumpukan.top; i++) {
            if (cari == Tumpukan.data[i]) {
                cout << "\nNilai " << cari << " ditemukan pada index = " << i <<endl;
                ketemu = 1; 
            }
        }
    if (ketemu == 0) cout << "Maaf data yang Anda cari tidak ada !!";
    }
}
 
 

int main() {
	int pilihan, data;
	init();
	do {
        cout<<"\tPROGRAM STACK\n"<<endl;
		printStack();
		cout<<"\nMasukkan Tumpukan Hingga MAX 5 Tumpukan\n "<<endl;
		cout << "1. Push Data (Input)\n"
			 << "2. Pop Data (Hapus)\n"
			 << "3. Print (Cetak)\n"
			 << "4. Clear Semua Stack\n"
			 << "5. Search Stack\n"
			 << "Masukkan Pilihan: ";
		cin >> pilihan;
		switch (pilihan) {
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printStack();
			break;
		case 4:
			Clear();
			break;
		case 5:
			Search();
			break;
		default:
			cout << "Pilihan tidak tersedia" << endl;
			break;
		}
		cout<<"\nTekan 'ENTER' untuk melanjutkan"<<endl;
		getch();
		system("cls");
	} while (pilihan != 9);
}
