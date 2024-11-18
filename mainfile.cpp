#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    cout << left << setw(15) << "Course" << "|"
         << setw(15) << "Student" << "|" << endl;

    
    cout << "--------------------------" << endl;
 
    cout << setw(15) << "C++" << "|"
         << setw(15) << "100" << "|" << endl;

    cout << "--------------------------" << endl;

    cout << setw(15) << "Javascript" << "|"
         << setw(15) << "50" << "|" << endl;

    cout << "--------------------------" << endl;

    return 0;
}
