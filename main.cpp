#include <iostream>

using namespace std;

int main()
{
    int arr[] = {500, 200, 100, 50, 20, 10};
    int n, Count;
    cin >> n;
    Count=0;
    int a;
    for (int i=0; i<6; i++){
        a = arr[i];
        Count+=n/a;
        n%=a;
    }
    if(n > 0){
        Count=-1;
    }
    cout << Count;
    return 0;
}
