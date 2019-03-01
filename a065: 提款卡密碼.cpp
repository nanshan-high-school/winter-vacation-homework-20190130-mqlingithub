#include <iostream>
using namespace std; 

int main() {
  int cardnum = 0;
  string input;
  
  cout << "input:";
  cin >> input;

  for (int i = 0; i < 6; i++) {
    int a;

    if (input[i + 1] > input[i]) a = input[i + 1] - input[i];
    else a = input[i] - input[i + 1];
    
    cardnum = cardnum * 10 + a;
  }
  cout << "output:" << cardnum;
}
