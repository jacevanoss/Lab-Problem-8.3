/* Date: 10/24/2024
* Name: Jace Van Oss
* File: Laboratory_8_P8-3
* 
* Description: program that converts a roman numeral to its decimal number
*/

#include <iostream>
#include <string>

using namespace std;

int romanCharValue(char r);

int main() {

	char test = 'C';
	cout << romanCharValue(test);

	return 0;
}

int romanCharValue(char r) {
	if (r == 'I') return 1;
	if (r == 'V') return 5;
	if (r == 'X') return 10;
	if (r == 'L') return 50;
	if (r == 'C') return 100;
	if (r == 'D') return 500;
	if (r == 'M') return 1000;
}
