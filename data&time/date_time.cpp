#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
int main(){
  auto now = chrono::system_clock::now();
  time_t current = chrono::system_clock::to_time_t(now);
     tm* localTime = localtime(&current);
  cout<<current<<endl;
  cout<<localTime;
    cout << localTime->tm_year + 1900 << "-";


 
}