#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string reverse {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string message;
    
    cout << "Enter your secret message: ";
    getline(cin, message);
    cout << "\nEncrypting message..." << endl;
    
    for(int i = 0; i < message.length(); i++) {
        if(isalpha(message.at(i))) {
            message.at(i) = key.at(alphabet.find(message.at(i)));
        }
    }
    
    cout << "\nEncrypted message: " << message << endl;
    cout << "\nDecrypting message..." << endl;
    
    for(int i = 0; i < message.length(); i++) {
        if(isalpha(message.at(i))) {
            message.at(i) = alphabet.at(key.find(message.at(i)));
        }
    }
    
    cout << "\nDecrypted message: " << message << endl;
    
    return 0;
}