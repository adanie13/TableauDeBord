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

  if (choix == 1) {
    cout << "Multimedia" << endl;
  } else if (choix == 2) {
    cout << "Téléphone" << endl;
  } else if (choix == 3) {
    cout << "Connexions" << endl;
  } else if (choix == 4) {
    cout << "Personnalisation - Configuration" << endl;
  }
}