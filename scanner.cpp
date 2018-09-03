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
    ifstream in("input.txt");
    string s = "", s1;
    while(in >> s1){
        //try{
        string s2 = "";
            for(int i = 0; i<s1.size(); i++){
                if('A'<=s1[i]&&s1[i]<='Z')
                    s1[i] += 32;
                if('À'<=s1[i]&&s1[i]<='ß')
                    s1[i] += 'à'-'À';
                if(('a'>s1[i]||'z'<s1[i])&&('à'>s1[i]||'ÿ'<s1[i])&&s1[i]!='-'){
                    continue;
                }
                s2.push_back(s1[i]);
            }
        //}
        //catch (const length_error& le) {
            //cout << "Length error: " << le.what() << '\n';
        //}
        s1 = s2;
        //cout << s1 << endl;
        if(s1.size()==0)
            continue;
        ofstream out("data/"+s+".txt", ios::app);
        out << s1 << '\n';
        s = s1;
    }
}
