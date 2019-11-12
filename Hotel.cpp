//Created by Axel Coutisson on 29/10/2019
#include "Hotel.h"
#include "../Chambre/Chambre.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;

Hotel::Hotel(string id, string name, string city, array<Chambre> list) : m_id(id), m_name(name), m_city(city), m_list(list)
{}

string Hotel::getName()
{
    return m_name;
}