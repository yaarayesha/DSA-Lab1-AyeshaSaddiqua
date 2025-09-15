#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    int array[n];
    for(int i =0; i<n; i++){
        int k;
        cout<< "Enter element " << i+1 << " : " ;
        cin >> k;
        array[i] = k;
        cout<< array[i] << endl;
    }

    int key;
    cout << "Enter the key" << endl;
    cin >> key;
    int index = 0;
    if (n == 0){
        cout << "Array is empty" << endl;

    }
    else{
        for(int i=0; i<n; i++){
            if (array[i] == key){
                cout << "Key is present at index " << i << endl;
                index = index+1;
            }}
            if(index == 0){
                cout << "Key is not present in the given array" << endl;
            }
            

        }
    }