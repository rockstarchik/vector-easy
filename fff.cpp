#include <iostream>
#include <vector>

using namespace std;

int main () {
vector <int> mass = {1 , 89, -10, 0, 201};
int len = mass.size();
int n, p, k;
cin >> n;
if (n < 0){
        n = -n;
for(p = 0; p < n; p++){
    k = mass[0];
    for( int i = 0; i <  len - 1; i++){
        mass[i] = mass[i+1];
    }
    mass[len - 1] = k;
}
}
else
for (int p = 0; p < n; p++){
        int k = mass[len - 1];
for(int i = len - 1; i > 0 ; i--){
    mass[i] = mass [i - 1];
}
mass[0] = k;
}
for(int f = 0; f < len; f++){
    cout << mass[f] << ' ';
}
}
