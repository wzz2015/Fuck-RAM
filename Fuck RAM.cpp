#include <iostream>
using namespace std;
int main() {
    while(true) {
        char * p= (char *)malloc(100);
        char * np = (char *)malloc(100);
        p = np;
    }
    return 0;
}