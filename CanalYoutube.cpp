#include <iostream>
#include <list>
using namespace std;

class CanalYoutube {

    private:
    string dono;
    public:
    string nome;
    int inscritos;
    list<string> videos;

    CanalYoutube(string nome,int inscritos){
        this->nome = nome;
        this->inscritos = inscritos;
}
    string getDono(){
        return dono;
}
    void setDono(string novodono){
        dono = novodono;
}
void imprimir()
{
    cout << "Nome do canal:" << nome << endl;
    cout << "Nome do proprietario do canal:"<< dono << endl;
    cout << "numero de inscritos:" << inscritos << endl;
    cout<<"Videos: "<< endl;
    for (string video : videos) {
		cout << video << endl;
	}
    cout<<"-----------------------------------------------------------"<< endl;
}
};
int main()
{
    CanalYoutube CanalYT("KaioNG",9000);            
    CanalYT.setDono("Caio de Souza Ortiz de Angelis");
    CanalYoutube CanalYT2("Adolfz",3000);
    CanalYT2.setDono("Adolfo");
                                                                        //adicionar videos
    CanalYT.videos.push_back("Como domesticar golfinho minecraft");
    CanalYT.videos.push_front("Edit melhores momentos HG");
    CanalYT2.videos.push_back("Tirei o rei Pele");
    CanalYT2.videos.push_back("Ginola eh horrivel");
    CanalYT2.videos.push_back("Fim do canal de fifa, perdi tudo");
    CanalYT2.videos.push_front("Bem vindos ao meu canal de fifa");
                                                                        //Escrever tudo
    CanalYT.imprimir();
    CanalYT2.imprimir();

    
    return 0;
}

