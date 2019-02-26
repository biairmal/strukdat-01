// nama file : exercise-01.cpp
/*
Nama Program : Fizz Buzz
Nama 		 : Bandana Irmal Abdillah
NPM			 : 140810180025
Tanggal buat : 26 Februari 2019
Deskripsi	 : pembeda angka yang berkelipatan 3 atau 5
*/

#include <iostream>
using namespace std;

void print(int n){
	for (int n=1; n<=100; n++){
		if (n%3 == 0){
			if (n%5 == 0){
				cout << "Fizz Buzz" << endl;
			}
			else{
				cout << "Fizz" << endl;
			}
		}
		else if (n%5 == 0){
			if (n%3 == 0){
				cout << "Fizz Buzz" << endl;
			}
			else{
				cout << "Buzz" << endl;
			}
		}
		else{
			cout << n << endl;
		}
	}
	
}

main(){
	int n;
	print(n);
}
