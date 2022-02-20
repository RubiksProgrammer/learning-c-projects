#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    
    string palin = "hello";
    string tempo = "noooo";
    palin = tempo;
    tempo = "yesss";
    cout << "palin: " << palin;
    cout << "tempo: " << tempo;
    
    palin = "ollo";
    string s = "yllo";
    if(palin == reverse(palin.begin(), palin.end())) {
        cout << "You did it!"<< endl;
    }
    return 0;
}