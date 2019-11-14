#include <iostream>
#include "Hotel.h"
#include "Chambre.h"
#include "Client.h"
#include "Reservation.h"
using namespace std;

int main()
{
  Chambre Single("single", Chambre::SINGLE, 100);
  Chambre Double("double", Chambre::DOUBLE, 125);
  Chambre Suite("suite", Chambre::SUITE, 210);

  vector<Chambre> liste_Chambre;
  liste_Chambre.push_back(Single);
  liste_Chambre.push_back(Single);
  liste_Chambre.push_back(Single);
  liste_Chambre.push_back(Double);
  liste_Chambre.push_back(Double);
  liste_Chambre.push_back(Double);
  liste_Chambre.push_back(Double);
  liste_Chambre.push_back(Double);
  liste_Chambre.push_back(Suite);
  liste_Chambre.push_back(Suite);

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


  return 0;
}
