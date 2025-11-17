#include <iostream>

using namespace std;

int *Sort(int a[], int size) {
  int j, k, temp;
  for (int i = 0; i < size; i++) {
    j = i;
    for (int k = i + 1; k < size; k++) {
      if (a[k] < a[j]) {
        j = k;
      }
    }
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
  return a;
}

int main() {
  int n;
  cout << "How many values do you want to sort :";
  cin >> n;

  int a[n];
  cout << "Enter the values: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  Sort(a, n);
  cout << "The sorted list is : \n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
}