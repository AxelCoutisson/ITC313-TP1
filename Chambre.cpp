//Created by Axel Coutisson on 29/10/2019

#include "Chambre.h"
#include <string>

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
