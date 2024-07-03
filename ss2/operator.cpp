#include <bits/stdc++.h>
using namespace std;
//Assigment operator - Toan tu gan
//Arithmetic operator - Toan tu toan hoc: +, -, *, /, %, ++, --
//Comparison operator - Toan tu so sanh: <, <=, >, >=, ==, !=
//toan_hang1 toan_tu_so_sanh toan_hang2 => tra ve true or false (1 or 0)
//Logical operator - and -> &&, or -> ||, not -> !
int main () {
	int a = 5, b = 2;
	float thuong = (float)a / (float)b;
	cout << "Thuong: " << thuong << endl;
	
	int c = 100, d;
	d = c++; //-> d = c = 100, -> c++ = 101 (cong sau -> tinh toan roi moi cong)
	int e = ++c; // - > c++ = 102 -> e = c = 102 (cong truoc -> cong truoc roi moi thuc hien tinh toan)
	cout << c << " " << d << " " << e << endl;

return 0;
}
