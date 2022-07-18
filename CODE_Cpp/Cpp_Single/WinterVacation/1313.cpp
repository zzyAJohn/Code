#include<iostream>

#include<algorithm>

#define MAXN 1000005

using namespace std;

int w[MAXN];//每件古董的重量
int main()

{

      int c,n;

      int sum = 0;

      int tmp = 0;

      cin >> c >> n;  

      for(int i= 1; i <= n; ++i)

           cin >> w[i];

      sort(w+1,w+n+1);

      for(int i = 1; i <= n; ++i)

      {

           tmp += w[i];

           if(tmp<=c)

                sum++;

           else

                 break;

      }

      cout <<sum<< endl;

      return 0;

}
