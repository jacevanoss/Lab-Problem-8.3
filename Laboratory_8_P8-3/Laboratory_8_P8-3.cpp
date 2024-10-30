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
int convertRomanToInt(string s);

int main() {

	string test = "IV";
	cout << convertRomanToInt(test);

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

int convertRomanToInt(string s) {
	int total = 0;
	for (int i = 0; i < s.length(); i++) { 
		int current = romanCharValue(s[i]);
		int next = 0;
		if (i + 1 < s.length()) {
			next = romanCharValue(s[i + 1]);
		}
		if (current < next) {
			total = total - current;
		}
		else {
			total = total + current;
		}
		
	}
	return total;
}
