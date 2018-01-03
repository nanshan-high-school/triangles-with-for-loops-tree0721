#include <iostream>

using namespace std;

int main() {
  int a;
  
  cout<<"請選擇要加密或解密，如要加密請輸入1，如要解密請輸入2\n";
  cin>>a ;
  
  if(a=1){ 
    
    int  b ;
    
    cout<<"請問要設定幾個字母當密碼\n";
    cin>> b ;
    
    char c [b+1];
    cout<<"請輸入大寫密碼\n";
    cin>> c ;
    
    cout<<"位移幾個單位?\n";
    int d ;
    cin>>d;
    
    for(int e=0 ; e<b; e++){
      
    c[e] = c[e] + d ;
    
      if(c[e]+d>90){
        c[e]=c[e]- 90 + 65 -1;
    
      }
   }
    cout<<c;
    
    
    
      if(a=2){ 
    
    int  b ;
    
    cout<<"請問要設定幾個字母當密碼\n";
    cin>> b ;
     
    char c [b+1];
    cout<<"請輸入大寫密碼\n"
    cin>> c ;
    
    cout<<"位移幾個單位?\n";
    int d ;
    cin>>d;
    
    for(int e=0 ; e<b; e++){
      
    c[e] = c[e] - d ;
    
      if(c[e]-d<65){
        c[e]=c[e]+ 90 - 65 +1;
    
      }
   }
    cout<<c;
  }  
  return 0 ;
}
}