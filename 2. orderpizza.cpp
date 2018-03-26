#include <iostream>
#include <stdlib.h>
using namespace std;

const int hargaMeata = 80000;
	class Pizza {
	private :
	int pizzaMeat,pizzaVegan;
	int totalPrice;

	public :
	int getpizzaMeat(){
		return kindMeat;
	}
	void setpizzaMeat(int pizzaMeat){
		this->pizzaMeat = pizzaMeat;
	}

	int getpizzaVegan(){
		return kindVege;
	}
	void setpizzaVegan(int pizzaVegan){
		this->pizzaVegan = pizzaVegan;
	}

	int getTotalPrice(){
		return this->totalPrice = (hargaMeata *kindMeat) + (hargaVegana* kindVege);;
	}

};





void menu();
void orderPizza();
void payPizza();

int main() {
	menu();

	return 0;
}

void menu(){
	system("cls");
	cout<< "Welcome to Yummy PH"<<endl;
	cout<< "==================="<<endl;
	int pilihan;
	char* menu[] ={"1. Order Pizza","2. Pay","3. Exit"};
	for (size_t i = 0; i < 3; i++) {
		cout << menu[i]<< '\n';
	}
	cout<<"Choose :";
	cin>> pilihan;

	if(pilihan==1) orderPizza();
	if(pilihan==2) payPizza();



}
void orderPizza(){
	system("cls");
	cout<< "Choose and order"<<endl;
	cout<< "==================="<<endl;
	int pilPizza;

	char* kindOfPizza[]= {"1. Meat Lover Pizza 8oK ", "2. Vegetarian Pizza "};
	for (size_t i = 0; i < 2; i++) {
		cout<< kindOfPizza[i]<<endl;
	}
	cin>> pilPizza;
	while(pilPizza !=1 && pilPizza !=2){

		for (size_t i = 0; i < 2; i++) {
			cout<< kindOfPizza[i]<<endl;
		}
		cin>> pilPizza;
	}
		Pizza p;
		if (pilPizza==1){
			p.setpizzaMeat(kindMeat++);
		}else if (pilPizza==2){
			p.setpizzaVegan(kindVege++);
		}
	
	system("pause");
	menu();

}

void payPizza(){
	system("cls");
	Pizza p;

	if(kindMeat==0 && kindVege==0 ){
		cout<<"You are not buy anything"<<endl;
		system("pause");
		menu();
	}else{

		cout<<"You have ordered " << p.getpizzaMeat() << " and " << p.getpizzaVegan() <<" Vegetarian Pizza "<<'\n';
		cout << "Total Price" <<p.getTotalPrice()<<endl;
		cout<<"Input your money [minimum Rp."<< p.getTotalPrice() <<"] : "<<endl;
		cin>>totalCash;
		
		while (totalCash < p.getTotalPrice()){
			cout<<"Input your money [minimum Rp." << p.getTotalPrice() <<"] : "<<endl;
			cin>>totalCash;

		}

	

		cout<<"Your change : "<< totalCash - p.getTotalPrice()<<endl ;
		cout<<"Thanks...";
		kindMeat = 0;
		kindVege =0;
		system("pause");
		menu();
	}
}
