//Created by Peter Bachour on 12/11/2019

#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;
class Reservation
{
  public:
    //constructor
    Reservation();
    Reservation(string id, Date startDate, Date endDate, string id_Hotel, 
                string id_Chambre, string id_Client, int totalAmount);


    //getters
    string getId();
    Date getStartDate();
    Date getEndDate();
    string getHotelId();
    string getChambreId();
    string getClientId();
    int getTotalAmount();

    //setters
    void setId(string id);
    void setStartDate(Date startDate);
    void setEndDate(Date endDate);
    void setHotelId(string id_Hotel);
    void setChambre(string id_Chambre);
    void setClientId(string id_Client);
    void setTotalAmount(int TotalAmount);

    //method
    int calculateTotalAmount(int nb_nights, int price_night, int discount);

  private:
    string m_id;
    Date m_Start_Date;
    Date m_End_Date;
    string m_id_Hotel;
    string m_id_Chambre;
    string m_id_Client;
    int m_total_Amount;

};
#endif
