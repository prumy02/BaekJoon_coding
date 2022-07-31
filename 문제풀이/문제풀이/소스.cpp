#include<iostream>
#include<string>

using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int cnt = 0;
	
	if (B >= C) {
		cout << -1;
		return 0;
	}
	
	cout << A / (C - B) + 1;

}
