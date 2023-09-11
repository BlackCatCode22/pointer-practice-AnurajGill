#include <iostream>

using namespace std;

int main()
{

int somearray[10] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};

for (int i = 0; i < 10; i++)
{
    //cout << "\n" << somearray +i << " = " << *somearray + i << endl;

}





int* pLocation6 = &somearray[6];
int* pLocation0 = &somearray[0];
cout << pLocation0 << " = " << *pLocation0 << endl;
cout << "My random code is " << pLocation6 << endl;
cout << pLocation6 << endl;
cout << "My random code is " << pLocation0 << endl;
cout << *pLocation0 << endl;
cout << "When subtracting you get "<< pLocation0 - pLocation6 << endl;
cout << endl;



char someString[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g','h','i', 'j'};
char* psomeString = someString;

cout << "psomeString = " << psomeString << endl;

char* pLocation3 = &someString[3];
cout << "pLocation3 = " << pLocation3 << endl;
char* pLocation1 = &someString[0];
cout << "pLocation1 = " << pLocation1 << endl;



    return 0;
}
