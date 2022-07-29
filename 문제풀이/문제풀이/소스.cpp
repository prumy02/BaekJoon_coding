#include<iostream>
#include<string>

using namespace std;

int main() {
	int N, arr[26]={0,}, cnt=0;
	cin >> N;

	string word;
	for (int i = 0; i < N; i++) {
		cin >> word;
		bool groupword = true;

		for (int j = 0; j < word.length(); j++) {
			for (int k = 0; k < j; k++) {
				if (word[j] != word[j - 1] && word[j] == word[k]) {
					groupword = false;
					break;
				}
			}
		}
		if (groupword) cnt++;
	}

	cout << cnt;



	return 0;
}
