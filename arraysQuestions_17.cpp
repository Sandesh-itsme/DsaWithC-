#include <iostream>
using namespace std;
void arr(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << "\t";
  }
}
int main()
{
/*  // 1. Search an element in array
  int arr[5] = {1, 2, 3, 4, 5};
  int element;
  cout << "Enter the element : \n";
  cin >> element;
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] == element)
    {
      cout << "Element found.";
      break;
    }
  }

  // 2. Reverse an array
  int arr[5] = {1, 2, 3, 4, 5};
  int start = 0; // index of 1st element
  int end = 4;   // index of last element
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  };
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << "\t";
  }

  // 3. Second max element in an array
  int arr[5] = {1, 2, 3, 4, 5};
  int max = arr[0];
  int secondMax = INT_MIN;
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  cout << "Maximum element is : " << max << endl;
  for (int i = 0; i < 5; i++)
  {
    if (max != arr[i])
    {
      secondMax = arr[i];
    }
  }
  cout << "Second maximum element is : " << secondMax << endl;

  // 4. Missing number
  int arr[5] = {1, 3, 4, 5, 6};
  int sum = 0, numberSum = 0, missingNum;
  // Here n=6
  numberSum = (6 * 7) / 2; // n*(n+1)/2
  for (int i = 0; i < 5; i++)
  {
    sum = sum + arr[i];
  }
  missingNum = numberSum - sum;
  cout << "Misiing number : " << missingNum << endl;

  // 5. Fibonacci series
  int arr[10];
  int n;
  arr[0] = 0;
  arr[1] = 1;
  cout << "Enter the value of n : ";
  cin >> n;
  for (int i = 2; i <= n - 1; i++)
  {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  cout << "Required value is : " << arr[n - 1];

  // 6. Rotate an array by 1
  int arr[5] = {1, 2, 3, 4, 5};
  int temp = arr[4];
  for (int i = 4; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << "\t";
  }
*/
  // 7. Pass array in a function
  int a[5] = {1, 2, 3, 4, 5};
  arr(a, 5); // function_name(array_name,array_size);

  return 0;
}