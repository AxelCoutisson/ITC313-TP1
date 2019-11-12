//Created by Axel Coutisson on 24/10/2019

#ifndef CLIENT_H
#define CLIENT_H

#include <string>
using namespace std;

class Client{
public:

  //constructors//
  Client();
  Client(int id, string name, string firstname, int nb_reservation);

  //getters//
  int getId();
  string getName();
  string getFirstname();
  int getNbReservation();

  //sertters//
  void setId(int id);
  void setName(string name);
  void setFirstname(string firstname);
  void setNbReservation(int nb);

  //method
  void showInformation();
  
private:
  int m_id;
  string m_name;
  string m_firstname;
  int m_nbReservation;
};

#endif
