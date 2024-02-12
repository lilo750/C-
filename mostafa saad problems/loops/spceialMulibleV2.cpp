#include <iostream>
using std namespace;

int main() {

/*
Homework 8: Special multiples 2
 ● Read an integer N (1 <= 30): Print the first N numbers that are
○ multiple of 3 but not multiple of 4
 ● Input: 11
 ● Output: 3 6 9 15 18 21 27 30 33 39 42
● Notice
 ○ 12 is divisible by both 3 and 4 ⇒ so excluded
*/
	
int n;
cin >> n;

int i = 0;

if (n <= 30) {
    while (i <= n * 4) {
    if (i % 3 == 0 && i % 4 != 0) {
        cout << i << " ";
    }
    i++;
    }

} else {
    cout << "your input shoud be between 1 to 200";
}

return 0;

}