#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

void producto(int x, int y);
vector<int> nom1;

int main()
{
	vector<int> num1;
	vector<int> num2;
	int num = 0;



	cout << "Ingresa un numero" << endl;
	cin >> num;

	num1.push_back(num);

	cout << "Ingresa un numero" << endl;
	cin >> num;

	num2.push_back(num);

	producto(num1[0], num2[0]);

	cout << endl << num1[0] << endl;
	cout << num2[0] << endl;
	cout << endl << nom1[0] << endl;
}

void producto(int x, int y) {

	int nom;
	nom = x * y;

	nom1.push_back(nom);
}
// \n