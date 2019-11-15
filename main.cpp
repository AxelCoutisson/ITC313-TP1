#include <iostream>
#include "Hotel.h"
#include "Chambre.h"
#include "Client.h"
#include "Reservation.h"
using namespace std;

int main()
{
  Chambre Single1("Single1", Chambre::SINGLE, 100);
  Chambre Single2("Single2", Chambre::SINGLE, 100);
  Chambre Single3("Single3", Chambre::SINGLE, 100);
  Chambre Double1("Double1", Chambre::DOUBLE, 125);
  Chambre Double2("Double2", Chambre::DOUBLE, 125);
  Chambre Double3("Double3", Chambre::DOUBLE, 125);
  Chambre Double4("Double4", Chambre::DOUBLE, 125);
  Chambre Double5("Double5", Chambre::DOUBLE, 125);
  Chambre Suite1("Suite1", Chambre::SUITE, 210);
  Chambre Suite2("Suite2", Chambre::SUITE, 210);

  vector<Chambre> liste_Chambre;
  liste_Chambre.push_back(Single1);
  liste_Chambre.push_back(Single2);
  liste_Chambre.push_back(Single3);
  liste_Chambre.push_back(Double1);
  liste_Chambre.push_back(Double2);
  liste_Chambre.push_back(Double3);
  liste_Chambre.push_back(Double4);
  liste_Chambre.push_back(Double5);
  liste_Chambre.push_back(Suite1);
  liste_Chambre.push_back(Suite2);

  Hotel Ocean11("Ocean11", "Le Bellagio", "Las Vegas", liste_Chambre);

  Ocean11.ShowInformation();
  Client client0(0, "Client", "1", 0);
  Client client1(1, "Client", "2", 8);
  Client client2(2, "Client", "3", 0);
  Client client3(3, "Client", "4", 0);
  Client client4(4, "Client", "5", 0);
  Client client5(5, "Client", "6", 0);
  Client client6(6, "Client", "7", 0);
  Client client7(7, "Client", "8", 0);
  Client client8(8, "Client", "9", 0);
  Client client9(9, "Client", "10", 0);

  vector<Client> list{client0, client1, client2, client3, client4, client5, client6, client7, client8, client9};
  for (Client client : list)
  {
     client.showInformation();
  }

  //Question 7 
  Date date;
  date.enterDate();

  //Question 8 
  cout << "We have " << Ocean11.getArray().size() << " rooms: " << endl;
  for(Chambre room : Ocean11.getArray()){
    cout << room.getId() << ". " ; 
    room.ShowInformation();
  }
  string chosenType;
  cout << "Kindly choose a valid type of room you would like. (Please type room id)." << endl;
  cin >> chosenType;
  cout << "Your chosen room [" << chosenType << "] will be checked if it is valid or not. Kindly wait." << endl;

  return 0;
}