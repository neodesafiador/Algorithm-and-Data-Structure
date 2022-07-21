#include<iostream>
using namespace std;


void trace(int array[], int num){
    for(int i = 0; i < num; i++){
        if(i > 0){
            cout << " ";
        }
        cout << array[i];
    }
    cout << "\n";
}


void insertionSort(int array[], int num){
    for(int i = 1; i < num; i++){
        int v = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > v){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = v;
        trace(array, num);
    }
}


int main(){
    int num, array[100];
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> array[i];
    }
    trace(array, num);
    insertionSort(array, num);

    return 0;
}