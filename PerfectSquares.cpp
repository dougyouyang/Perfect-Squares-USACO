//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int n, s=0;
    int i, j;
    
    cin >> n;
    
    for(i=1;i<=500;i++)
        for(j=1;j<=500;j++)
            if(i*i==j*j+n)
                s++;

    
    cout << s << endl;
    
    return 0;
}
