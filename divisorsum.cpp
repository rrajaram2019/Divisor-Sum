// copyright2019 rrajaram@bu.edu
#include <iostream>
using std::cin;
using std::cout;
int main() {
  uint64_t usernumber = -1;
  uint64_t sum = 0;
  while (true) {
    sum = 0;
    cin >> usernumber;

    if (usernumber == 0) {
      break;
    }
    cout << usernumber << ": ";
    int i;
    cout << "1";
    for (i = 2; i <= usernumber / 2; i++) {
      if (usernumber % i == 0) {
        cout << "+";
        cout << i;
        sum += i;
      }
    }
    cout << " = " << sum + 1 << "\n";
  }
  return 0;
}
