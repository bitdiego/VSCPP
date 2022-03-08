#include <iostream>

using namespace std;

void PrintVector(const int *vect, size_t n){
    for(size_t i=0; i<n; i++){
    //for(auto x : vect){
        cout<<"vect["<<i<<"] = "<<*(vect + i)<<endl;
        //cout<<x<<endl;
    }
}

int main()
{
    const unsigned long long int SIZE=10;
    /*int *p1 = new int{50};
    int *p2 = p1;

    cout << "P1 address is " << p1 << endl;
    cout << "P1 content is " << *p1 << endl;

    cout << "P2 address is " << p2 << endl;
    cout << "P2 content is " << *p2 << endl;

    delete p1;
    p1 = nullptr;
    if(p1 != nullptr){
        cout << "P2 address after DEL is " << p2 << endl;
        cout << "P2 content after DEL is " << *p2 << endl;
    }
    else{
        cout << "P1 is null " << p1 << endl;
    }*/

    int *p3 = new int[SIZE];
    if(p3!=nullptr){
        for(size_t i=0; i<SIZE; i++){
            *(p3 + i) = i+1;
        }

        PrintVector(p3,SIZE);
        delete[] p3;
        p3 = nullptr;
    }
    else {
        cout<<"could not init vector"<<endl;
    }


    return 0;
}
