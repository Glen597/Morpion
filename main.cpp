#include <iostream>
using namespace std;
enum Couleurcase{VIDE,ROND,CROIX};
int array<array<Couleurcase,3>,3>Grille;

struct jeuMorpion {
public:
    void initialise() const{
        for (auto& ligne:grille) {
            for (auto& case :ligne) {
                case =vide;
            }
        }
        bool palcer_rond(size_t ligne,size_t colonne)
        {
            return placer_coup(ligne,colonne,CROIX);
        }
        bool placer_croix(size_t ligne,size_t colonne)
        {
            return placer_coup(ligne,colonne,CROIX);
        }

        private:
        bool placer_coup(size_t ligne,size_tcolonne,CouleurCase coup)
        {
            if(ligne <0 or ligne >=grille.size()
            or colonne < 0 or colonne >= grille [ligne].size())
        }
        if(grille [ligne][colonne]== VIDE)
        {
            grille [ligne][colonne]== coup;
            return true;
        }
        else{return false;};

    };
};

int main() {

}
