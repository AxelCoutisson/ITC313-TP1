#include <iostream>
#include "Hotel.h"
using namespace std;

int main(){

  list<int> pp;

  Hotel hotel("fd","suit","df", pp);
  cout << hotel.getCity() << endl;
  return 0;
}
