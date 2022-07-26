#include<iostream>
#include<string>

using namespace std;

int main() {
	
	int A, B, C;
	int count = 0;
	cin >> A >> B >> C;

	if ((A == B)&&(B == C)) {
		count = 10000 + A * 1000;
	}
	else if ((A == B)||(A == C)) {
		
		count = 1000 + A * 100;
	}
	else if (B == C) {
		count = 1000 + B * 100;
	}
	else {
		count = max(max(a, b), c);
	}

	cout << count;
	return 0;
}