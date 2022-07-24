#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
	string Word;
	getline(cin, Word);

	int num = 1;

	if (Word[0] == ' ') {
		num = num - 1;
	}

	for (int i = 0; i < Word.length() - 1; i++) {
		if (Word[i] == ' ') {
			num++;
		}
	}

	cout << num;
	return 0;
}