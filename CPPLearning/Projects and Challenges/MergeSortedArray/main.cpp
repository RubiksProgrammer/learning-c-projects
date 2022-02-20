#include <iostream>
#include <vector>

using namespace std;

vector<int> MergeSortArray(vector<int>& arr1, vector<int>& arr2) {
    
    int p1 = 0;
    int p2 = 0;
    vector<int> result;
    
    while(p1 < arr1.size() && p2 < arr2.size()) {
        
        if(arr1.at(p1) < arr2.at(p2)) {
            result.push_back(arr1.at(p1));
            p1++;
        }
        else if(arr1.at(p1) > arr2.at(p2)) {
            result.push_back(arr2.at(p2));
            p2++;
        }
        else {
            result.push_back(arr1.at(p1));
            result.push_back(arr2.at(p2));
            p1++;
            p2++;
        }
    }
    
    if(p1 == arr1.size() && p2 != arr2.size()) {
        for(int i = p2; i < arr2.size(); i++) {
            result.push_back(arr2.at(i));
        }
    }
    else if(p2 == arr2.size() && p1 != arr1.size()) {
        for(int i = p1; i < arr1.size(); i++) {
            result.push_back(arr1.at(i));
        }
    }
    return result;
} 

int main() {
    
    while(true) {
        vector<int> arr1;
        vector<int> arr2;
        int len1 = 0;
        int len2 = 0;
        
        cout << "Enter the number of elements for array 1: ";
        cin >> len1;
        
        if(len1 == 0) {
            break;
        }
        
        cout << "Enter the elements for array1: ";
        for(int i = 0; i < len1; i++) {
            int element = 0;
            cin >> element;
            arr1.push_back(element);
        }
        
        cout << "Enter the number of elements for array 1: ";
        cin >> len2;
        
        cout << "Enter the elementws for array2: ";
        for(int i = 0; i < len2; i++) {
            int e = 0;
            cin >> e;
            arr2.push_back(e);
        }
        
        cout << "\nMerge sorted array is:";
        
        vector<int> result = MergeSortArray(arr1, arr2);
        for(int num: result) {
            cout << " " << num;
        }
        
        cout << endl;
        
    } 
    return 0;
}