#include<iostream>
#include<string>

using namespace std;

int main() {

	int N;
	int cnt = 0;
	int temp, num;
	cin >> N;

	num = N;

	while (1) {
		temp = (N % 10) * 10 + (N / 10 + N % 10) % 10;
		cnt++;
		N = temp;

		if (temp == num) {
			break;
		}
	}

	cout << cnt << "\n";

	return 0;
}