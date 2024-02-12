#include <iostream>
using std namespace;

int main() {
 int numOfIteration;
 cin >> numOfIteration;

 int outerStart = 1;

 while (outerStart <= numOfIteration) {
    int innerStart = numOfIteration;
    while (innerStart >= outerStart) {
        cout << "* ";
        --innerStart;
    }
    ++outerStart;
    cout << "\n";
 }
 
 return 0;
}
