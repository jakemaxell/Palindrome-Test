// M09 Palindrome
// Author: Jacob Maxwell
// Date last updated: 03/26/2019
// Purpose: To take in a string and return whether or not it is a palindrome
#include <iostream>
#include <string>
using namespace std;

bool recursivePalindrome(string str, int first, int last) {
	if (str.length() == 1) {
		return true;
	}
	else if (first >= last) {
		return true;
	}
	else if (str[first] != str[last]) {
		return false;
	}

	return recursivePalindrome(str, first + 1, last - 1);
}

bool isPalindrome(string str) {
	return recursivePalindrome(str, 0, str.length() - 1);
}

int main() {

	string word;

	cout << "Enter a word: ";
	getline(cin, word);

	if (isPalindrome(word)) {
		cout << word << ", is a palidrome" << endl;
	}
	else {
		cout << word << ", is not a palidrome" << endl;
	}

	system("pause");
	return 0;
}