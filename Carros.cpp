#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
    string dono;
    string marca;
    string modelo;
    int ano;
    string cor;

public:
    // Construtor
    Carro(string marca, string modelo, int ano, string cor,string dono) {
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->cor = cor;
        this->dono = dono;
    }

    // Método para exibir informações do carro
    void exibirInformacoes() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Cor: " << cor << endl;
        cout << "Este carro pertece a: " << dono << endl;
        cout<<endl;
    }

    // Métodos para atualizar informações do carro
    void setDono(string dono){
        this->dono = dono;
    }
    void setMarca(string marca) {
        this->marca = marca;
    }

    void setModelo(string modelo) {
        this->modelo = modelo;
    }

    void setAno(int ano) {
        this->ano = ano;
    }

    void setCor(string cor) {
        this->cor = cor;
    }

};

int main() {
    string cor,dono,modelo,marca;
    int ano;
    cout << "quem é o proprietario do carro?"<<endl;
    getline(cin, dono);
    cout << "Qual a marca do carro?"<<endl;
    getline(cin, marca);
    cout << "Qual o modelo do carro?"<<endl;
    getline(cin, modelo);
    cout<< "Qual a cor do carro?"<<endl;
    getline(cin,cor);
    cout << "de que ano o carro eh?"<<endl;
    cin >> ano; 

    // Criando um objeto carro
    Carro meuCarro(marca, modelo, ano,cor,dono);
 

    // Exibindo informações do carro
    meuCarro.exibirInformacoes();

    // Atualizando informações do carro

    cout<<"qual cor voce deseja pintar seu carro?"<<endl;
    cin >> cor;
    meuCarro.setCor(cor);
    // Exibindo informações atualizadas do carro
    meuCarro.exibirInformacoes();

    Carro carromae("","",0,"","");
    carromae.setDono("Andrea");
    carromae.setMarca("Toyota");
    carromae.setModelo("Etios");
    carromae.setCor("preto");
    carromae.setAno(2017);
    carromae.exibirInformacoes();
    return 0;
}
