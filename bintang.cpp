
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
      int n,i,j;
      cout<<"Masukkan Nilai N = ";
      cin>>n;
    
      for (i=1; i<=n; i++)
      {
          for(j=1; j<=i; j++)
                   cout<<"*";
                   cout<<endl;
      }
      getch();
}

