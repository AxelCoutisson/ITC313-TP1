//Created by Axel Coutisson on 24/10/2019
#include "Client.h"
#include <iostream>
#include <vector>

using namespace std;

Client::Client(int id, string name, string firstname, int nbReservation) : m_id(id), m_name(name), m_firstname(firstname), m_nbReservation(nbReservation)
{}

Client::Client()
{}

//getters//
int Client::getId()
{
  return m_id;
}
string Client::getName()
{
  return m_name;
}
string Client::getFirstname()
{
  return m_firstname;
}
int Client::getNbReservation()
{
  return m_nbReservation;
}

//sertters//
void Client::setId(int id)
{
  m_id = id;
}
void Client::setName(string name)
{
  m_name = name;
}
void Client::setFirstname(string firstname)
{
  m_firstname = firstname;
}
void Client::setNbReservation(int nb)
{
  m_nbReservation = nb;
}

//method
void Client::showInformation()
{
  cout << "His id is : " <<  m_id << endl << "His lastname is : " << m_name << endl << "His firstname is : " 
  << m_firstname << endl << "He made " << m_nbReservation << " reservation(s)" << endl;
}

//static
Client Client::chooseClient(vector<Client> clientList)
{
  string clientName, clientFirstName, choose = "";
  Client rightPerson;
  int id;
  do{
    cout << "Please type the client's name:" << endl;
    cin >> clientName;
    cout << "Does the client already exists in this list? (yes/no)" << endl;
    for (Client client : clientList)
      if(client.getName() == clientName)
        cout << "id[" << client.getId() << "] : " << clientName << " " << client.getFirstname() << endl;
    cout << endl;
    cin >> choose;
  }
  while(choose != "yes" && choose != "no");
  if (choose == "yes")
  {
    bool isValid = false;
    do{
      cout << "Kindly type the client's firstname" << endl;
      for (Client client : clientList)
        if(client.getName() == clientName)
          cout << "id[" << client.getId() << "] : " << clientName << " " << client.getFirstname() << endl;
      cin >> clientFirstName;
      for (Client client : clientList)
        if(client.getName() == clientName && client.getFirstname() == clientFirstName)
        {
          isValid = true;
          rightPerson = client;
        }
          
    }
    while(!isValid);
    rightPerson.showInformation();
    return rightPerson;
  }
  else
  {
    cout << "Please type the firstname:" << endl;
    cin >> clientFirstName;
    cout << "Please type the id:" << endl;
    cin >> id;
    Client newClient(id, clientName, clientFirstName, 0);
    clientList.push_back(newClient);
    newClient.showInformation();
    return newClient;
  }
}