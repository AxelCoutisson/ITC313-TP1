//Created by Axel Coutisson on 29/10/2019
#ifndef CHAMBRE_H
#define CHAMBRE_H

using namespace std;
class Chambre{
public:
  enum chambreType
  {
    SUIT,
    SINGLE,
    DOUBLE
  };
//constructor
  Chambre(int id, Chambre::chambreType type, double price);
  //getters
  int getId();
  Chambre::chambreType getType();
  double getPrice();
  //setters
  void setId(int id);
  void setType(Chambre::chambreType type);
  void setPrice(double price);
private:
  //variables
  int m_id;
  Chambre::chambreType m_type;
  double m_price;

};
#endif
