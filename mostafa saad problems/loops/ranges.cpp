#include <iostream>

using namespace std;

int main()
{

/*
Given a starting number X and an ending number Y, print all numbers
between X and Y inclusive, each on a line.
 ● Input 3 7
 ● Output
 ○ 3
 ○ 4
 ○ 5
 ○ 6
 ○ 7
*/


int start, end;

cin >> start >> end;

while (start <= end) {
    cout << start << endl;
    ++start;
}


return 0;
}