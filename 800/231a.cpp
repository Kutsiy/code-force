#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int output = 0;
    while(n--) {
        int p, v, t; cin >> p >> v >> t;
        int sum = p + t + v;
        if(sum >= 2) output++;
    }
    cout << output << endl;
    return 0;
}
