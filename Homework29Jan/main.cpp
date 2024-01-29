#include <iostream>

using namespace std;

int main()
{
int n;
cout << "Enter number of numbers:" << endl;
cin >> n;
int num;
for(int i=0; i < n; ++i){
    cout << "Enter number to check if its even or odd:";
    cin >> num;
    cout << ((num % 2 == 0) ? "Even": "Odd") << endl;
}
//2nd way
/*for(int i=0; i < n; ++i){
    cout << "Enter number to check if its even or odd:";
    cin >> num;
    if(num % 2 == 0){
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

}*/
    return 0;
}
