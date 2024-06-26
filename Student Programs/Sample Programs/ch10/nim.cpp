#include <simplecpp>

bool winning(int x, int y, int z)
// x,y,z = number of stones in the 3 piles.
// returns true if this is a winning position.
{
  if (x == 0 && y == 0 && z == 0)
    return false;                        // base case

  for (int i = 1; i <= x; ++i)          // Pick i stones from pile 1
    if (!winning(x - i, y, z))
      return true;
  // if a losing next state is found

  for (int i = 1; i <= y; ++i)          // Pick i stones from pile 2
    if (!winning(x, y - i, z))
      return true;
  // if a losing next state is found

  for (int i = 1; i <= z; ++i)          // Pick i stones from pile 3
    if (!winning(x, y, z - i))
      return true;
  // if a losing next state is found

  return false;                       // if all next states are winning
}
int main()
{
  int x, y, z;

  cout << "Give the number of stones in the 3 piles: ";
  cin >> x >> y >> z;
  if (winning(x, y, z))
    cout << "Wins." << endl;
  else
    cout << "Loses." << endl;
}
