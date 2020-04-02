//
//  main.cpp
//  IterationStatements
//
//  Created by Richard Cheesman on 02/04/2020.
//  Copyright © 2020 Richard Cheesman. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
//    int m = 10;
    int n = 10;
    
    
    // While loop using n
    
     while (n>0){
        cout << n << ", ";
        --n;
    }
    
    cout << "liftoff!\n";
    
    // For loop using o
    for (int m=10; m>0; m--) {
        cout << m << ", ";
    }
    
    cout << "liftoff again!\n";
    
}
