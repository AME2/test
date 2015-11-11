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
  Line (int a) {_length=a;} // Forgot to add a comment to my changes, what a muppet!
};

// Member functions definitions

double Line::getLength(void)
{
  return _length;
}


// Main function for the program

int main()
{
  Line line (6.0);

  // set line length
  

  printf("Length of line: %lf \n", line.getLength());

  line._length = 10.0; // OK: because length is public

  printf("length of line: %lf \n", line._length);

  return 0;
}
