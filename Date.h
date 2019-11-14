//Created by Axel Coutisson on 24/10/2019
#include <string>
#ifndef DATE_H
#define DATE_H

using namespace std;

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

  //method
  void splitter(string date);
  bool validateDate(int day, int month);
  void enterDate();
  bool compareDates(Date start);
  int nbOfDays(Date start);


private:

  //variables
  int m_day;
  int m_month;
  int m_year;
  
};

#endif
