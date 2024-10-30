// count the numbers in vector which are greater then given number.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int n, key,val,count=0;
    cout << "enter the number of elements to insert: ";
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> val;
        vec.push_back(val);
    }

    for(int value : vec){
        cout << value << " " ;
    }
    cout <<endl;
    cout << "enter value to find : ";
    cin >> key;
    for(int i =0;i<n;i++){
        if(vec[i] > key){
            count++;
        }
    }
    cout << "Number of elements greater than " << key << " are: " << count <<endl;
    return 0;
}