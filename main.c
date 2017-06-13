
#include <stdio.h>

int main(int argc,const char *argv[])
{
    FILE *fp1,*fp2;
    int i,j,n,temp;
    int  a[10];
    fp1=fopen("//Users//a20161104589//Desktop//test//rank//20161104589//rank//wirteout.txt","w");
    fp2=fopen("//Users//a20161104589//Desktop//test//rank//20161104589//rank//write.txt","w");
    if(fp2==NULL)
    {
        printf("打开文件错误，要打开的文件可能不存在");
    }
    else
    {
       while(fscanf(fp2,"%d",&n)!=EOF)
       {
           for(i=1;i<=10;i++)
          {
              fscanf(fp2,"%d",&a[i]);
          }
          for(i=1;i<=9;i++)
         {
            for(j=1;j<11-i;j++)
            {
               if(a[j]>a[j+1])
               {
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
               }
            }

        }
        for(i=1;i<=10;i++)
        {
            printf("%d ",a[i]);
            fprintf(fp1,"%d",a[i]);
        }
           fprintf(fp1,"\n");
           printf("\n");

       }
        fclose(fp1);
        fclose(fp2);
    }

    return 0;
}
