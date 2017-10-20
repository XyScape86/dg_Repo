// read a file into memory
#include <iostream>     // std::cout
#include <fstream>      // std::ifstream
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    ifstream is ("VTSMX.csv");
    string first;
    char c;
    getline(is, first);
    while(!is.eof()){
        is.get(c);
        if(c == '-')
            is.get(c);
        if(c == ',')
            c = ' ';
        //is.get(buffer);
        cout << c;
    }
    /*
    int num = 0;
    int q = 0;
    char k;
    while(!is.eof()){
        is.seekg(q);
        k = is.peek();
        for(; k != '\n'; q++){
            is.seekg(q);
            k = is.peek();
            if(is.eof()) break;
        }
        cout << q << endl;
        q+=1;
        //if (q >100) break;
        if(is.eof()) break;
        num++;
    }
    is.seekg(is.beg);
    string oo;
    getline(is, oo);
    cout << oo << endl << num;
*/
}
