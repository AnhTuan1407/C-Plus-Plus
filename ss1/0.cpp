#include<bits/stdc++.h>
using namespace std;

//n bit => -2^(n-1) -> 2^(n-1) - 1
//
//Kieu du lieu so: 
//So nguyen 
//int: 4byte : 32bit : -2^31 -> 2^31-1
//long long: 8byte : 64bit : -2^63 -> 2^63-1
//
//So thuc
//float: 4byte  
//double: 8byte
//
//Kieu du lieu ky tu: 
//char : 1byte : 256 : 0 -> 255
//
//bool : true, false : 1byte 

//Bien
//Kieu_du_lieu Ten_bien;



int main() {
	cout << "Hello world!" << endl;
	float a;
	cin >> a;
	cout << fixed << setprecision(4) << a << endl; // setprecision : do chinh xac sau dau phay
	
	char kitu;
	cin >> kitu;
	cout << kitu << endl;
	return 0;
}
