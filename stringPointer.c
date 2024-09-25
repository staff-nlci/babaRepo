#include<stdio.h>
int main(){
//print only one character pointer
char a ='k';
char *ptr=&a;
printf("first example = %c\n",*ptr);
//create string  pointer
//char name[]="kavita";
//char *nameptr=name;
//while(*nameptr!='\0'){
//    printf("%c",*nameptr);
//    *nameptr++;
//}
//printf("\n");
////modify array value using pointer
//char var[]="kavita";
//char *varptr=var;
//varptr[0]='M';
//while(*varptr!='\0'){
//    printf("%c",*varptr);
//    *varptr++;
//}
//// function to calculate length of character
char charcter[]="my name is  kavita maurya";
lengthChar(charcter);

}
void lengthChar(char *str){
    char *st=str;
    int le=0;
    while(*st){
    st++;
      le++;
    }
printf("\nlenght = %d",le);
}
