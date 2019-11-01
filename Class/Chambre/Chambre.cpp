//Created by Axel Coutisson on 29/10/2019

#include "Chambre.h"
#include <string>

using namespace std;

Chambre::Chambre(int id, string type, double price) : m_id(id), m_type(type), m_price(price)
{}

int Chambre::getId()
{
  return m_id;
}

string Chambre::getType()
{
  return m_type;
}

double Chambre::getPrice()
{
  return m_price;
}

void Chambre::setId(int id)
{
  m_id = id;
}

void Chambre::setType(string type)
{
  m_type = type;
}

void Chambre::setPrice(double price)
{
  m_price = price;
}
