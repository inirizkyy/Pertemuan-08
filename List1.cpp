#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> angka = {2, 4, 5, 7, 8};
    cout << angka.front() << endl;
    cout << angka.back() << endl;
    
    list<int>::iterator it;
    for (it = angka.begin(); it != angka.end(); ++it){
        cout << *it << " ";
    }
    
    angka.push_front(69);
    angka.push_back(96);
    
    cout << endl;
    for (it = angka.begin(); it != angka.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    
    angka.pop_front();
    angka.pop_back();
    
    cout << angka.size();
    
    cout << endl;
    if(angka.empty()){
        cout << "kosong" << endl;
    } else{
        cout << "berisi" << endl;
    }
    angka.assign(3,0);   
}
