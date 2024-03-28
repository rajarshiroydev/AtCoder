#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    string my_str; cin >> my_str;
    my_str.erase(remove(my_str.begin(), my_str.end(), 'a'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'e'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'i'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'o'), my_str.end());
    my_str.erase(remove(my_str.begin(), my_str.end(), 'u'), my_str.end());
    cout << my_str;
    return 0;
}