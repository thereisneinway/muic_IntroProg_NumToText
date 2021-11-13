#include <stdio.h>
void num2text(int number)
{
  int num[4];
  //check if number valid
  if(number>9999 || number<0){
    printf("Invalid number");
    return;
  }

  num[3] = number%10;
  num[2] = (number%100 - num[3])/10;
  if(num[2] < 0) num[2]=0;
  num[1] = (number%1000 - num[2])/100;
  if(num[1] < 0) num[1]=0;
  num[0] = (number-num[1])/1000;
  if(num[0] < 0) num[0]=0;

  printf("number is ");
  
  //thousand
  char* thousand[] = {"","one thousand","two thousand","three thousand","four thousand","five thousand","six thousand","seven thousand","eight thousand","nine thousand"};
  //hundred
  char* hundred[] = {"","one hundred","two hundred","three hundred","four hundred","five hundred","six hundred","seven hundred","eight hundred","nine hundred"};
  //tenth20-99
  char* tenthA[] = {"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
  //10-19
  char* tenthB[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
  //1-9
  char* neun[] = {"","one","two","three","four","five","six","seven","eight","nine"};

  printf ("%s ",thousand[num[0]]);
  printf ("%s ",hundred[num[1]]);
  if(num[0] !=0 || num[1] !=0){
    printf("and ");
  }
  if(num[2]== 1){
    printf("%s ",tenthB[num[3]]);
  }else{
    printf ("%s ",tenthA[num[2]]);
    printf ("%s ",neun[num[3]]);
  }
  
}
int main(void)
{
    num2text(1321);
 

}
