#include<iostream>
using namespace std;

// bubble sort using flag
int bubbleSort(int array[], int num){
    int swap_time = 0;
    bool flag = true;
    for(int i = 0; flag; i++){
        flag = false;
        for(int j = num - 1; j >= i + 1; j--){
            if(array[j] < array[j - 1]){
                swap(array[j], array[j - 1]);
                flag = true;
                swap_time++;
            }
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

    swap_time = bubbleSort(array, num);

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
