//Created by Axel Coutisson on 29/10/2019

#include <string>
#include <vector>
#include <iostream>

#include "Chambre.h"

using namespace std;

Chambre::Chambre(string id, Chambre::chambreType type, double price) : m_id(id), m_type(type), m_price(price)
{
}

string Chambre::getId()
{
  return m_id;
}

string Chambre::getType()
{
  switch (m_type)
  {
  case 0:
    return "Suite";
  case 1:
    return "Single";
  case 2:
    return "Double";
  }
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
void Chambre::showInformation(){
  cout << "This room is a " << this->getType() << " room. ";
  cout << "And it's price is " << this->getPrice() << "$." << endl;
}

// static void Chambre::selectRoom(vector<Reservation> reservationList, Hotel hotel, pair<Date, Date> dates)
// {
  
// }
