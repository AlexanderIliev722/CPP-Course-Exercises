#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account acc1(500);

    acc1.credit(200);
   cout << acc1.getBalance() << endl;
    acc1.debit(300);
    cout << acc1.getBalance() << endl;

    return 0;
}
