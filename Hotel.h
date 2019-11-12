//Created by Axel Coutisson on 29/10/2019
#ifndef HOTEL_H
#define HOTEL_H

#include "../Chambre/Chambre.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;
class Hotel
{
  public:
    //constructor
    Hotel(string id, string name, string city, array<Chambre, 10> list);
    //getters
    string getId();
    string getName();
    string getCity();
    array<Chambre> getList();

    //setters
    void setId(string id);
    void setName(string name);
    void setCity(string city);
    void setlist(array<Chambre> list);
  private:
    string m_id;
    string m_name;
    string m_city;
    array m_list;
};
#endif
