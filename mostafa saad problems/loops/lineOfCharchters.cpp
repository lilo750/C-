#include <iostream>
using namespace std;

int main() {
	int numOfRepeation;
	char x;

	cin >> numOfRepeation >> x;

	while (numOfRepeation > 0) {
		cout << x;
		--numOfRepeation;
	}

	
	return 0;
}