/**
 * This function divides one integer by the other
 * 
 * @param num1 The first integer
 * @param num2 The second integer
 */
#include <iostream>
using namespace std;

void Divide(int num1, int num2) {
  try {
    if (num2 == 0) {
      throw runtime_error("Cannot divide by zero.");
    }
    else {
      cout << num1 / (double)num2 << endl;
    }
  }
  catch (runtime_error& e) {
    cout << e.what() << endl;
  }
}

int main() {
  Divide(5, 2);
  return 0;
}