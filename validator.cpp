#include "testlib.h"
using namespace std;

int main() {
    registerValidation();

    int t = inf.readInt(1, 200000, "t");
    inf.readEoln();

    for (int i = 0; i < t; i++) {
        inf.readInt(0, 1000000000, "a");
        inf.readSpace();
        inf.readInt(0, 1000000000, "b");
        inf.readSpace();
        inf.readInt(0, 1000000000, "c");
        inf.readEoln();
    }

    inf.readEof();
    return 0;
}
