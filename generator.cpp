#include <unordered_map>
#include <algorithm>
#include <stdexcept>
#include <windows.h>
#include <locale.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <deque>
#include <ctime>
#include <cmath>
#include <set>
#include <map>
using namespace std;

int main(){
    setlocale(0, "");
    ofstream out("output.txt");
    string s = "";
    for(int i = 0; i<100; i++){
        vector<string> a;
        ifstream in("data/"+s+".txt");
        string s1;
        while(in >> s1){
            a.push_back(s1);
        }
        if(a.size()==0){
            s = "";
            continue;
        }
        int it = rand()%a.size();
        out << a[it] << ' ';
        s = a[it];
    }
}
