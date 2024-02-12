#include <iostream>
using std namespace;

int main() {

/*
Read an integer N (1 <= 200): print all numbers that satisfy the following 
property
 ○ Either number is divisible by 8
 ○ Or divisible by both 4 and 3
 ● Input: 100
 ● Output: 0 8 12 16 24 32 36 40 48 56 60 64 72 80 84 88 96
*/
	
int n;
cin >> n;

int i = 0;

if (n <= 200) {
    while (i <= n) {
    if (i % 8 == 0 || i % 4 == 0 && i % 3 == 0) {
        cout << i << " ";
    }
    i++;
    }

} else {
    cout << "your input shoud be between 1 to 200";
}

return 0;

}