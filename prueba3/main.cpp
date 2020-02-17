#include <iostream>

using namespace std;



int main()
{
    for (int j=2;j<=10001;j++){
     int a=0;
     for(int i=1;i<=10001;i++)
     {
         if(j%i==0)
         a++;
     }
     if (a==2){
     printf("%d\n", j);
     }
     }
        return 0;
}
