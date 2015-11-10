#include <stdio.h>
#include <iostream>

using namespace std;

class Line
{
public:
  void setLength(double len);
  double getLength(void);

private:
  double _length;
};

// Member functions definitions

double Line::getLength(void)
{
  return _length;
}

void Line::setLength(double len)
{
  _length = len;
}

// Main function for the program

int main()
{
  Line line;

  // set line length
  line.setLength(6.0);

  printf("Length of line: %lf \n", line.getLength());

  line._length = 10.0; // OK: because length is public

  printf("length of line: %lf \n", line._length);

  return 0;
}
