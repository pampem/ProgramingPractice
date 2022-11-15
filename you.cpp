#include<bits/stdc++.h>
using namespace std;

 int main ()
 {
   int N, M;
   cin >> N >> M;

   int* card_all  = new int [N];
   int* tefuda_now  = new int [N];

   int ans = INT_MAX;
   int sum_tefuda_temp ;
   // int sum_tefuda_temp0 = 0;


   for(int i=0 ; i<N ; i++)
   {
     cin >> tefuda_now[i] ;
     card_all[i] = tefuda_now[i];
     // cout << i << "\t"<<tefuda_now[i] << endl;
   }

   // cout << "sum_tefuda_temp=" << sum_tefuda_temp << endl;

   int cnt=0 ;
   for(int i=0; i<N; i++)
   {
     int pick = tefuda_now[i];
     for( int k=i ; k< N-1 ; k++)  tefuda_now[k] = tefuda_now[k+1] ;

      for(int j=0; j<N; j++ )
      {
       if (tefuda_now[j] == pick)  for( int k=j ; k< N-1 ; k++)  tefuda_now[k] = tefuda_now[k+1] ;

       else if( tefuda_now[j] == (pick +1)%M )
       {
         pick = (pick+1)  % M ;
         if (tefuda_now[j] == pick)  for( int k=j ; k< N-1 ; k++)  tefuda_now[k] = tefuda_now[k+1];
       }
       else
       {
         sum_tefuda_temp += tefuda_now[j];
         if(ans > sum_tefuda_temp) ans = sum_tefuda_temp;
         break;
       }
      }
   }

   cout << "minimum of sum_tefuda_temp=\t" << ans<< endl;
   delete [] card_all;
   delete [] tefuda_now;
   return 0;
 }
