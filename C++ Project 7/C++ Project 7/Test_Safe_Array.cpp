#include "Safe_Array.h"
#include <iostream>
using namespace std;

int main() {

	// Test int array
	s_array<int> int_array(10);

	int_array[5] = 5;
	cout << "Int array in bounds: " << int_array[5] << endl;

	int_array[-1] = 2;
	cout << "Int array out of bounds" << int_array[15] << endl;

	// Test double array
	s_array<double> double_array(10);

	double_array[5] = 5.45;
	cout << "Double array in bounds: " << double_array[5] << endl;

	double_array[-1] = 2.12;
	cout << "Double array out of bounds" << double_array[15] << endl;

	// Test char array
	s_array<char> char_array(10);

	char_array[5] = 'a';
	cout << "Char array in bounds: " << char_array[5] << endl;

	char_array[-1] = 'b';
	cout << "Char array out of bounds" << char_array[15] << endl;

	return 0;
}