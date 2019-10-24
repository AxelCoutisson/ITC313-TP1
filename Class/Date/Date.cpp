//Created by Axel Coutisson on 24/10/2019

#include "Date.h"
#include <string>

//constructors//
Date::Date(int day, int month, int year) : m_day(day), m_month(month), m_year(year)
{}

//getters//
int Date::getDay()
{
  return m_day;
}

int Date::getMonth()
{
  return m_month;
}

int Date::getYear()
{
  return m_year;
}

//setters//
void Date::setDay(int day)
{
  m_day = day;
}

void Date::setMonth(int month)
{
  m_month = month;
}

void Date::setYear(int year)
{
  m_year = year;
}
