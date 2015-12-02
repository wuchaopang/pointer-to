//
//  main.cpp
//  pointer
//
//  Created by 20141105049 on 15/12/2.
//  Copyright © 2015年 20141105049. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a=100;
    int *p;
    p=&a;
    printf("a=%x,&a=%x,p=%x,*p=%x,&p=%x/n",a,&a,p,*p,&p);
    printf("a=%d,&a=%d,p=%d,*p=%d,&p=%d/n",a,&a,p,*p,&p);
    return 0;
}
