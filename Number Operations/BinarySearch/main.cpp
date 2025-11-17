#include <iostream>

using namespace std;

int bin_search(int arr[], int low, int high, int search);
int *Sort(int a[], int size);

int main() {
  int n, query;
  cout << "Enter the size of the sorted list : ";
  cin >> n;

  int a[n];
  cout << "Enter the values : \n";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << "Enter the value you want to find : ";
  cin >> query;

  Sort(a, n);
  cout << "The sorted list is: \n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  if (bin_search(a, 0, n - 1, query) == -1) {
    cout << "\nThe value is not present in the list\n";
  } else {
    cout << "\nThe value " << query << " is at position "
         << bin_search(a, 0, n - 1, query) + 1 << "\n";
  }
}

int *Sort(int arr[], int size) {
  int j, k, temp;
  for (int i = 0; i < size; i++) {
    j = i;
    for (int k = i + 1; k < size; k++) {
      if (arr[k] < arr[j]) {
        j = k;
      }
    }
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return arr;
}

int bin_search(int arr[], int low, int high, int search) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == search) {
      return mid;
    }
    if (arr[mid] > search) {
      return bin_search(arr, low, mid - 1, search);
    }
    if (arr[mid] < search) {
      return bin_search(arr, mid + 1, high, search);
    }
  }
  return -1;
}