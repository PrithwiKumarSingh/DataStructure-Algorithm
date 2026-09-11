#include <iostream>
using namespace std;

void evenNum(int n) {
  if (n == 0) {
    return;
  }

  if (n % 2 == 1) {
    cout << n << " ";
  }

  evenNum(n - 1);
}

void printNum(int n, int num) {
  if (num == n) {
    return;
  }

  cout << num << " ";
  printNum(n, num + 1);
}

int printSum(int num) {
  if (num == 0) {
    return 0;
  }

  return num + printSum(num - 1);
}

int factorial(int num) {
  if (num == 1) {
    return num;
  }
  cout<<"Hello"<<endl;

  return num * factorial(num - 1);
}
int main() {

  // 20 to 1 , print every even number
  int fact = factorial(5);
  cout << fact << endl;

  return 0;
}
