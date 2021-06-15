#include <iostream>

using namespace std;

int main()
{

    const int minAge{16};
    int age{0};

    cout << "How old are you?" << endl;
    cin >> age;

    if (age >= minAge)
    {
        cout << "Yes - you can drive!";
    }

    return 0;
}