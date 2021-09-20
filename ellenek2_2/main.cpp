//
//  main.cpp
//  ellenek2_2
//
//  Created by Ellen Kirsh on 9/19/21.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    while(true){
        if((n%5 == 0)||(n%11 == 0)){
            cout << n << " is a mutliple of 5 or 11\n";
            break;
        }
        cout << n << " is not a multiple of 5 or 11\n";
        cout << "Enter an integer: ";
        cin >> n;
    }
    return 0;
}
