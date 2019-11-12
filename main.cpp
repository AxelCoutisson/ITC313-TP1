#include <iostream>
#include "Hotel.h"
#include "Chambre.h"
#include "Client.h"
using namespace std;

int main(){
  
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
  Client client0(0, "bachour", "peter", 0);
  Client client1(1, "coutisson", "axel", 8);
  Client client2(2, "coutisson", "marcel", 0);
  Client client3(3, "fraise", "william", 0);
  Client client4(4, "meme2", "thomas", 0);
  Client client5(5, "bizo", "louis", 0);
  Client client6(6, "petitBizo", "louis", 0);
  Client client7(7, "forrer", "francois", 0);
  Client client8(8, "fourrrrrer", "frakoiiiss", 0);
  Client client9(9, "patate", "pierre", 0);
  Client client10(10, "pomme", "deterre", 0);
  
  vector<Client> list {client0, client1, client2, client3, client4, client5, client6, client7, client8, client9, client10};
  for(Client cli : list)
  {
    cli.showInformation();
  }
  return 0;
}
