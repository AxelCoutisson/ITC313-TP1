#include <iostream>
#include "Client.h"

int main(){
  Client bob(0,"boby", "bob", 1);
  std::cout << bob.getName();
  return 0;
}
