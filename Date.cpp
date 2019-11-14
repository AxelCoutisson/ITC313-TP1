//Created by Axel Coutisson on 24/10/2019

#include "Date.h"
#include <iostream>

//constructors//
Date::Date()
{
}

Date::Date(int day, int month, int year) : m_day(day), m_month(month), m_year(year)
{
}

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
void Date::setDay(int day) // ask if we need to check before setting 
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

//methods
//Splits Date into day, month, year
void Date::splitter(string date)
{
  unsigned delimiter = date.find("/");

  int day = atoi(date.substr(0, delimiter).c_str());
  int month = atoi(date.substr(3, delimiter).c_str());
  int year = atoi((((date.substr(delimiter)).substr(delimiter)).substr(delimiter)).c_str());

  m_day = day;
  m_month = month;
  m_year = year;
}

//Checks is Date is valid or not
bool Date::validateDate(int day, int month)
{
  if (month < 13 && month > 0)
  {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      if (day < 32 && day > 0)
      {
        return true;
      }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      if (day < 31 && day > 0)
      {
        return true;
      }
    }
    else if (month == 2)
    {
      if (day < 29 && day > 0)
      {
        return true;
      }
    }
  }
  return false;
}

//This method takes the date from the user.
void Date::enterDate()
{
  string providedDate;
  bool validated = false;
  Date StartDate;
  Date EndDate;
  do
  {
    do //Provides StartDate
    {
      cout << "Please provide the start Date (dd/mm/yyyy): ";
      cin >> providedDate;

      splitter(providedDate);
      validated = validateDate(m_day, m_month);

      StartDate.setDay(m_day);
      StartDate.setMonth(m_month);
      StartDate.setYear(m_year);

    } while (!validated);

    do //Provides EndDate
    {
      cout << "Please provide the end Date (dd/mm/yyyy): ";
      cin >> providedDate;

      splitter(providedDate);
      validated = validateDate(m_day, m_month);

      EndDate.setDay(m_day);
      EndDate.setMonth(m_month);
      EndDate.setYear(m_year);

    } while (!validated);
  } while (!EndDate.compareDates(StartDate));

  cout << "The Client reserved the room for " << EndDate.nbOfDays(StartDate) << " nights." << endl;
}

//Compares if endDate is greater than startDate
bool Date::compareDates(Date start)
{
  if (start.getYear() < this->getYear())
  {
    return true;
  }
  else if (start.getYear() == this->getYear())
  {
    if (start.getMonth() < this->getMonth())
    {
      return true;
    }
    else if (start.getMonth() == this->getMonth())
    {
      if (start.getDay() < this->getDay())
      {
        return true;
      }
    }
  }
  return false;
}

// Calculates number of days between 2 days, including the end Date
int Date::nbOfDays(Date start)
{
  const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int totalStart = start.getYear() * 365 + start.getDay();
  for (int i = 0; i < start.getMonth() - 1; i++)
    totalStart += monthDays[i];

  int totalEnd = this->getYear() * 365 + this->getDay();
  for (int i = 0; i < this->getMonth() - 1; i++)
    totalEnd += monthDays[i];

  return totalEnd - totalStart + 1;
}
