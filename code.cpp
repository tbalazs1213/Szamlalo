#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int alk = 0;
  ifstream f("alk.txt");
  if(f.is_open())
  {
    f >> alk;
    f.close();
  }
  cout << "A program " << alk + 1 << " alkalommal volt futtatva."; ofstream g("alk.txt");
	if(g.is_open()) {
    g << alk + 1;
    g.close();
  }
  return 0;
}
