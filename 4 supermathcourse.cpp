#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>      // std::setfill, std::setw

using namespace std;

int count;
class converNumber {
  public :
  string nama;
  int num;
  public :
  
  void setNama(string nama){
    this-> nama =nama;
  }
  string getNama(){
    return nama;
  }
  void setNum(int num){
    this -> num = num;
  }
  int getNum(){
    return num;
  }
  
};

void hexa( int value);
void oktal( int p);
void printNumberConvert();
void menuUtama();
converNumber p;

int main(){
  menuUtama();
  return 0;
}
void hexa(int value){
  if (value == 0)
  return;
  
  int rem = value % 16;
  value /= 16;
  hexa(value);
  if (rem > 9)
  cout << (char)(rem - 10 + 'A');
  else
  cout << rem;
}
void oktal( int n){
  int octalNum[100];
  int i = 0;
  while (n != 0) {
    octalNum[i] = n % 8;
    n = n / 8;
    i++;
  }
  
  for (int j = i - 1; j >= 0; j--)
  cout << octalNum[j];
}


void menuUtama(){
  	string namaUser;
	int numberConv;
  system("cls");
  cout<<"Welcome to Super Math"<< endl;
  cout<< "===================="<< endl;
  do{
    cout<<"input your name [3..20 :]";
    cin>> namaUser;
    count = namaUser.length();
  }while(count>=20 || count<=3);
  p.setNama(namaUser);
  
  system("cls");
  
  cout<< "Hallo : " << left<<setfill ('*') << setw (20)<<p.getNama() <<endl;
  cout<< "Today lesson is about converting number"<< endl;
  cout << "======================================"<<endl;
  
  cout<<"Input a number [1-1oo] : "<<endl;
  cin >> numberConv;
  
  while (cin.fail())	{
    cout<<"Input a number [1-1oo] : "<<endl;
    cin.clear();
    cin.ignore(256,'\n');
    cin >> numberConv;			
  }
  p.setNum(numberConv);
  printNumberConvert();
  
}

void printNumberConvert(){
  char opt;
  double a;
  a= p.getNum();
  cout<< "Number in Decimal +"<< p.getNum()<< endl;
  cout<< "Number in Hexa 0X";	hexa(p.getNum()); cout	<< endl;
  cout<< "Number in Octal 0";	oktal(p.getNum());cout << endl;
  cout.precision(5);
  cout<< "Number in Scientific "<<scientific<<a<< endl;
  cout<< "Number in Float "<<	p.getNum()<<".00"<< endl;
  do{
    cout<< "Do you want to reply? [y/n]"<<endl;
    cin>> opt;
  }while(opt!='n' && opt!='y');
  if(opt=='n') ;
  if(opt=='y') menuUtama();
}
