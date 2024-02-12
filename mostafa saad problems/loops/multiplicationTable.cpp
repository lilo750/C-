#include <iostream>
using std namespace;

int main() {
	
/*
Homework 9: Find NO
Read an integer N and M, then print NxM lines for their multiplication table.
 ● Input 3 4
 ● Output
 ○ 1 x 1 = 1
 ○ 1 x 2 = 2
 ○ 1 x 3 = 3
 ○ 1 x 4 = 4
 ○ 2 x 1 = 2
 ○ 2 x 2 = 4
 ○ 2 x 3 = 6
 ○ 2 x 4 = 8
 ○ 3 x 1 = 3
 ○ 3 x 2 = 6
 ○ 3 x 3 = 9
 ○ 3 x 4 = 12

*/

int N, M;
int start = 1;

cin >> N >> M;

while (start <= M - 1) {
    int innerStart = 1;
        while (innerStart <= M) {
            cout << start << " x " << innerStart << " = " << start * innerStart << endl;
            innerStart++;
        }
    start++;
}


return 0;

}