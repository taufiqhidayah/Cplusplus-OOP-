#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
string namaPlayer;

class Harvest{
  private :
  int energyInit, HappyInit;
  
public:
  Harvest(){
    energyInit;
    HappyInit ;
  }
  Harvest(int hapy, int ener){
    energyInit = ener;
    HappyInit = hapy;
  }
  Harvest(const Harvest &p2){
    energyInit = p2.energyInit;
    HappyInit = p2.HappyInit;
  }
  void setEnregy(int energy){
    this->energyInit = energy;
  }
  int getEnergy(){
    return energyInit;
  }
  
  void setHappy(int happy){
    this->HappyInit = happy;
  }
  int getHappy(){
    return HappyInit;
  }
  void getMenuInside(){
    system("cls");

    cout << "Welcome :"<< namaPlayer<< endl ;
    cout << "Energy :"<< getEnergy()<< endl;
    cout << "Happiners :"<<getHappy()<<endl;
    string menuInside[] ={"1.Socialized","2.Harvest","3.Rest","4. Return to main menu"};
    for (int i =0; i<=3; i++){
      cout<< menuInside[i]<<endl;
    }
    int beginHappy = getHappy();
    int beginEnergy = getEnergy();
    int pilihan;
    cout << "Choose"<<endl;
    
    cin>> pilihan;
    switch(pilihan){
      case 1 :
      cout<< "Meet Neighbour ...";
      cout<<"Happines increas "<< "point"<< "and energy  ";
      if(beginEnergy<100 && beginEnergy>=0&&beginHappy<100 && beginHappy>=0){
        setEnregy(beginEnergy-=10); 
        setHappy(beginHappy+=20);
      }
      system("pause");
      getMenuInside();
      break;
      case 2 :
      cout<< "Harvesting the farm"<<endl;
      cout<< "Haapy decreas 1o energy dec 1o"<<endl;
      if(beginEnergy>=10 && beginHappy>=10){
        setEnregy(beginEnergy-=10); 
        setHappy(beginHappy-=10);
      }
      system("pause");
      getMenuInside();
      break;
      case 3 :
      
      if(beginEnergy <=90){
        cout<< "Energy Increas 2o";
        setEnregy(beginEnergy+=10);
      }else{
        cout<< "You dont need rest again";
      }
      system("pause");
      getMenuInside();
      break;
      case 4 :
      	menuSex();
      break;
    }
  }
  void menuSex(){
    system("cls");
    int pilihan;
	cout<< "Mini Console Harvest Moon"<<endl;
	cout << "========================"<<endl;
    string lisMenuSex[]= {"1. Male","2.Female","3.Exit"};
    for(int i =0; i<=2;i++){
      cout<< lisMenuSex[i]<<endl;
    }
    cin>> pilihan;
    if(pilihan == 1){
    	
      int lenghOfName;
      do{
        cout << "Masukan Nama [3-20]";
        cin >> namaPlayer;
        lenghOfName= namaPlayer.length();
        cout<<lenghOfName;
      }while(lenghOfName >= 20 || lenghOfName<=3);
      Harvest p1(100,100);
      Harvest p2=p1;
      p2.getMenuInside();
	  getMenuInside();
    }
    else if (pilihan == 2){
      int lenghOfName;
      do{
        cout << "Masukan Nama [3-20]";
        cin >> namaPlayer;
        lenghOfName= namaPlayer.length();
        cout<<lenghOfName;
      }while(lenghOfName >= 20 || lenghOfName<=3);
      Harvest p1(100,100);
      Harvest p2=p1;
      p2.getMenuInside();
    }
    else {
      
    }
  }
};

int main(){
    Harvest p1(100,100);
  	p1.menuSex();
  return 0;
}


