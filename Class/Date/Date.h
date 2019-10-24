//Created by Axel Coutisson on 24/10/2019

#ifndef DATE_H
#define DATE_H

class Date{
public:
  Date();
  Date(int day, int month, int year);
  //getters
  int getDay();
  int getMonth();
  int getYear();
  //setters
  void setDay(int day);
  void setMonth(int month);
  void setYear(int year);
private:
  //variables
  int m_day;
  int m_month;
  int m_year;
};

#endif
