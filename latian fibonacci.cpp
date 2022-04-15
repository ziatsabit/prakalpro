#include <iostream>
using namespace std;

class fibo {
  public :
      int_fibonacci(int i);
      void_fib(int i);
};

int fibonacci(int n) {
  if (n == 0 || n == 1) {
    return n;
  } else {
    return (fibonacci(n - 1) + fibonacci(n - 2));
  }
}

void fib(int num) {
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < num; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
}

int main() {
  int num, i, j = 0;

  cout << "Masukkan batas jumlah bilangan fibonacci: ";
  cin >> num;

  cout << "Hasil bilangan fibonacci: ";
  for (i = 1; i <= num; i++) {
    cout << " " << fibonacci(j);
    j++;
  }
  cout << "\nIteratif fibonacci : " ;
   fib(num);
  return 0;
}
