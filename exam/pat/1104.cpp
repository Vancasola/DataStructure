#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>
#include <map>
#include <stack>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long sum = 0;
    double temp;
    for (int i = 1; i <= n; i++) { 
        cin >> temp;
        sum += (long long)(temp * 1000) * i * (n - i + 1);
    }
    printf("%.2f", sum / 1000.0);
    return 0;
}
