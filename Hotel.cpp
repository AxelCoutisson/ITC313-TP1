//Created by Axel Coutisson on 29/10/2019
//Modified by Peter Bachour on 12/11/2019

#include "Hotel.h"
#include "Chambre.h"
#include <iostream>
#include <string>

using namespace std;

Hotel::Hotel(string id, string name, string city, vector<Chambre> id_chambre) : 
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

vector<Chambre> Hotel::getArray(){
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

void Hotel::setArray(vector<Chambre> id_chambre){
  m_id_chambre = id_chambre;
}