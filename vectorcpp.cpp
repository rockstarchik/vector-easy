#include "easy_list.h"
#include <vector>


using namespace std;

void itc_even_index_list(const vector <int>& mass, vector <int>& mass2) {
    for (int i = 0; i < mass.size(); i++)
        if (i % 2 == 0)
            mass2.push_back(mass[i]);
}


void itc_even_parts_list(const vector <int>& mass, vector <int>& mass2) {



}

void itc_rev_list(vector <int> &mass){
int len = mass.size();
if ( 0 == len){

}
    for(int i = 0; i < len/2; i++){
        mass[i] = mass[i] + mass[len - 1 - i];
        mass[len - 1 - i] = mass[i] - mass[len - 1 - i];
        mass[i] = mass[i] - mass[len - 1 - i];
    }
}
