#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class InsereOrdenado:public vector<T>{
public:
T &operator[](int index){

    return vector<T>::operator[](index);
}
void insere(const T &val){
this->push_back(T());

int i = this->size() - 1;

while (i>this->size()/2){

    (*this)[i] = (*this)[i-1];

    i--;
}
(*this)[i] = val;
}



};


int main(){
    InsereOrdenado<int> v;
    v.insere(10);
    v.insere(20);   
    v.insere(5);
    v.insere(15);
    v.insere(100000);

    for (int i=0;i<v.size();i++){
        cout << v[i] << " " << endl;
    }
    cout << v[2] << "valor do index 2" << endl;


    return 0;
}
