//
//  main.c
//  ChangeNum
//
//  Created by HiLau on 2023/6/15.
//

#include <stdio.h>


//异或实现两个数交换 - 同为0，不同为1
//0^a=a  a^a=0  a^a^b=b


int main()
{
    int a = 3;
    int b = 5;
    a = a ^ b;//此时的a=a^b可以理解为一个密码，当异或b时，可以反得a
    b = a ^ b;//a^b^b
    a = a ^ b;//a^b^a^b^b
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}

//下面也是没有中间变量的方法，但是存在缺陷 - int有最大值，当a和b太大时，会溢出（a+b会进位）
//
//int main()
//{
//    int a = 3;
//    int b = 5;
//    a = a+b;
//    b = a-b;
//    a = a-b;
//    printf("a = %d\n",a);
//    printf("b = %d\b",b);
//    return 0;;
//}
