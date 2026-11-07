#include <iostream>
#include <iomanip>
#include <stdexcept>


using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);
double retDiv(int a, int b);
int retSum(int a, int b);


int main()
{
    int a, b;

    cout << "Anna ensimmäinen luku: " << endl;
    cin >> a;
    cout << "Anna toinen luku: " << endl;
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    double result;
    //if a runtime error occurs in the try block, jump to the catch block
    try {
        result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    cout<< a << "+" <<b<< " = "<< retSum(a,b)<< endl;

    return 0;
}

/*function calcSum takes 2 integer and print a sum, doesn't return anything*/
void calcSum(int a, int b){
    int sum = a + b;
    cout << "Summa on "<<sum<<endl;
}

/* function takes 2 integer, print the quotient,  doesn't return anything
if the divisor is zero error message occurs*/
void calcDiv(int a, int b){
    if(b != 0){
        /* static_cast<double>(a) conver the integer to a float bofore dividing*/
        double quot =static_cast<double>(a) / b;
        /*fixed << setprecision(2) print 2 decimals */
        cout << "Osamaara on "<< fixed << setprecision(2) << quot << endl;
    } else {
        cout << "Jakaja ei saa olla nolla!"<<endl;
    }
}

int retSum(int a, int b){
    return a+b;
}

double retDiv(int a, int b){
    if(b == 0){
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    /*conver the integer to a float bofore dividing*/
    return static_cast<double>(a)/b;
}
