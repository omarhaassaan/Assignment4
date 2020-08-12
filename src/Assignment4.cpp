#include <iostream>
using namespace std;

int main() {
	char op;
	cout << "Enter the operation you want (+/-):" <<endl;
	cin >> op;
	int num1, num2, result;
	cout << "Enter two Digits" << endl;
	cin >> num1 >> num2;
	switch (op) {
	case '+':
		result = num1 + num2;
		cout << num1<<"+"<<num2<<" = "<<result;
		break;
	case '-':
		result = num1 - num2;
		cout << num1<<"-"<<num2<<" = "<<result;
		break;
	case '*':
		result = num1* num2;
		cout << num1 << "*"<<num2<<" = "<<result;
		break;
	default:
		cout << "wrong Operation" <<endl;
	}

	return 0;
}
