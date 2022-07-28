#include<iostream>
#include<vector>

using namespace std;

bool han(int n) {
	if (n < 100) {
		return true;
	}
	else {
		if (n / 100 + n % 10 == 2*((n / 10) % 10)) {
			return true;
		}
		else {
			return false;
		}
	}
	
}

int main() {

	int N;
	cin >> N;

	int cnt = 0;

	for (int i = 1; i < N+1; i++) {
		if (han(i)) {
			cnt++;
		}
	}

	cout << cnt;
}
