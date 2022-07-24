#include<iostream>
using namespace std;


int seletionSort(int array[], int num){
    int temp, swap_time = 0, minj;
    for(int i = 0; i < num - 1; i++){
        minj = i;
        for(int j = i; j < num; j++){
            if(array[j] < array[minj]){
                minj = j;
            }
        }
        temp = array[i];
        array[i] = array[minj];
        array[minj] = temp;
        if(i != minj){
            swap_time++;
        }
    }
    return swap_time;
}

int main(){
    int array[100], num, swap_time;
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> array[i];
    }
    swap_time = seletionSort(array, num);
    for(int i = 0; i < num; i++){
        if(i > 0){
            cout << " ";
        }
        cout << array[i];
    }
    cout << "\n";
    cout << swap_time << "\n";

    return 0;
}