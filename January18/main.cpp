#include <iostream>
#include <list>
#include <iterator>
#include <set>
#include <stack>
#include <map>
#include <queue>
using namespace std;
void showq(queue<int> queue1)
{
    queue<int> queue2 = queue1;
    while (!queue2.empty()) {
        cout << '\t' << queue2.front();
        queue2.pop();
    }

}

int main()
{
//method for cin in list and sum elements
//    list<int>listN;
//    cout << "enter number or 0 for end" << endl;//ili puk int n=1; , if(n!=0){while...}{else{break
//    int n;
//    cin >> n;
//    if(n!=0){
//    while(n!=0){
//    listN.push_back(n);
//        cout << "enter number or 0 for end" << endl;
//        cin >> n;
//
//    }
//----------------------------
//zad2
//imame list ot chisla, da se nameri nai dulgata subsequence ot chisla v lista
// multimap<int, double, less<int> >Mmid;
// multimap<int, int, less<int> >Count;
//
//map<int, int> counters;
//int size = 14;
//int arr[] = {12,12,4,4,4,8,1,9,4,4,4,4,4,9,8,8};
//
//set<int>mySet;
//mySet.insert(arr, arr+size);
//for(int el : mySet){
//    cout << el << " ";
//    counters[el] = 0;
//}
//cout << endl;
//for(pair<int, int> el : counters){
//cout << el.first << " -> " << el.second << endl;
//
//}
//
//for(int i=0; i<size; i++){
//    //start counting
//     //if current element is equal to next element -> count++
//    //if current element is different than the next element
//    //uodate map key:element and value:counter
//    //count=0;
//    if(arr[i]==arr[i+1]){
//
//    }
//
//}

//zad3
//stack<int> st;
//int n;
//cout << "ENter smth to start to put elements";
//cin>>n;
//if(n!=0){
//while(n!=0){
//cout<<"Enter a number" << endl;
//cin >> n;
//st.push(n);
//if(n==0){
//    st.pop();
//    break;
//}
//    }
//    while(!st.empty()){
//cout << st.top();
//st.pop();
//}
//}

//zad4
int n = 1;
queue<int> opashka;
cout << "Vuvedi chislo n" << endl;
for(int i=0; i< 100; i++){
    for(int j=0; j){

    }
}
opashka.push(n);
int s1 = n+1;
opashka.push(s1);
int s2 = s1+1;
opashka.push(s2);
int s3 = 2*s2 + 1;
opashka.push(s3);

showq(opashka);

return 0;
}
