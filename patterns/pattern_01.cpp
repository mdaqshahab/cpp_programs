#include <iostream>

using namespace std;

/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int i;
    for(int i=1; i<=n; i++){
        int j = i;
        int c = 1;
        while(j <= n){
            cout << c << " ";
            c++;
            j++;
        }

        int a = (i-1)*2;
        int k=0;
        while(k<a){
            cout << "* ";
            k++;
        }

        c = c - 1;
        int l = i;
        while(l <= n){
            cout << c << " ";
            c--;
            l++;
        }

        cout << endl;
    }

    return 0;
}
