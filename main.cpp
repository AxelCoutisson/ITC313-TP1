#include <iostream>
#include "Reservation.h"
#include "Date.h"
using namespace std;

int main(){

  Reservation res("DG", Date(2,4,299), Date(4,34,2342), "gcg", "Xg", "Xgx", 290);
  cout << res.getStartDate().getMonth() ;
  return 0;
}
