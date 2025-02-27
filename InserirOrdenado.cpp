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

while (i>0 && (*this)[i-1] > val){

    (*this)[i] = (*this)[i-1];

    i--;
}
(*this)[i] = val;
}

void remove(const T &val){
int j = 0;

for (int i=0;i<this->size();i++){
    if ((*this)[i]!= val){
        (*this)[j] = (*this)[i];
        j++;
    }


}
if (j<this->size()){
    this->pop_back();
}


}


};


int main(){
    InsereOrdenado<int> v;
    v.insere(10);
    v.insere(200);
    v.insere(20);   
    v.insere(5);
    v.insere(15);
    v.remove(5);
    v.insere(23);
    v.insere(21);
    v.remove(20);

    for (int i=0;i<v.size();i++){
        cout << v[i] << " " << endl;
    }
    cout  << endl << "valor do index 2: " << v[2] << endl;


    return 0;
}
