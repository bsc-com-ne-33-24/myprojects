#include <iostream>
#include "RectangleInherit.h"
#include "TriangleInherit.h"

using namespace std;

int main() {
  Rectangle rect;
  Triangle trgl;

  rect.SetValues(4,5);
  trgl.SetValues(4,5);

  cout << rect.Area() << '\n';
  cout << trgl.Area() << '\n';

  return 0;
}