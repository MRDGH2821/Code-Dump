#include <simplecpp>

int VirahankaByLooping(int n)    // Program to compute Virahanka number V_n
{
  int v1 = 1, v2 = 2;                 // v1 = V_1,  v2 = V_2

  if (n == 1)
    return v1;
  else if (n == 2)
    return v2;
  else
    {
      int vi = v1, viplus1 = v2, viplus2;
      repeat(n - 2) // Plan:
      {         // Before ith iteration, vi, viplus1 = V_{i}, V_{i+1}
        viplus2 = vi + viplus1;

        vi = viplus1;            // prepare for next iteration
        viplus1 = viplus2;
      }
      return viplus2;
    }
}

main_program {
  int n;
  cin >> n;
  cout << VirahankaByLooping(n) << endl;
}
