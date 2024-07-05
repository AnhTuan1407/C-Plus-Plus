#include <bits/stdc++.h>
using namespace std;
int main() {
// 1. break;
	cout << "break;" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
		if(i == 5) 
			break;
	}	

// 2. continue;
	cout << "\ncontinue;" << endl;
	for (int i = 0; i < 10; i++) {
		if(i == 5) 
			continue;
		cout << i << " ";
	}	
	
// 3. while
	cout << "while " << endl;
	int i = 0;
	while (i < 5) {
		cout << i <<  " ";
		i++;
	}
	cout << "\nGia tri cua i sau vong lap while: " << i << endl;
	
	int number;
	cout << "Nhap vao 1 so: " << endl;
	cin >> number;
	int dem = 0;
	while(number != 0) {
		number = number / 10;
		dem++;
	}
	
	cout << "Co " << dem << " chu so." << endl;
	
// 4. do..while
	cout << "do...while" << endl;
	do {
		cout << "Hello world!!!" << endl;
	}while (50 > 100);
return 0;
}
	
