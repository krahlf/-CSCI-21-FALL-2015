#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;
int main()
{
 string Name = "";
 string Numbers = "";
 stringstream ss;
int Biggest = 0;
 cout << "Hello. Please input an integer." << endl;
 cin >> Numbers;
 ss << Numbers << ",";
 cout << "Please input a second integer." << endl;
 cin >> Numbers;
 ss << Numbers;
 cout << ss.str();
 return 0;
}
int Biggest(int x, int y)
{
 int Biggest = 0;
 Biggest = (x >= y)? x:y;
 return Biggest;
}
int Biggest(int x, int y, int z)
{
 int Biggest = 0;
 Biggest = (x >= y)? x:y;
 Biggest = (Biggest >= z)? Biggest:z;
 return Biggest;
}
void Swap(int &x, int &y){
 int w = x;
 x = y;
 y = w;
}