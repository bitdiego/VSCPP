#include <iostream>

using namespace std;

int main()
{
    char* message {"Hello world!"};
    cout << message << endl;

    *(message+1) = 'S';
    cout << "now message is " << message << endl;
    return 0;
}
