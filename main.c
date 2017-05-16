 /*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: main.c
 *  简要描述: 
 *
 *  创建日期: 2017年05月16日
 *  作者: pw-ethan
 *  说明: 
 *
 *  修改日期: 
 *  作者: 
 *  说明: 
 ******************************************************************/

#include <stdio.h>
#include "String.h"

int main()
{
	char* line = getLine();
	printf("%s\n", line);
	printf("%s\n", trim(line));
    return 0;
}

