#include <simplecpp>
main_program {  //Decide if x is prime.
  int x; cin >> x;

  int i = 2;
  bool found = false;
  repeat(x - 2)
  {
    found = found || (x % i) == 0;
    i = i + 1;
  }

  if (found)
    cout << x << " is composite." << endl;
  else
    cout << x << " is prime." << endl;
}
