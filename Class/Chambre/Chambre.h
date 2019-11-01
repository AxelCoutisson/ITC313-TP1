//Created by Axel Coutisson on 29/10/2019
#ifndef CHAMBRE_H
#define CAMBRE_H

#include <string>
using namespace std;
class Chambre{
public:
//constructor
  Chambre(int id, string type, double price);
  //getters
  int getId();
  string getType();
  double getPrice();
  //setters
  void setId(int id);
  void setType(string type);
  void setPrice(double price);
private:
  //variables
  int m_id;
  string m_type;
  double m_price;
};
#endif
