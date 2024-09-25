
#include<stdio.h>
int main() {
    int a[5];
    int num;
    int count=0;
    for(int i=0;i<5;i++){
        scanf("%d",&num);

        if(num%2==0){
            a[count]=num;
            count++;
        }


    }

    for(int j=0;j<count;j++){
        if(a[j]%2==0){
        printf("array =%d\n",a[j]);
        }
    }

    return 0;
}

/*#include<stdio.h>

int main() {
    int a[5]; // Specify the size of the array
    int num;
    int count = 0; // Counter to keep track of even numbers entered

    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            a[count] = num; // Store even numbers in the array
            count++;
        }
    }

    // Printing even numbers stored in the array
    printf("Even numbers entered:\n");
    for(int i = 0; i < count; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
*/
