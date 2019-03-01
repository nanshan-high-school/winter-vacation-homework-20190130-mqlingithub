#include <iostream>
using namespace std; 

int main() {
  int day, total = 0;

  cout << "input:";
  cin >> day;

  for (int  i = 0;i < day ;i++) {
    int num;

    cin >> num;
    num *= (i + 1);

    total += num;

  }

  cout << "output:" << total;
}
