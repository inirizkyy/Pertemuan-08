#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    
    vector<char>::iterator it;
    for (it = huruf.begin(); it != huruf.end(); ++it){
        cout << *it << " ";
    }
    
    huruf.front() = 'h';
    huruf.back() = 'h';
    huruf.push_back('o');
    huruf.pop_back();
    huruf.size();
    huruf.empty();
    cout << endl;
    cout << huruf.at(3);
    
    cout << endl;
    for (it = huruf.begin(); it != huruf.end(); ++it){
        cout << *it << " ";
    }
}
