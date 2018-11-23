//
//  MMP.cpp
//  MPP
//
//  Created by Md Anwar Hossain on 11/23/18.
//  Copyright © 2018 Md Anwar Hossain. All rights reserved.
//

#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std:: max;

int MaxPairwiseProduct(const vector<int>& numbers){
    int product = 0;
    int n = numbers.size();
    
    for (int i = 0 ; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            product = max(product, numbers[i]*numbers[j]);
        }
    }
    return product;
}
int main(int argc, const char * argv[]) {
    int n;
    cout << "Enter your number size : ";
    cin >> n;
    vector<int> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    int product = MaxPairwiseProduct(numbers);
    cout << product << "\n";
    return 0;
}
