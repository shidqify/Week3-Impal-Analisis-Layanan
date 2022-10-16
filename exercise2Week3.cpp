#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int c_amount, base_fee, add_fee, service_time;
    char drop_off, pick_up;

    cin >> c_amount;
    cin >> service_time;
    cin >> drop_off;
    cin >> pick_up;
    if (c_amount == 1 || c_amount == 2) {
        base_fee = 50;
        add_fee = 0;
    } else if (c_amount >= 3 && c_amount <= 10) {
        base_fee = 100;
        add_fee = c_amount * 10;
    } else if (c_amount > 10) {
        base_fee = 500;
        add_fee = c_amount * 10;
    }

    if (service_time < 9 || service_time > 17) {
        base_fee *= 2;
    }

    if (pick_up == 'y' && drop_off =='y') {
        base_fee /= 2;
    }

    base_fee += add_fee;
    cout << base_fee;

    return 0;
}