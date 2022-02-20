#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

//create function to convert Roman numerals to normal numbers
int RomanNumeralConverter(string s) {
    
    //create hash table to store Roman numerals and their corresponding values
    unordered_map<char,int> numerals;
    numerals['I'] = 1;
    numerals['V'] = 5;
    numerals['X'] = 10;
    numerals['L'] = 50;
    numerals['C'] = 100;
    numerals['D'] = 500;
    numerals['M'] = 1000;
    
    //declare running sum
    int sum = 0;
    
    //loop through each character of string
    for(int i = 0; i < s.length(); i++) {
        
        //1st condition checks to see if the current char is not the last char
        //2nd condition checks to see if the value of the current Roman numeral is less than the value of the next Roman numeral
        //if both conditions are true, this means subtract the value of the current numeral from value of the next numeral and add it to our total
        if(i != s.length() - 1 && numerals.at(s.at(i)) < numerals.at(s.at(i+1))) {
            sum += numerals.at(s.at(i+1)) - numerals.at(s.at(i));
            i++;
        }
        else {
            sum += numerals.at(s.at(i));
        }
        
    }//end for loop
    
    return sum;
}

//create function to convert normal numbers into Roman numerals
string NumberConverter(int number) {
    
    //create hash table to store common Roman values and their corresponding numerals
    unordered_map<int, string> values;
    values[1] = "I";
    values[4] = "IV";
    values[5] = "V";
    values[9] = "IX";
    values[10] = "X";
    values[40] = "XL";
    values[50] = "L";
    values[90] = "XC";
    values[100] = "C";
    values[400] = "CD";
    values[500] = "D";
    values[900] = "CM";
    values[1000] = "M";
    
    //create an array to also store the common Roman values (greatest to smallest)
    int commonNums [] {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    //declare string to return
    string romanNumeral = "";
    
    //iterate through the common nums until all commonNums are checked
    for(int num: commonNums) {
        while(num <= number) {
            number -= num;
            romanNumeral += values.at(num);
        }
    }

// Old solution:
//    while(number != 0) {
//        for(int num: commonNums) {
//            if(num <= number) {
//                romanNumeral += values.at(num);
//                number -= num;
//                break;
//            }
//        }
//    }
    
    return romanNumeral;
}
    
int main() {
    
    string s1;
    string s2;
    
    while(true) {
        cout << "Enter the first Roman numeral: ";
        cin >> s1;
        cout << "Enter the second Roman numeral: ";
        cin >> s2;
        
        if(s1 == "0" || s2 == "0") {
            break;
        }
        else {
            int total = (RomanNumeralConverter(s1) + RomanNumeralConverter(s2));
            cout << "The sum of " << s1 << " and " << s2 << " is " << total << endl;
            cout << "The sum as a Roman numeral is " << NumberConverter(total) << endl;
        }
    }
    
    return 0;
    
}