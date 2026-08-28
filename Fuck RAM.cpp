#include <iostream>
using namespace std;
int main() {
    while(true) {
        char * p= (char *)malloc(1000);
        char * np = (char *)malloc(1000);
        p = np;
    }
    return 0;
}