//crie uma classe de implementação de cilindros e metodos para area e volume

#include <iostream>
#include <math.h>
using namespace std;

class Cilindros{
private:
double h;
double r;
double area;
double volume;
public:
//construtor
Cilindros(double H,double R) : h(H),r(R){
   
 
}

double AreaDoCilindro(){
    
    area = 2*(M_PI*(r*r)) + 2*(M_PI*r*h);
    return area;
}

double VolumeCilindro(){
    
    volume = M_PI * (r*r) * h;
    return volume;

}



double getArea(){
    AreaDoCilindro();
    return area;
}
double getVolume(){
    VolumeCilindro();
    return volume;
}

};

int main (){
    Cilindros c1(10,30);
    double retornaarea = c1.getArea();
    cout << "a area no main eh :" << retornaarea << endl;
    double retornavolume = c1.getVolume();
    cout << "a area no main eh :" << retornavolume << endl;
    return 0;
}