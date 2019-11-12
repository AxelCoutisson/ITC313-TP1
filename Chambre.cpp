//Created by Axel Coutisson on 29/10/2019

#include "Chambre.h"
#include <string>
#include <iostream>

using namespace std;

Chambre::Chambre(string id, Chambre::chambreType type, double price) : m_id(id), m_type(type), m_price(price)
{}

string Chambre::getId()
{
  return m_id;
}

Chambre::chambreType Chambre::getType()
{
  return m_type;
}

double Chambre::getPrice()
{
  return m_price;
}

void Chambre::setId(string id)
{
  m_id = id;
}

void Chambre::setType(Chambre::chambreType type)
{
  m_type = type;
}

void Chambre::setPrice(double price)
{
  m_price = price;
}

//method
//Shows information about a Room
void Chambre::ShowInformation(){
  cout << "This room is a " << m_type << "." << endl;
  cout <<  "This room's price is " << m_price << "$." << endl;
}

