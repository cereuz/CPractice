#include <stdio.h>
#include <Windows.h>

int main(){
	int i;
	while(1){

	for(i = 1 ; i < 4;i++){
		char str[100] = {0};
		sprintf(str, "E:\\%d.jpg",i);
		SystemParametersInfoA(20,0,str,3);// 20代表设置系统桌面背景图片  ,   3 代表立即生效
		
		hide();
		Sleep(120000);  //休眠120秒钟 
	} 
		} 

}

void hide(void)
{
HWND hwnd;
hwnd=FindWindow("ConsoleWindowClass",NULL);
if(hwnd)
{
ShowOwnedPopups(hwnd,SW_HIDE);
ShowWindow(hwnd,SW_HIDE);
}
}
