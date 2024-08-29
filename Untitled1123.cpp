// program to find the area and volume using c++ with classes,sturcture And objects:

#include <iostream>
using namespace std;
// create a class
class room
{
public:
  double length;
  double breath;
  double height;
  double calculate_area()
  {
    return length * breath;
  }
  double calculate_volume()
  {
    return length * breath * height;
  }
};
int main()
{
  // create object of room class
  room room1;
  // Assign values to daTA MEMEBER:
  room1.length = 42.5;
  room1.breath = 30.8;
  room1.height = 19.2;
  // Calculate and display the area and volume of the room:
  cout << "Area of Room = " << room1.calculate_area() << endl;
  cout << "Volume of Room = " << room1.calculate_volume() << endl;
  return 0;
}
