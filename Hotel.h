//Created by Axel Coutisson on 29/10/2019
//Modified by Peter Bachour on 12/11/2019

#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <string>
#include <list>

using namespace std;
class Hotel
{
  public:
    //constructor
    Hotel();
    Hotel(string id, string name, string city, list<int> id_chambre);

    //getters
    string getId();
    string getName();
    string getCity();
    list<int> getList();

    //setters
    void setId(string id);
    void setName(string name);
    void setCity(string city);
    void setlist(list<int> id_chambre);

  private:
    string m_id;
    string m_name;
    string m_city;
    list<int> m_id_chambre;
};
#endif
