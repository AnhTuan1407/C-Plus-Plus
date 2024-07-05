#include <bits/stdc++.h>
using namespace std;

// abs(x): gia tri tuyet doi
// pow(a, b): tinh a^b -> tra ve double
// sqrt(x): tinh can bac 2 -> tra ve double
// round(x): lam tron so
// 0 -> false
// !0 -> true
int main() {
	int a = -100;
	cout << abs(a) << endl;
	
	int b = 2, c = 10;
	cout << pow(b, c) << endl; // b^c
	
	int d = 16;
	cout << sqrt(d) << endl;
	
	float e =  2.5632;
	cout << round(e) << endl;
	
	int number;
	cout << "Enter number: " << endl;
	cin >> number;
	if(number == 2)
		cout << "Thu hai" << endl;
	else if (number == 3) 
		cout << "Thu ba" << endl;
	else if (number == 4) 
		cout << "Thu tu" << endl;
	else if (number == 5) 
		cout << "Thu nam" << endl;
	else if (number == 6) 
		cout << "Thu sau" << endl;
	else if (number == 7) 
		cout << "Thu bay" << endl;
	else if (number == 8) 
		cout << "Chu nhat" << endl;
	else
		cout << "Khong hop le!" << endl;
		
	int thang;
	cout << "Nhap thang: " << endl;
	cin >> thang;
	switch (thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: 
			cout << "Co 31 ngay" << endl; 
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "Co 30 ngay" << endl;
		case 2: 
			cout << "Nam nhuan co 29 ngay, nam khong nhuan co 28 ngay" << endl;
			break;
		default:
			cout << "Khong hop le!" << endl;
			break;
	}
return 0;
} 
