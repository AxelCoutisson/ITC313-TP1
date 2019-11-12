//Created by Peter Bachour on 12/11/2019

#include "Reservation.h"
#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

Reservation::Reservation(string id, Date startDate, Date endDate, string id_Hotel, 
                string id_Chambre, string id_Client, int totalAmount) : 
        m_id(id), m_Start_Date(startDate), m_End_Date(endDate), m_id_Hotel(id_Hotel),
        m_id_Chambre(id_Chambre), m_id_Client(id_Client), m_total_Amount(totalAmount)
{}

//getters

string Reservation::getId(){
  return m_id;
}

Date Reservation::getStartDate(){
  return m_Start_Date;
}
    
Date Reservation::getEndDate(){
  return m_End_Date;
}

string Reservation::getHotelId(){
  return m_id_Hotel;
}

string Reservation::getChambreId(){
  return m_id_Chambre;
}

string Reservation::getClientId(){
  return m_id_Client;
}

int Reservation::getTotalAmount(){
  return m_total_Amount;
}

//setters
void Reservation::setId(string id){
  m_id = id;
}

void Reservation::setStartDate(Date startDate){
  m_Start_Date = startDate;
}

void Reservation::getEndDate(Date endDate){
  m_End_Date = endDate;
}

void Reservation::getHotelId(string id_Hotel){
  m_id_Hotel = id_Hotel;
}

void Reservation::getChambreId(string id_Chambre){
  m_id_Chambre = id_Chambre;
}

void Reservation::getClientId(string id_Client){
  m_id_Client = id_Client;
}

void Reservation::getTotalAmount(int TotalAmount){
  m_total_Amount = TotalAmount;
}

//method
int calculateTotalAmount(int nb_nights, int price_night, int discount){
  return nb_nights*price_night * (100 - discount); 
}