#include <iostream>

using namespace std;

int main()
{
    int i_data = 35;
    int i_data2 = 205;

    int &ref_data=i_data;
    cout << "IDATA " << i_data << " REF DATA " << ref_data << endl;
    ref_data = 1500;

    cout << "IDATA " << i_data << " REF DATA " << ref_data << endl;

    cout << "IDATA Add " << &i_data << " REF DATA add " << &ref_data << endl;

    /*************************************/

    int *p_int = &ref_data; //legal

    int* &newref = p_int;   //legal but awful...

    const int* pconst = &i_data;
    cout << "IDATA Add " << &i_data << " PCONST DATA add " << pconst << endl;
    cout << "IDATA " << i_data << " PCONST DATA " << *pconst << endl;

    i_data++;
    cout << "IDATA " << i_data << " PCONST DATA " << *pconst << endl;

    pconst = &i_data2;
    cout << "IDATA2 Add " << &i_data2 << " REF DATA add " << pconst << endl;
    cout << "IDATA2 " << i_data2 << " PCONST DATA " << *pconst << endl;

    i_data2++;
    cout << "IDATA2 " << i_data2 << " PCONST DATA " << *pconst << endl;
    //*pconst = *pconst + 1; //illegal!!!
    cout << "IDATA2 " << i_data2 << " PCONST DATA " << *pconst << endl;

    *(pconst++);
    *(pconst++);
    cout << "PCONST final add " << pconst << endl;

    const int& c_ref = i_data;
    cout << "c_ref add " << &c_ref << " cref val " <<c_ref << endl;

    //c_ref += 2; illegal!!!!

    i_data += 100;
    cout << " post cref val " <<c_ref << endl;

    int xxx=0;

    int* const px=&xxx;
    //px=&i_data2;  illegal! px is a constant pointer to int
    return 0;
}
