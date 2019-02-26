// nama file : exercise-02.cpp
/*
Nama Program : Fizz Buzz
Nama 		 : Bandana Irmal Abdillah
NPM			 : 140810180025
Tanggal buat : 26 Februari 2019
Deskripsi	 : convert celcius to fahrenheit
*/

#include <iostream>
using namespace std;

float CtoF(float& celcius){ //convert celcius into fahrenheit
	float fahrenheit;
	fahrenheit = (celcius*9/5) + 32; 
	return (fahrenheit);
}

main(){
	float temp, hasil;
	cout <<"Celcius : "; cin >> temp;
	hasil = CtoF(temp);
	cout << hasil;
}
