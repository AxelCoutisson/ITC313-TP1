#include <iostream>
#include "Chambre.h"
using namespace std;

int main(){
  int pause;
  Chambre marcel(0,Chambre::chambreType::SINGLE, 158);
  cout << marcel.getType() << endl;
  cin >> pause;
  return 0;
}
