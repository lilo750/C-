#include <iostream>
using std namespace;

int main() {
 int numbersOfN;
cin >> numbersOfN;


int averageOdd = 0;
int averageEven = 0;

int evenCount = 0;

for (int i = 1; i <= numbersOfN; i++) {
    int n;
    cin >> n;
    if (i % 2 == 0) {
        averageEven += n;
        evenCount++;
    } else {
        averageOdd += n;
    }
}

cout << (averageOdd / (numbersOfN - evenCount)) << " " << averageEven / evenCount;
 
 return 0;
}
