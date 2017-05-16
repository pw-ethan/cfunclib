 /*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: String.c
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

#include "String.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getLine(void)
{
	const size_t sizeIncrement = 10;
	char* buffer = malloc(sizeIncrement);
	char* currentPosition = buffer;
	size_t maximumLength = sizeIncrement;
	size_t length = 0;
	int character;

	if(currentPosition == NULL){
		return NULL;
	}
	while(1){
		character = fgetc(stdin);
		if(character == '\n'){
			break;
		}

		if(++length >= maximumLength){
			char* newBuffer = realloc(buffer, maximumLength += sizeIncrement);

			if(newBuffer == NULL){
				free(buffer);
				return NULL;
			}

			currentPosition = newBuffer + (currentPosition - buffer);
			buffer = newBuffer;
		}
		*currentPosition++ = character;
	}
	*currentPosition = '\0';
	return buffer;
}

char* trim(char* phrase)
{
	char* old = phrase;
	char* new = phrase;

	while(*old == ' '){
		++old;
	}

	while(*old){
		*new++ = *old++;
	}
	*new = 0;
	return (char*)realloc(phrase, strlen(phrase) + 1);


}
