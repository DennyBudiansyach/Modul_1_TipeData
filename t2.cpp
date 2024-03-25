#include <iostream>
using namespace std;

struct DataStruct {
    int nilai1;
    double nilai2;
};

int main() {
    DataStruct data;
    data.nilai1 = 11;
    data.nilai2 = 12;

    cout << "Nilai 1: " << data.nilai1 << endl;
    cout << "Nilai 2: " << data.nilai2 << endl;

    return 0;
}
