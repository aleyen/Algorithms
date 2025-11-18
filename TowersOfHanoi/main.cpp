#include <iostream>
using namespace std;

void TowersOfHanoi(int n, char x, char y, char z) {
  if (n >= 1) {
    TowersOfHanoi(n - 1, x, z, y);
    cout << "move top disk from tower " << x << " to tower " << y << "\n";
    TowersOfHanoi(n - 1, z, y, x);
  }
}

int main() {
  int num;
  char x = 'A', y = 'B', z = 'C';
  cout << "How many disks are there: ";
  cin >> num;
  TowersOfHanoi(num, x, y, z);

  return 0;
}