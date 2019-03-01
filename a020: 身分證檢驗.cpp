#include <iostream>
using namespace std; 

int main() {
  string input;
  int total = 0;

  cout << "input:";
  cin >> input;

  for (int i = 0; i < 8; i++) {
    total += (input[i + 1] - '0') * (8 - i);
  }
  total += input[9] - '0';
  
  //每個字母代表的數字經過運算(十位數加個位數*9))
  if (input[0] == 'A') total += 1;
  else if (input[0] == 'B') total += 10;
  else if (input[0] == 'C') total += 19;
  else if (input[0] == 'D') total += 28;
  else if (input[0] == 'E') total += 37;
  else if (input[0] == 'F') total += 46;
  else if (input[0] == 'G') total += 55;
  else if (input[0] == 'H') total += 64;
  else if (input[0] == 'I') total += 39;
  else if (input[0] == 'J') total += 73;
  else if (input[0] == 'K') total += 82;
  else if (input[0] == 'L') total += 2;
  else if (input[0] == 'M') total += 11;
  else if (input[0] == 'N') total += 20;
  else if (input[0] == 'O') total += 48;
  else if (input[0] == 'P') total += 29;
  else if (input[0] == 'Q') total += 38;
  else if (input[0] == 'R') total += 47;
  else if (input[0] == 'S') total += 56;
  else if (input[0] == 'T') total += 65;
  else if (input[0] == 'U') total += 74;
  else if (input[0] == 'V') total += 83;
  else if (input[0] == 'W') total += 15;
  else if (input[0] == 'X') total += 3;
  else if (input[0] == 'Y') total += 11;
  else total += 30;

  if ((total / 10) * 10 == total)
  cout << "real";
  else
  cout << "fake";
}
