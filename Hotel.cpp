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

//method
//Shows information about a Hotel
void Hotel::ShowInformation(){
  cout << "This Hotel's name is " << m_name << "." << endl;
  cout << "It is located in " << m_city << "." << endl;
  cout << "It has " << m_id_chambre.size() << " rooms." << endl;
  int Single = 0;
  int SinglePrice = 0;
  int Double = 0;
  int DoublePrice = 0;
  int Suite = 0;
  int SuitePrice = 0;

  for(Chambre room : m_id_chambre){
    if(room.getType() == "Single"){
      Single++;
      SinglePrice = room.getPrice();
    }
    if(room.getType() == "Double"){
      Double++;
      DoublePrice = room.getPrice();
    }
    if(room.getType() == "Suite"){
      Suite++;
      SuitePrice = room.getPrice();
    }
  }
  cout << "It contains " << Single << " single rooms for the price of "  << SinglePrice  << "$ each, "
  << Double << " double rooms for the price of "  << DoublePrice  << "$ each and "
  << Suite << " suite rooms for the price of "  << SuitePrice  << "$ each.";
}