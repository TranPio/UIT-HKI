#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

void NhapMang(vector<int64_t>& a, int64_t& n){
    cin >> n;
    a.resize(n);
    for (int64_t i = 0; i < n; i++)
        cin >> a[i];
}

void DemSoLanXuatHien(const vector<int64_t>& a, int64_t n){
    vector<pair<int64_t, int64_t>> count;

    for (int64_t i = 0; i < n; i++) {
        int64_t element = a[i];
        bool found = false;
        for (size_t j = 0; j < count.size(); j++) {
            if (count[j].first == element) {
                count[j].second += 1;
                found = true;
                break;
            }
        }
        if (!found) {
            count.push_back(make_pair(element, 1));
        }
    }

    for (size_t i = 0; i < count.size(); i++) {
        for (size_t j = i + 1; j < count.size(); j++) {
            if (count[i].second < count[j].second || (count[i].second == count[j].second && count[i].first > count[j].first)) {
                swap(count[i], count[j]);
            }
        }
    }

    for (auto it = count.begin(); it != count.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}

int main() {
    vector<int64_t> a;
    int64_t n;
    NhapMang(a, n);
    DemSoLanXuatHien(a, n);
}
