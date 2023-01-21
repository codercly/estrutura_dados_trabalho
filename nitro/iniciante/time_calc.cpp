#include <iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
int main() {
  auto start = high_resolution_clock::now();

  int i = 1;

  while(i < 1000000){
    i++;
  }

  auto end = high_resolution_clock::now();

  auto duration = duration_cast<microseconds>(end - start);

  auto micro_secs = duration.count();

  auto secs = micro_secs / 1000000;

  cout<<"seconds: "<<secs;
}