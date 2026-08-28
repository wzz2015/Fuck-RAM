#include <iostream>
using namespace std;
int main() {
    while(true) {
        char * p= (char *)malloc(2000);
        char * np = (char *)malloc(2000);
        p = np;
    }
    return 0;
}