#include <iostream>
#include <string>

using namespace std;

int main() {
	string b = "";
	int a;
	string mystr;
	  cout << "What's your name? ";
	  getline (cin, mystr);
	cout << "Hi " << mystr << "!\n";
	cout << "Give me a number between 1 and 3399: " << endl;
	cin >> a;

	if ( a > 3399) {
		cout << mystr << "," << " the number is too big. Plz run me again!" << endl;
	}

	else {
		if (a >= 1000) {
			for (int i = 0; i < a/1000; i++) {
				b = b + "M";
			}
			a = a%1000;
		}

		if (a >= 900) {
			b = b + "CM";
			a -= 900;
		}

		if (a >= 500) {
			b = b + "D";
			for (int i = 0; i < (a-500)/100; i++) {
				b = b + "C";
			}
			a = a - (500 + ((a-500)/100)*100);
		}

		if (a >= 400) {
			b = b + "CD";
			a -= 400;
		}

		if (a >= 100) {
			for (int i = 0; i < a/100; i++) {
				b = b + "C";
			}
			a = a%100;
		}

		if (a >= 90) {
			b = b + "XC";
			a -= 90;
		}

		if  (a >= 50) {
			b = b + "L";
			for (int i = 0; i < (a-50)/10; i++){
				b = b + "X";
			}
			a = a - (50 + ((a-50)/10)*10);
		}

		if (a >= 40) {
			b = b + "XL";
			a -= 40;
		}

		if (a >= 10) {
			for (int i = 0; i < a/10; i++){
				b = b + "X";
			}
			a = a%10;
		}

		if (a == 9){
			b = b + "IX";
			a = a - 9;
		}

		if (a >= 5) {
			b = b + "V";
			for (int i = 0; i < (a-5)/1; i++) {
				b = b + "I";
			}
			a = a - (5 + ((a-5)/1)*1);
		}

		if (a == 4) {
			b = b + "IV";
			a = a - 4;
		}

		if (a >= 0) {
			for (int i = 0; i < a; i++) {
				b = b + "I";
			}
		}
		cout << "Alakazaam!" << endl << b << endl;

		return 0;
		}
	}


