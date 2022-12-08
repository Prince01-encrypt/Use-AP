#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    ll limit, find;
    cin >> limit >> find;
    ll x;
    if(limit % 2 == 0) {
        x = limit / 2;
    }
    else {
        x = limit / 2 + 1;
    }

    if(find <= x) {
        cout << 2 * find - 1;
    }
    else {
        cout << 2 * (find - x);
    }
    return 0;
}
