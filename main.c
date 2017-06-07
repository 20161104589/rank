//
//  main.c
//  rank
//
//  Created by 杨志伟 on 2017/6/7.
//  Copyright © 2017年 杨志伟. All rights reserved.
//

#include <stdio.h>

int main()
{
   
    int i,j,temp;
    int  a[10];
   
    for(i=1;i<=10;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=1;i<=9;i++)
    for(j=1;j<11-i;j++)
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    for(i=1;i<=10;i++)
        printf("%d\n ",a[i]);
    return 0;
}
