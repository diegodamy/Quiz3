#include <iostream>
using namespace std;

int a, b, counter, sum;

int main(){
    cout << "How many numbers of the Fiboncacci series do you want: ";
    cin >> counter;

    a = 0;
    b = 1;

    cout << endl << "The last element of this Fibonacci series is: " << endl;

//    for (int i=counter; i>0; i--){
//      suma = a + b;
//      b = a;
//      a = sum;
//    }
//      cout <<sum<< endl;

    int i=0;
    while (i<counter){
        sum = a + b;

        b = a;
        a = sum;
        i++;
    }

    cout <<sum<< endl;
}
