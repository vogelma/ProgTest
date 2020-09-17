#include <iostream>
#include <string>

using namespace std;

int main() {
   string prenom;
   cout << "Entrez le prénom\n";
   //catch the first name
   getline(cin, prenom);
   int age;
   //catch the age
   cout << "Entrez l'âge\n";
   cin >> age;
   int year = 2020;
   cout << "Bonjour " + prenom +  ",\n Vous avez"+ to_string(age)+" et vous êtes né en ";
   cout << year-age << endl;
   return 0;

}
