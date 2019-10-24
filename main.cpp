#include <iostream>
#include "Date.h"

int main(){
  Date date(5,8,2019);
  std::cout << date.getDay();
  return 0;
}
