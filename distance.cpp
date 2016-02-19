#include <iostream>
#include <math.h>
using namespace std;

int distance (int x1,int y1,int x2,int y2)
{
  double result;

  result = sqrt (pow((x2-x1),2) + pow((y2-y1),2));

  cout << "The distance between the two coordinates is: " << result << endl;
}

int main(){
  int a, b, c, d;
  cout << "Please enter the coordinates for x1:" << endl;
  cin  >> a;
  cout << "Please enter the coordinates for y1:" << endl;
  cin  >> b;
  cout <<"First coordinates: " <<"(" << a << "," << b << ")" << endl;
  cout << endl;
  cout << "Please enter the coordinates for x2:" << endl;
  cin  >> c;
  cout << "Please enter the coordinates for y2:" << endl;
  cin  >> d;
  cout <<"Second coordinates: " <<"(" << c << "," << d << ")" << endl;

  distance (a, b, c, d);


}
