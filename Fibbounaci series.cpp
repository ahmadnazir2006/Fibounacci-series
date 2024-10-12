#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the digits limit you want series upto:\n";
	cin >> n;
	int  nextterm=0;
	
	int t1 = 0;
	int t2 = 1;
	cout << t1 << t2;
	
		
	
		for (int i = 0; i <= n - 2; i++) {

			nextterm = t1 + t2;
			cout << nextterm;
			t1 = t2;
			t2 = nextterm;

		}
		
	}

