#include "easy_list.h"
#include <vector>

using namespace std;

void itc_rev_list(vector <int>& mass) {
    int l = mass.size() - 1;



}

void itc_rev_par_list(vector <int>& mass) {



}

void itc_rshift_list(vector <int>& mass) {


}

void itc_super_shift_list(vector <int>& mass, int n) {
    int len = mass.size();
    int k, p;
    if (n < 0) {
        n = -n;
        for (p = 0; p < n; p++) {
            k = mass[0];
            for (int i = 0; i < len - 1; i++) {
                mass[i] = mass[i + 1];
            }
            mass[len - 1] = k;
        }
    }
    else {
        for (p = 0; p < n; p++) {
            k = mass[len - 1];
            for (int i = len - 1; i > 0; i--) {
                mass[i] = mass[i - 1];
            }
            mass[0] = k;
        }
    }
}