#include"CMP3_MCI.h"///記得要用雙引號不能用角括號
#include<stdio.h>

CMP3_MCI myMP3;///宣告一個變數,名字叫myMP3
int main()
{
    myMP3.Load("1.mp3");
    myMP3.Play();
    int a;///幫忙卡住,程式不要快速結束!!!
    scanf("%d",&a);
}
