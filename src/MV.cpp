#include <iostream>
using namespace std;
int main() {
  cout << "*************** Menu véhicule ***************" << endl << endl;
  cout << "   1 - Multimédia" << endl;
  cout << "   2 - Téléphone" << endl;
  cout << "   3 - Connexions" << endl;
  cout << "   4 - Personnalisation - Configuration" << endl << endl;
  cout << "**********************************************" << endl;

  int choix;
  cout << "Quel est votre choix ?: ";
  cin >> choix;
  cout << " Le choix est " << choix << endl;
  switch (choix) {
  case 1:
    cout << "Multimedia" << endl;
    break;
  case 2:
    cout << "Téléphone" << endl;
    break;
  case 3:
    cout << "Connexions" << endl;
    break;
  case 4:
    cout << "Personnalisation - Configuration" << endl;
    cout << "**************************************************" << endl
         << endl;
    cout << "1 - Définir les paramètres véhicule" << endl;
    cout << "2 - Choix de la langue" << endl;
    cout << "3 - Configuration afficheur" << endl << endl;
    cout << "**************************************************" << endl;
    break;
  default:
    cout << "erreur" << endl;
  }
}
