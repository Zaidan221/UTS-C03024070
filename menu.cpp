#include <iostream>
#include <conio.h>
using namespace std;


void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Memasukan data"<<"\n";            
cout<<"2. Menampikan data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";   

}
void input (int data[]){
  system("cls");
  cout << "Masukan 5 angka: "; 
  for(int i = 0; i<5; i++){
  cin >> data[i];
}
cout << "Angka telah disimpan";
getch();
}

void output(int data[]){
    system("cls");

    cout << "\nData yang Anda masukkan adalah:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Angka ke-" << (i + 1) << ": " << data[i] << endl;
    }
    getch();
}

void sorting(int data[]) {
    system("cls");
    
    // Exchange Sort
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (data[i] > data[j]) {
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    cout << "Data setelah diurutkan dari kecil ke besar :\n";
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << (i + 1) << ": " << data[i] << endl;
    }
    getch();
}




void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

 void sepatahKata(){
  system("cls");
  cout <<"Indonesia bisa,kita juara\n @poliban";
  getch();
 }

int main() {
char pl;
do
{
    dMenu();
    int data[5];
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    input(data);
    break;
   case '2':
    output(data);
    /* code */ 
    break;  
   case '3':
    sorting(data);
    /* code */
    break;  
   case '4':
    sepatahKata();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}