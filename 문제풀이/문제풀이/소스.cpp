#include<iostream>
#include<string>

using namespace std;

int main() {
	string word, wrd_up;
	string alpbt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin >> word;
	int result[26];

	for (int i = 0; i < word.length(); i++) {
		wrd_up[i] = toupper(word[i]);
	}
	for (int i = 0; i < word.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (word[i] = alpbt[j]) {
				result[j]++;
			}
		}
	}
	return 0;
}
