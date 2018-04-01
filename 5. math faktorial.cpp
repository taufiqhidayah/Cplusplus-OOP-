#include <stdio.h>
#include <string>
#include <bitset>
#include <stdlib.h>
#include <iostream>

using namespace std;
class HitungAngka{
	private :
		int number;
	public:
		void setNumber(int number){
			this->number = number;
		}
		int getNumber() const {
			return number;
		}
};

const int longFactAndBinar=20;
const int longFibo=100;
int validateInput(int lim);
int countFibonaci(int n);
int countFactorial (int n);
int option;
HitungAngka hitungAngka;

int main(){
	 system("cls");
	int  limitNum;
	do{
		string menu[]={"1. Factorial","2. Fibonaci","3. Binary Number","4. Exit"};
		for (int i =0; i<=3; i++){
			cout<< menu[i]<<endl;
		}
		cin >> option;
		switch (option){
			case 1 : 
				validateInput(longFactAndBinar);
				
			break;
			case 2:
				validateInput(longFactAndBinar);
			break;
			case 3:
				validateInput(longFibo);
			break;
			
		}
		getchar();
	}while(option>4);
		getchar();
	return 0;
}
inline int countFactorial (int n){
	return (n<2 )? 1: n *countFactorial(n-1);
}
inline int countFibonaci(int n){
 if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(countFibonaci(n-1)+countFibonaci(n-2));
    }
 
}
int validateInput(int lim){
	int numEnter,i;
	do{
		cout<<"Input the Number [1.."<<lim<<"]";
		cin>>numEnter;
	}while(numEnter<1 || numEnter>=lim);
	hitungAngka.setNumber(numEnter);
	if(option==1)cout << countFactorial(hitungAngka.getNumber())<<endl;
	if(option==2){
		  while(i<hitungAngka.getNumber()){
		  	cout << countFibonaci(i)<<endl;
	        i++;
	    }
	}
	if(option==3){
		string binary = bitset<8>(hitungAngka.getNumber()).to_string(); //to binary
		cout<<binary<<"\n";
	}
	system("pause");
	main();
}
