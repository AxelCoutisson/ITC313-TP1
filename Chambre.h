//Created by Axel Coutisson on 29/10/2019
#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <string>

using namespace std;

class Chambre{
public:

  enum chambreType
  {
    SUITE,
    SINGLE,
    DOUBLE
  };

  //constructor
  Chambre(string id, Chambre::chambreType type, double price);

  //getters
  string getId();
  string getType();
  double getPrice();

  //setters
  void setId(string id);
  void setType(Chambre::chambreType type);
  void setPrice(double price);

  //method
  void ShowInformation();

private:

  //variables
  string m_id;
  Chambre::chambreType m_type;
  double m_price;
};
#endif
