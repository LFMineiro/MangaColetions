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

        bool mangaLongo() {
             return num_pag > 500;
         }

         // Set
        void setTituloManga(string &tManga) {
            if(titulo != "")
                titulo = tManga;
            else
                cout << "o titulo nao podem estar em branco";
        } 
        void setAutorManga(string aManga) {
            if(autor != "") 
                autor = aManga;
            else
                cout << "o autor nao podem estar em branco";
        } 
        void setPagManga(int pManga) {
           if(pManga > 0) 
                num_pag = pManga;
            else 
                cout << "O numero de paginas tem que ser um numero positivo" << endl ;   
        } 

         // Get
        string getTituloManga() {
           return titulo;       
        } 
        string getAutorManga() {
          return  autor;        
        } 
        int getPagManga() {
          return num_pag; 
        }
        ~Manga() {
            cout << "Destrutor chamado" << endl;
        }
};

int main() {
    string title;
    string autor;
    int numPag = 0;
    
   Manga m1 = Manga();
   
    cout << "Qual o titulo do manga: " ;
    cin >> title;

   cout << "Qual o autor do manga: ";
   cin >> autor;

while(true) {
   cout << "Quantas páginas tem: ";
   cin >> numPag;

   if(numPag > 0) {
    m1.setPagManga(numPag);
    break;
   }
   cout << "Por favor, insira um número de paginas válido.\n";
}

   m1.setAutorManga(autor);
   m1.setTituloManga(title);
   m1.setPagManga(numPag);

   cout << "O manga " << m1.getTituloManga() << " de "  << m1.getAutorManga() << " possui " << m1.getPagManga() << " páginas, sendo " << (m1.mangaLongo() ? "LONGO" : "NAO LONGO") ;
}