#include <iostream>


using namespace std;


class Metros{
private:
float valor;
public:
Metros() : valor(0){}
Metros(int x) : valor(x){}

Metros operator+(const Metros& m) const{
    return Metros(valor + m.valor);

}

Metros operator*(const Metros& m) const{
    return Metros(valor * m.valor);

}
Metros operator-(const Metros& m) const{
    return Metros(valor - m.valor);

}
int getValor() const {
    return valor;
}
void imprimir() const{
    cout << valor << "metros" << endl;


}




};

int main(){
    Metros m1(30),m2(40),m3;
    m3 = m1 - m2;

    m1.imprimir();
    m2.imprimir();
    m3.imprimir();
    return 0;
}