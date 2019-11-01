#include <iostream>
#include "Class/Chambre/Chambre.h"
using namespace std;

int main(){
  Chambre marcel(0,"suit", 158);
  cout << marcel.getType() << endl;
  return 0;
}
