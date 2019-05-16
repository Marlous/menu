/*
 * main.c
 *
 *  Created on: 2019/05/16
 *      Author: Mo
 */


#include <stdio.h>
#include "menu.h" // 在使用 menu 程序的代码中包含其接口文件。


void module_one(void);
void module_two(void);
void module_three(void);


/*
 * Main function
 */
int main(void)
{
	// 先使用 MenuConfig() 函数 API 进行配置。
	// 然后使用 ExcuteMenu() 函数运行菜单程序。
	MenuConfig("one", "print info about this function!", module_one);
	MenuConfig("two", "some description", module_two);
	MenuConfig("three", "some description", module_three);
	ExcuteMenu();

	return 0;
}


/*
 * Sub function
 */
void module_one(void)
{
	printf("test one!\n");
}


void module_two(void)
{
	printf("test two!\n");
}


void module_three(void)
{
	printf("test three!\n");
}
