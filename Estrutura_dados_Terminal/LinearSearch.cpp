#include <iostream>
#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;

int indexOf(int arr[], int size, int value)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == value)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  struct timespec start, end;
  int n, num;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    arr[i] = num;
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  int value = 889;

  clock_gettime(CLOCK_MONOTONIC, &start);

  ios_base::sync_with_stdio(false);

  int index = indexOf(arr, size, value);

  clock_gettime(CLOCK_MONOTONIC, &end);

  for(int i = 0; i < n; i++){
    cout<<"indice" <<"  "<< i <<" "<< arr[i]<< endl;
  }

  if (index > -1)
    cout << "o indice do numero:   " << value << "  e : " << index<<endl;
  else
  {
    cout << "o numero " <<"  :  "<< value << " não existe no array"<<endl;
  };

  double time_taken;
  time_taken = (end.tv_sec - start.tv_sec) * 1e9;
  time_taken = (time_taken + (end.tv_nsec - start.tv_nsec)) * 1e-9;

  cout << "Time taken by program is : " << fixed
       << time_taken << setprecision(9);
  cout << " sec" << endl;
  return 0;
}