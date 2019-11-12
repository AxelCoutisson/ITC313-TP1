//Created by Axel Coutisson on 29/10/2019
//Modified by Peter Bachour on 12/11/2019

#include "Hotel.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;

Hotel::Hotel(string id, string name, string city, list<int> id_chambre) : 
        m_id(id), m_name(name), m_city(city), m_id_chambre(id_chambre)
{}

//getters
string Hotel::getId(){
  return m_id;
}

string Hotel::getName(){
  return m_name;
}

string Hotel::getCity(){
  return m_city;
}

list<int> Hotel::getList(){
    return m_id_chambre;
}

//setters
void Hotel::setId(string id){
  m_id = id;
}

void Hotel::setName(string name){
  m_name = name;
}

void Hotel::setCity(string city){
  m_city = city;
}

void Hotel::setlist(list<int> id_chambre){
  m_id_chambre = id_chambre;
}