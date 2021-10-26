// 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	

//giai phuong trinh
	int a;
	int b;
	double nghiem;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "phuong trinh vo so nghiem " << '\n';
		}
		else {
			cout << "phuong trinh vo nghiem " << '\n';
		}
	}
	else {
		nghiem = (double)-b / a;
		cout << "phuong trinh bac 1 co nghiem la:" << nghiem << '\n';
	}
	
//max, min	

	int a;
	int b;
	
	/*cout << " input two intergers print to console max,min ";*/
	
	cout << "Enter two number randomly: ";
	cin >> a >> b;
	

	if (a < b) {
		cout << a << " is the min number" << '\n';
		cout << b << " is the max number" << '\n';
	}
	else if (a > b) {
		cout << a << "is the max number" << '\n';
		cout << b << "is the min number" << '\n';
	}
	else {
		cout << "error" << '\n';
	}
	




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
