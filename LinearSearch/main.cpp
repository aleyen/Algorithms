#include <iostream>
using namespace std;

int lin_search(int a[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      return i;
    }
  }
  return -1;
}

int main() {
  int num, f;
  cout << "How many elements are in the array: ";
  cin >> num;
  int arr[num], i = 0;
  cout << "Enter the values in the array \n";
  while (i < num) {
    cin >> arr[i];
    i++;
  }
  cout << "Which value do you want to find: ";
  cin >> f;
  int scene = lin_search(arr, num, f);
  if (scene == -1) {
    cout << "The value is not present in the array";
  } else {
    cout << "The value is present in position " << scene + 1
         << " of the array\n";
  }
  return 0;
}
