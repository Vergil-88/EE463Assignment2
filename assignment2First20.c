#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int numDigits(int input);
int Armstrong(int inn);


int main(int argc, char *argv[]){
    int countt = 0;
    int num = 0;
    while ( countt <= 30){
        if (Armstrong(num)){
            printf("%d, is an armstrong number.\n", num);
            countt = countt + 1;
        }
        num = num + 1;
    } 
    printf("These are the first %d", countt);
    return 0;
}



int Armstrong(int inn){
int n, count, number, remainder, sum=0, temp;
number=inn;
temp=number;
n=numDigits(number);
for (temp; number!=0; number){
remainder=number%10;
/// start of C code (use GCC)
count=n;
while(count>1){

remainder*=number%10;
count--;

}
sum+=remainder; // end of C code (use GCC) ///
//sum+=(int)pow((double)remainder,3.0); // C++ code (use G++)
number=number/10;
}
if (sum == temp)
return 1;
else
// printf("%d is not an Armstrong number.\n", temp);
return 0;
}

int numDigits(int input){
int count=0;
while(input>0){
count++;
input=input/10;

}
return count;

}