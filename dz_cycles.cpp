#include <iostream>
using namespace std;
#include <cmath>;
int main()
{
	//number 1
	int a,sum = 0;
	cout << "Enter a number: ";
	cin >> a;
	for (int i = a;i < 500; i++) {
		sum += i;
	}
	cout << "The sum of numbers from " << a << " to 500 is: " << sum <<'\n'; 

	////number 2
	int x, y;
	cout << "Enter x: ";
	cin >> x;
	int result = x;
	cout << "Enter y: ";
	cin >> y;
	for (int i = 0; i < y -1;++i) {
		result *= x;
	}
	cout << result << '\n';


	//number 3
	int summ = 0;
	for (int i = 1; i <= 1000;i++) {
		summ += i;
	}
	cout << summ / 1000 << '\n';

	//number 4
	int aa;
	long long dobutok = 1;
	cout << "Enter a(1<=a<=20): ";
	cin >> aa;
	for (int i = aa; i <= 20; ++i) {
		dobutok *= i;
	}
	cout << dobutok <<'\n';


	//number 5
	int k;
	cout << "Enter k: ";
	cin >> k;
	for (int i = 1;i <= 10;++i) {
		cout << k << " * " << i << " = " << k * i << '\n';
	}


	//number 6 
	int aaa;
	cout << "Enter A: ";
	cin >> aaa;

	for (int B = 1; B <= abs(aaa); B++) {
		if (aaa % (B * B) == 0 && aaa % (B * B * B) != 0) {
			cout << B << ' ';
		}
	}



	//number 7

	int nummer;
	cout << "Enter number: ";
	cin >> nummer;
	for (int i = 1; i <= nummer; ++i) {
		if (nummer % i == 0) {
			cout << i << ' ';
		}
	}


	//number 8
	int numm1, numm2,tempp;
	cout << "Enter numm1: ";
	cin >> numm1;
	cout << "Enter numm2: ";
	cin >> numm2;
	
	for (int i = 1;i <= numm1;i++) {
		if (i % numm1 == 0 && i % numm2 == 0) {
			cout << i << ' ';
		}
		else {

		}
	}

	//number 9
	int figure;
	char symbol;
	cout << "Enter figure (1-square, 2-rectangle, 3-triangle): ";
	cin >> figure;
	cout << "Enter symbol: ";
	cin >> symbol;
	switch (figure) {
	case 1:
		for (int i = 0; i < 5; ++i) {
			for (int j = 0; j < 5; ++j) {
				cout << symbol << ' ';
			}
			cout << '\n';
		}
		break;

	case 2:
		for (int i = 0; i < 5; ++i) {
			for (int j = 0; j < 8; ++j) {
				cout << symbol << ' ';
			}
			cout << '\n';
		}
		break;

	case 3:
		for (int i = 1; i <= 4; ++i) {
			for (int j = 1; j <= i; ++j) {
				cout << symbol << ' ';
			}
			cout << '\n';
		}
		break;
	default:
		cout << "Invalid figure!";
		break;
	}
}