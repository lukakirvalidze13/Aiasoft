#include <iostream>
#include <vector>
using namespace std;

void charArray(char arr[], int size){
    for(int i = 0; i<size; ++i){
        if (arr[i] >= 'a' && arr[i]<= 'z'){
            arr[i] = arr[i] - ('a' - 'A');
        }
        else if(arr[i] >= 'A' and arr[i] <= 'Z'){
            arr[i] = arr[i] + ('a' - 'A');
        }
    }
}

int main(){

    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    charArray(arr,n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << endl;
    }





    return 0;
}