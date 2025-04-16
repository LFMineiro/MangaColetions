#include <iostream>
#include <vector>

using namespace std;
class Manga {
    private: 
        string titulo;
        string autor;
        int num_pag;
    public:
        Manga(string tit="", string aut = "", int pag = 0) {
        titulo = tit;
        autor = aut;
        num_pag = pag;
        }

        bool mangaLongo(int numPag) {
            if(numPag > 500) return true;
            else false;
         }

};

int main() {
   Manga m1 = Manga();
   
}