#include "easy_list.h"
#include <vector>


using namespace std;

void itc_even_index_list(const vector <int>& mass, vector <int>& mass2){
if (0 == mass.size()) {

} else
    for (int i = 0; i < mass.size(); i++)
        if (i % 2 == 0)
            mass2.push_back(mass[i]);
}


void itc_even_parts_list(const vector <int>& mass, vector <int>& mass2) {
    if (0 == mass.size()) {

    }
    else
    for (int i = 0; i < mass.size(); i++)
        if (mass[i] % 2 == 0)
            mass2.push_back(mass[i]);

}

int itc_positive_list(const vector <int>& mass) {
    int kol;
    kol = 1;
    if (0 == mass.size()) {

    }
    else
    for (int i = 0; i < mass.size(); i++)
        if (mass[i] >= 0)
            kol++;
        return kol;
}
int itc_sl_list(const vector <int>& mass) {
    int kol = 0;
    if (0 == mass.size()) {

    }
    else
    for (int i = 1; i < mass.size(); i++)
        if (mass[i] > mass[i - 1])
            kol++;
    return kol;
}

bool itc_same_parts_list(const vector <int>& mass) {
    int kol = 0;
    if (0 == mass.size()) {

    }
    else
    for (int i = 0; i < mass.size(); i++) {
        if ((mass[i] > 0 && mass[i + 1] > 0) || (mass[i] < 0 && mass[i + 1] < 0)) {
            return true;
        }
        else {
            return false;
        }
    }
}
