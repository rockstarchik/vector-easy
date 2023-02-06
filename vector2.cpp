#include "easy_list.h"
#include <vector>

using namespace std;

void itc_rev_list(vector <int>& mass) {
    int le = mass.size();
    if (0 == le) {

    }
    for (int i = 0; i < le / 2; i++) {
        mass[i] = mass[i] + mass[le - 1 - i];
        mass[le - 1 - i] = mass[i] - mass[le - 1 - i];
        mass[i] = mass[i] - mass[le - 1 - i];
    }
}



void itc_rev_par_list(vector <int>& mass) {
    int le = mass.size();
    if (0 == le) {

    }
    for (int i = 0; i < 1 - le % 2; i + 2) {
        mass[i] = mass[i] + mass[i + 1];
        mass[i + 1] = mass[i] - mass[i + 1];
        mass[i] = mass[i] - mass[i + 1];
    }


}

void itc_rshift_list(vector <int>& mass) {
    int le = mass.size();
    if (0 == le) {

    }
    int c = mass[le - 1];
    for (int i = le - 1; i > 0; i--) {
        mass[i] = mass[i - 1];
    }
    mass[0] = c;

}

void itc_super_shift_list(vector <int>& mass, int n) {
    int le = mass.size();
    int k, p;
    if (0 == le) {

    }
    if (n < 0) {
        n = -n;
        for (p = 0; p < n; p++) {
            k = mass[0];
            for (int i = 0; i < le - 1; i++) {
                mass[i] = mass[i + 1];
            }
            mass[le - 1] = k;
        }
    }
    else {
        for (p = 0; p < n; p++) {
            k = mass[le - 1];
            for (int i = le - 1; i > 0; i--) {
                mass[i] = mass[i - 1];
            }
            mass[0] = k;
        }
    }
}