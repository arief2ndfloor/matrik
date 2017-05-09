#include <iostream>
using namespace std;

int main(){
	int u[10],cari, hitung;
	
	//bool ketemu;
	int nilai = 1;
	
	for(int i=0; i < 10; i++){
		cout << "Masukkan Nilai ke - " << nilai << " Index ke - " << i << " : ";
		cin >> u[i];
		nilai++;
	}
	
	cout << "\nMasukkan Nilai Yang Dicari : ";
	cin >> cari;
	hitung=0;
	
	 for (int i=0; i<10; i++){
            if(cari == u[i]){
		cout << " Data Ditemukan " << endl;
                cout << " Nilai " << cari << " ada pada index ke - " << i << endl;
                hitung ++;
                break;
            }
     }
        if (hitung == 0){
		cout << " Data Tidak Ditemukan " << endl;
            	cout << " angka " << cari << " tidak ada pada array ";
        }
	return 0;
}