#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{   int row,col;
    printf("Enter No. of row: ");
    scanf("%d",&row);
    printf("Enter No. of column: ");
    scanf("%d",&col);
    int array_2d[row][col][2][3];

    for(int v=0;v<row;v++)
    {
        for(int k =0;k<col;k++)
            {
                for(int i=0;i<2;i++)
                    {
                        for(int j=0; j<3;j++)
                            {
                                scanf("%d",&array_2d[v][k][i][j]);
                            }
                    }
            }
    }

     for(int v=0;v<row;v++)
    {
        for(int k =0;k<col;k++)
            {
                for(int i=0;i<2;i++)
                    {
                        for(int j=0; j<3;j++)
                            {
                                printf("%d\t",array_2d[v][k][i][j]);
                            }
                          cout<<endl;
                    }
                    cout<<endl;
            }
            cout<<endl;
    }



    return 0;
}

