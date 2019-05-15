//
//  main.cpp
//  Increment
//
//  Created by Litvin, Denis [GCB-OT] on 5/15/19.
//  Copyright © 2019 Citi. All rights reserved.
//

#include <iostream>

using namespace std;

string& increment(string &str) {
    if (str.empty()) return str;
    
    bool solved;
    long i = str.length() - 1;
    
    while (i >= 0 && !solved) {
        if (str[i] != '9') {
            //char 1 is ascii int 1 interchangable
            ++str[i];
            solved = true;
        }
        else {
            str[i] = '0';
        }
        --i;
    }
    if (!solved && i < 0) {
        str.insert(0, "1");
    }
    return str;
}

int main(int argc, const char * argv[]) {
    string str;
    cout << "Incrementim pacani: type number" << endl;
    while (cin >> str) {
        cout << increment(str) << endl;
    }
    return 0;
}
