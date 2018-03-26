#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int numSpeed;
int gasOil;
int sisaGas;

class oilClass{
	private:
		int gasSisaa;
		int numGas;
	public : 
	
		oilClass(int numgas){
			gasSisaa = numgas;
		}
		void setOil(int numgas){
			this-> gasSisaa= numgas;
		}
		int getOil(){
			return gasSisaa;
		}
		void fungsiDriving(){	
			cetak();
		}
		void fungsiRest(){
			if(getOil() >= 100){
				cout << "Your gas oil is full "<<endl;
				system("pause");
				menuoil();
			}else{
				sisaGas = getOil() +20;
					setOil(sisaGas);
				cout<< sisaGas;
				system("pause");
				menuoil();
			}
		}
		void menuoil(){
				system("cls");
				int pilihan;
					cout << "Your gasoil car :  "<<getOil()<<" liters"<< endl;
					cout <<"-------------------------"<<endl;
					
				char* menuUtama[]={"1. Start driving", "2. Rest", "3. Exit"};
				for (int i=0 ;i<3; i++){
					cout<< menuUtama[i]<< endl;
				}
				cout<< "Masukan Pilihan";
				cin >> pilihan;
				if(pilihan==1) fungsiDriving();
				if(pilihan==2) fungsiRest();
		}
		void cetak(){
			system("cls");
			int sisaGas;
			rand();
			numSpeed = rand() % 100;
			cout<<"Your speed is = "<< numSpeed<<endl;
			if(numSpeed <= 50){
				if (getOil() < 20){
					cout<< "your gas oil not enouht"<<endl;
					
				}else{
				sisaGas = getOil()-20;
					setOil(sisaGas);
				cout<< "you have spent 20 litera gasoil"<<endl;
				}
			}
			else if(numSpeed >= 50){
				if (getOil()< 40){
					cout<< "your gas oil not enouht"<<endl;
				}else{
				sisaGas= getOil()-40;
				cout<< sisaGas;
				setOil(sisaGas);
				cout<< "you have spent 40 litera gasoil"<<endl;
				}
			}
		
			system("pause");
			menuoil();
		}
};

int main(){
	oilClass p(100);	
	p.menuoil();
	return 0;
}
