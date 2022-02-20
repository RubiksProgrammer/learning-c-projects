#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    char choice {};
    vector<int> nums {};
    
    while(choice != 'q' && choice != 'Q') {
        
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 'P':
            case 'p':
                if(nums.size() == 0) {
                    cout << "[] - the list is empty" << endl;
                } else {
                    cout << "[ ";
                    for(int num: nums) {
                        cout << num << " ";
                    }
                    cout << "]" << endl;
                }
                break;
            case 'A':
            case 'a': {
                int number = 0;
                cout << "Enter the number you would like to add: ";
                cin >> number;
                nums.push_back(number);
                cout << number << " added" << endl;
                break;
            }
            case 'M':
            case 'm': {
                if(nums.size() == 0) {
                    cout << "Unable to calculate the mean - no data" << endl;
                } else {
                    double sum = 0;
                    for(int num: nums) {
                        sum += num;
                    }
                    cout << "The mean of the numbers is " << sum/nums.size() << endl;
                }
                break;
            }
            case 'S':
            case 's': {
                if(nums.size() == 0) {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                } else {
                    int small = nums[0];
                    for(int num: nums)
                        if(num < small)
                            small = num;
                    cout << "The smallest number is " << small << endl;
                }
                break;
            }
            case 'L':
            case 'l': {
                if(nums.size() == 0) {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                } else {
                    int large = nums[0];
                    for(int num: nums)
                        if(num > large)
                            large = num;
                    cout << "The largest number is " << large << endl;
                }
                break;
            }
            case 'Q':
            case 'q':
                cout << "Goodbye..." << endl;
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
        }
    } 
    
    cout << endl;
    return 0;
}