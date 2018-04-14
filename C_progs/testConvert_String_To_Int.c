/*
 * testConvert_String_To_Int.c
 * 
 * Copyright 2018 penjo <penjo@parrot>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

#include <string.h>

int main()

{
	float a;
    int q;

    printf("\nInsert number\t");
    scanf("%f",&a);

    q=(int)a;
    ++q;

    if((q - a) != 1)
        printf("\nThe number is not an integer\n\n");
    else
        printf("\nThe number is an integer\n\n");

    return 0;
}

