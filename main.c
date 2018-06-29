#include <stdio.h>
void main()
{
    FILE *fp;
    char filename[40]  ;
    int i,j ;
    float da[6][5] = {0} ;
    printf(" 输入文件名: ");
    gets(filename);
    fp=fopen("studentdata.csv","r");
    fseek(fp, 5L, SEEK_SET);   // 从文件第二行开始读取
    for(i = 0 ;i < 6 ; i++)
        for(j = 0 ;j < 5 ; j++)
        {
            fscanf(fp,"%f",&da[i][j]);
            fseek(fp, 1L, SEEK_CUR);   /*fp指针从当前位置向后移动*/
        }
    
    for(i = 0 ;i < 6 ; i++)
        printf("%f\t%f\t%f\t%f\t%f\t\n",da[i][0],
               da[i][1],da[i][2],da[i][3],da[i][4]);
    
    getchar() ;
}
