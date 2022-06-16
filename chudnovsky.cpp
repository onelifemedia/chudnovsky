#include <iostream>
#include <math.h>

using namespace std;

long double calculate_numerator();
long double calculate_denominator();
int factorial(int num);

int main() {
  cout << calculate_numerator() / calculate_denominator() << endl;
  return 0;
}

long double calculate_numerator() {
  return 426880 * sqrt(10005);
}

long double calculate_denominator() {
  int upper_bound = 4; // This should be infinity
  long double result = 0;

  for(int k = 0; k < upper_bound; k++) {
    result += (factorial(6 * k) * ((545140134 * k) + 13591409))/(factorial(3 * k) * pow(factorial(k), 3) * pow(-262537412640768000, k));
  }

  return result;
}

int factorial(int num) {
  int result = 1;

  for(int i = 1; i <= num; i++) {
    result = result * i;
  }

  return result;
}
