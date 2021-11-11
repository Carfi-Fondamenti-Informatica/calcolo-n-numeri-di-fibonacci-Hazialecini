#include <iostream>
using namespace std;

int main() {
   int a=1,b=1,c=1,l=0;
   cin>>l;
   if(l>=2){
      cout<<c<<endl;
      for(int i=0;i<(l-1);i++){
         cout<<c<<endl;
         c=b+a;
         b=a;
         a=c;
      }
   }else{
      cout<<"errore"<<endl;
   }
   return 0;
}
