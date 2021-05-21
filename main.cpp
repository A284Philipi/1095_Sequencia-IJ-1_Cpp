#include <iostream>

using namespace std;

int main()
{
    int cont = 60, i = 1;
    while (cont >= 0){
        cout << "I=" << i << " J=" << cont <<endl;
        cont = cont - 5;
        i = i + 3;
    }
    return 0;
}
