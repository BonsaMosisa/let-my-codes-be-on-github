#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cout << "Enter number of elements you submit: ";
  cin >> n;
  int arr[n];

  int sum = 0;
  for (i = 0; i < n; i++)
  {
    cout << "Enter Element " << i + 1 << ": ";
    cin >> arr[i];
  }

  cout << "All elements are: ";
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }
  cout << endl;

  return 0;
}
