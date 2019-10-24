//Created by Axel Coutisson on 24/10/2019
#include "Client.h"

Client::Client(int id, string name, string firstname, int nbReservation) : m_id(id), m_name(name), m_firstname(firstname), m_nbReservation(nbReservation)
{}

//getters//
int Client::getId()
{
  return m_id;
}
string Client::getName()
{
  return m_name;
}
string Client::getFirstname()
{
  return m_firstname;
}
int Client::getNbReservation()
{
  return m_nbReservation;
}

//sertters//
void Client::setId(int id)
{
  m_id = id;
}
void Client::setName(string name)
{
  m_name = name;
}
void Client::setFirstname(string firstname)
{
  m_firstname = firstname;
}
void Client::setNbReservation(int nb)
{
  m_nbReservation = nb;
}
