#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


char inputCode[]=  " int add(int x, int y){return x+y;}int sub(int x, int y){return x-y;}int main(){int a=10, b=9, c=0;c = a + b;int d, e;d = c - 10;e = d * 5 ;a = add(b, c);d = sub(a, 10); return 0;} ";


int main(){

     int  size=sizeof(inputCode)/sizeof(inputCode[0]);

        int count1=0;
        int count2=0;
        int operatorAdd=0;
        int operatorSub=0;
        int operatorMul=0;
        int operatorAssignment=0;

         for(int i=0; i<size;i++){
             if(inputCode[i]=='m' && inputCode[i+1] =='a' )
                {

                      if(inputCode[i+2]=='i')
                        {
                            if(inputCode[i+3]=='n')
                            {
                                break;

                            }
                        }

                }
            if(inputCode[i]=='(' && inputCode[i-4]==' '){
                printf("Function ");
                count1++;
                printf("%d : ",count1);

                for(int j=i-3;j<i;j++){
                 printf("%c",inputCode[j]);
                }
                printf("\n");

               }

         }
          printf("Total function : %d\n\n",count1);
         for (int x=0; x<size; x++){
            if(inputCode[x]=='+' && operatorAdd==0){
                printf("Operator ");
                count2++;
                operatorAdd++;
                printf("%d : ",count2);
                printf("Addition");
                printf("\n");
            }
              if(inputCode[x]=='-' && operatorSub==0){
               printf("Operator ");
                count2++;
                operatorSub++;
                printf("%d : ",count2);
                printf("Subtraction");
                printf("\n");
            }
              if(inputCode[x]=='*' && operatorMul==0){

                 printf("Operator ");
                count2++;
                operatorAdd++;
                printf("%d : ",count2);
                printf("Multiplication");
                printf("\n");
            }
               if(inputCode[x]=='=' && operatorAssignment==0){
                printf("Operator ");
                count2++;
                 operatorAssignment++;
                printf("%d : ",count2);
                printf("Assignment");
                printf("\n");
            }
         }


 printf("Total operator : %d\n",count2);
return 0;
}
