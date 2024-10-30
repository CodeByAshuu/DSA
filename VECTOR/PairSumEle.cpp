//WAP to print pair element whose sum is equal to the given key



#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int n,targetSum,val;
    cout << "enter number of values to insert: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> val;
        vec.push_back(val);
    }
    for(int value : vec){
        cout << value << " " ;
    }
    cout << endl;
    cout << "key : ";
    cin >> targetSum;
    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){
            if(vec[i]+vec[k] == targetSum){
                cout << " pair of element: " << vec[i] << " " << vec[k]<< endl;
            }
        }
    }

    return 0;
}