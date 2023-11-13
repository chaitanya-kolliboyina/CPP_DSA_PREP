#include<bits/stdc++.h>
using namespace std;

int main(){

    // 1. Print n stars in a single horizontal line 

    // int n;
    // cin>>n;
    // for (int i =0;i<n;i++){
    // cout<<"*"<<" ";
    // }

    // 2. Print n stars in a single vertical line

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<"*"<<endl;
    // }

    // 3. Print N x N stars

    // int n;
    // cin>>n;
    // for (int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"* ";
    //         }
    //     cout<<endl;
    // } 

    // 4. Print right angle triangle with N rows "*"

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //5. print right angle triangle with N rows with numbers from 1

    // int n;
    // cin>>n;                                    //1
    // for(int i=0;i<n;i++){                      //22
    //     for(int j=0;j<=i;j++){                 //333
    //         cout<<i+1;                         //4444
    //      }                                     //55555
    //     cout<<endl;
    // }
    
    //6. print right angle triangle with N rows with numbers from 1

    //  int n;
    //  cin>>n;                                   //1
    // for(int i = 1;i<=n;i++){                   //12
    //     for(int j = 1;j<=i;j++){               //123
    //         cout<<j;                           //1234
    //     }                                      //12345
    //     cout<<endl;
    //  }

    // 7. print inverterd roght angle triangle from right side "*"

    // int n;
    // cin>>n;
    // for (int i = 1;i<=n;i++){                      //*****
    //     for (int j = n;j>=i;j--){                  //****
    //         cout<<"*";                             //***
    //     }                                          //**
    //     cout<<endl;                                //*
    // }

    // 8. print inverterd right angle triangle from right side "*"

    // int n;
    // cin>>n;
    // for (int i = 1;i<=n;i++){                      //12345
    //     for (int j = n;j>=i;j--){                  //1234
    //         cout<<n-j+1;                           //123
    //     }                                          //12
    //     cout<<endl;                                //1
    // }

    //9.  Print a right angle traingle with "*"

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for (int k = 1; k< (n-i);k++){                 //     *
    //         cout<<" ";                                 //    **
    //     }                                              //   ***
    //     for(int j=0;j<=i;j++){                         //  ****
    //         cout<<"*";                                 // *****
    //     }
    //     cout<<endl;
    // }    
    // return 0;

    // 10. Print a traingle with "*" n rows,n "*" in each row

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for (int k = 1; k< (n-i);k++){                  //     *
    //         cout<<" ";                                  //    * *
    //     }                                               //   * * *
    //     for(int j=0;j<=i;j++){                          //  * * * *
    //         cout<<"* ";                                 // * * * * *
    //     }
    //     cout<<endl;
    // }   
   
    // 11. Print a triangle with "*" n rows , each row has 2*i-1 stars

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for (int k = 1; k<= (n-i);k++){                             //     *
    //         cout<<" ";                                              //    ***
    //     }                                                           //   *****
    //     for(int j=1;j<=(2*i+1);j++){                                //  *******
    //         cout<<"*";                                              // *********
    //     }
      
    //     cout<<endl;
    // }     

    //11.  Print a inverted triangle with "*" n rows , each row has 2*i-1 stars

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for (int k = 0; k<i;k++){                                      //     *********
    //         cout<<" ";                                                 //      *******
    //     }                                                              //       *****
    //     for(int j=1;j<=(2*n-(2*i-1));j++ ){                            //        ***
    //         cout<<"*";                                                 //         *
    //     }
    //     for (int k = 0; k<i;k++){                              
    //         cout<<" ";                                              
    //     } 
    //     cout<<endl;
    // }     

    //12. Print a inverted and normal triangle  by combining above 2 pattern
 
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for (int k = 1; k<= (n-i);k++){                             
    //         cout<<" ";                                              
    //     }                                                           
    //     for(int n=1;n<=(2*i+1);n++){                                
    //         cout<<"*";                                             
    //     }
    //     for (int k = 1; k<=(n-i);k++){                              
    //         cout<<" ";                                              
    //     } 
    //     cout<<endl;                                                    //         *
                                                                          //        ***
    // }                                                                  //       *****
                                                                          //      *******
    // for(int i=1;i<=n;i++){                                             //     *********
    //     for (int k = 0; k<i;k++){                                      //     *********
    //         cout<<" ";                                                 //      *******
    //     }                                                              //       *****
    //     for(int j=1;j<=(2*n-(2*i-1));j++ ){                            //        ***
    //         cout<<"*";                                                 //         *
    //     }
    //     for (int k = 0; k<i;k++){                              
    //         cout<<" ";                                              
    //     } 
    //     cout<<endl;
    // }

    //13. Print a complete triangle sideways

    // int n;
    // cin>>n;                                    
    // for(int i=1;i<=(2*n-1);i++){     
    //     if (i<=((2*n-1)/2)+1){                              // *
    //         for(int j=1;j<=i;j++){                          // **
    //                     cout<<'*';                          // ***
    //      }                                                  // ****
    //     cout<<endl;                                         // *****
    //     }                                                   // ****
    //         else{                                           // ***
    //         for (int k = (2*n-i);k>0;k--){                  // **
    //             cout<<"*";                                  // *
    //         }

    //         cout<<endl;
    //     }          //22
        
    // }

    // 14. Print the pattern shown
    // int n;
    // cin>>n;
    // for (int i = 1;i<=n;i++){
    //     for (int j = 1;j<=i;j++){                                          // 1
    //         if ((i%2 != 0  && j%2!=0) || (i%2==0 && j%2 ==0)){             // 01
    //             int k = 1;                                                 // 101
    //             cout<<k;                                                   // 0101
    //         }                                                              // 10101
    //         else{
    //             int k = 0;
    //             cout<<k;
    //         }
    //     }
    //     cout<<endl;
    // }
    // 15.  Print the pattern shown 
    // int n;
    // cin>>n;
    // for (int i = 1;i<=n;i++){
    //     for (int j = 1;j<=i;j++){
    //         cout<<j;
    //     }                                         // 1       1
    //     for (int k = 2*(n-i);k>0;k--){            // 12     21
    //         cout<<" ";                            // 123   321 
    //     }                                         // 1234 4321
    //     for (int j = i;j>0;j--){                  // 1234554321
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
   
    // 16. Print the pattern shown
    // int n,count = 0;
    // cin>>n;
    // for (int i=1;i<=n;i++){
    //     for (int j = 1;j<=i;j++){                       // 1
    //         count+=1;                                   // 2 3
    //         cout<<count<<" ";                           // 4 5 6
    //                                                     // 7 8 9 10
    //  }                                                  // 11 12 13 14 15
    //  cout<<endl;
    // }

    // 17. Print right angle traingle with alphabets as shown
    // int n;
    // cin>>n;
    // for (int i = 1;i<=n;i++){
    //     for (char  j = 'A';j<'A'+i;j++){                 // A
    //         cout<<j;                                     // AB
    //     }                                                // ABC
    //     cout<<endl;                                      // ABCD
    // }                                                    // ABCDE
    

    // 18. Print traingle with alphabets as shown
    // int n;
    // cin>>n;
    // for (int i = 5; i >= 1;i--){
    //     for (char j = 'A';j<'A'+i;j++){                   // ABCDE
    //         cout<<j;                                      // ABCD
    //     }                                                 // ABC
    //    cout<<endl;                                        // AB
    // }                                                     // A
     
    // 19. Print the traingle with alphabets as shown
    // int n;
    // cin>>n;
    
    // for (int i = 1;i<=n;i++){                                    // A
    //     char p = 'A'+i-1;                                        // BB
    //     for (int j = 1; j<=i;j++){                               // CCC
    //         cout<< p;                                            // DDDD
    //     }                                                        // EEEEE
    
    //     cout<<endl;

    // }

    // 20. Print the traingle with alphabets as

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     char le = 'A';
    //     for (int k = 0; k<= (n-i-1);k++){                           //     A
    //         cout<<" ";                                              //    ABA
    //     }                                                           //   ABCBA
    //     for(int j=0;j<2*i-1;j++){                                   //  ABCDCBA
    //        cout<<le;                                                // ABCDEDCBA
    //         if (j<i-1){
    //              le++;
    //         }
    //         else{
    //             le--;
    //         }
                                   
    //     }
      
    //     cout<<endl;
    // } 

    // 21. Print the pattern shown 
    // int n;
    // cin>>n;
    // for(int i=n;i>=1;i--){                                 // E
    //     for (int j=1;j<=(n-i+1);j++){                      // DE
    //         char cr = 'A'+i+j-2;                           // CDE
    //     cout<<cr;                                          // BCDE
    //     }                                                  // ABCDE
    //     cout<<endl;
    // }

    // 22. Print the pattern shown
       
    // int n;
    // cin>>n;
    // for (int i = 1;i<=n;i++){
    //     for (int j = 1;j<=n;j++){                           // *****
    //         if((i==1 || i== n) || (j==1 || j==n)){          // *   *
    //             cout<<"*";                                  // *   *
    //         }                                               // *   *
    //         else{                                           // *****
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // 23. Print the pattern shown
    //Method 1
    // int n;
    // cin>>n;
    // for (int i = 1;i<=(2*n-1);i++){
    //     for (int j =1 ;j<=(2*n-1);j++){
    //         if((i==1 || i== (2*n-1)) || (j==1 || j==(2*n-1))){
    //             cout<<n<<" ";
    //            }
    //            else if (((i==2 || i==6) && j<=(2*n-1-1)) || ((j==2 || j == 6) && (i<=(2*n-1-2)))){
    //             cout<<n-1<<" ";
    //            }
    //            else if (((i==3 || i==5) && j<=(2*n-1-2)) || ((j==3 || j == 5) && (i<=(2*n-1-2)))) {
    //             cout<<n-2<<" ";
    //            }
    //            else{cout<<n-3<<" ";
    //            }
    //         }
    //         cout<<endl;
    //     }

    //Method 2:
    // int n; 
    // cin>>n;                                                        // 4 4 4 4 4 4 4 
    // for (int i=0;i<(2*n-1);i++){                                   // 4 3 3 3 3 3 4
    //     for (int j = 0;j<(2*n-1);j++){                             // 4 3 2 2 2 3 4
    //         int top = i;                                           // 4 3 2 1 2 3 4
    //         int bottom  = 2*n-2-i;                                 // 4 3 2 2 2 3 4
    //         int left  = j;                                         // 4 3 3 3 3 3 4
    //         int right = 2*n-2-j;                                   // 4 4 4 4 4 4 4
    //         cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
    //     }
    //     cout<<endl;
    // }

    // 24. Print the pattern shown
    
    
    // int n;
    // cin>>n;
   
    // for (int i = 1;i<=n;i++){
    //     for (int j = n;j>=i;j--){
    //         cout<<"*";
    //     }
    //     for (int k = 1;k<i;k++ ){                               // **********
    //         cout<<" ";                                          // ****  ****
    //     }                                                       // ***    ***
    //     for (int k = 1;k<i;k++ ){                               // **      ** 
    //         cout<<" ";                                          // *        *
    //     }                                                       // *        *
    //     for (int p = n;p>=i;p--){                               // **      **
    //         cout<<"*";                                          // ***    ***
    //     }                                                       // ****  ****
    //     cout<<endl;                                             // **********
    // }
    // for (int i = 1;i<=n;i++){
    //     for (int j =1;j<=i;j++){
    //         cout<<"*";
    //     }    

    //      for (int k = n-1;k>=i;k--){
    //         cout<<" ";
    //     }
    //     for (int k = n-1;k>=i;k--){
    //         cout<<" ";
    //     }                                    
                                
    //     for (int j = i;j>0;j--){          
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
        
    // Instead of using 2 loops for spaces, declare variable with initial number of spaces in 2 parts, increase and
    // decrease number of spaces by 2 
     
    // 25. Print the pattern shown
    
    // int n;
    // cin>>n;
    // for (int i = 1;i<=n;i++){
    //     for (int j =1;j<=i;j++){
    //         cout<<"*";
    //     }    

    //      for (int k = n-1;k>=i;k--){
    //         cout<<" ";
    //     }
    //     for (int k = n-1;k>=i;k--){
    //         cout<<" ";
    //     }                                    
                                
    //     for (int j = i;j>0;j--){          
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1;i<=n;i++){
    //     for (int j = n-1;j>=i;j--){
    //         cout<<"*";                                                 // *        *
    //     }                                                              // **      **
    //     for (int k = 1;k<=i;k++ ){                                     // ***    *** 
    //         cout<<" ";                                                 // ***** ****
    //     }                                                              // **********
    //     for (int k = 1;k<=i;k++ ){                                     // ****  ****
    //         cout<<" ";                                                 // ***    ***
    //     }                                                              // **      ** 
    //     for (int p = n-1;p>=i;p--){                                    // *        *
    //         cout<<"*";                                         
    //     }                                                       
    //     cout<<endl;                                             
    // }
    return 0;
}

