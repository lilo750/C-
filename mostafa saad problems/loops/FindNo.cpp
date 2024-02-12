#include <iostream>
using std namespace;

int main() {
	
/*
Homework 9: Find NO
 ● Read integer N, then read N strings.
○ Print only the strings (of 2 letters). These 2 letters must be letter ‘N’ and letter ‘O’ (regardless
of lower/upper case/order)
 ○ E.g. print “No”, “ON”, “no”    but ignore e.g. “YEs”, “Noooo”
 ○ That is, the word of 2 letters only N and O
 ● Input
 ○ 9 Yss NO noOO oN Mostafa no nN  oOOooo oO
 ● Output
 ○ NO oN no

*/

int n;
string N;

cin >> n;


int i = 1;

while (i <= n) {
    cin >> N;
    if (N == "no" || N == "No" || N == "nO" || N == "NO" || N == "On" || N == "ON" || N == "oN") {
        cout << N << " ";
    }
    i++;
}

return 0;

}