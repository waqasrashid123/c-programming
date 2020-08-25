#include <stdio.h>
#include <stdlib.h>

int max (int, int);


/* 
 * Determines if coord is in range between
 * offset (INCLUSIVE) and offset + size (EXCLUSIVE)
 */


int isInRange(int coord, int offset, int size) {
  // if coord is in range, return 1
  if( (coord>=offset) && (coord<(offset+size) ) )
    {
      return 1;

    }
  // else, return 0
  return 0;
}

/*
 * Determines if coord is at border of offset or
 * offset + size
 */
int isAtBorder(int coord, int offset, int size) {

  if((coord=offset)||(coord=(offset+size)))
  {
    return 1;
  }
  // if coord is equal to offest or offset + size
  // return 1, else return 0
  return 0;
}

void squares(int size1, int x_offset, int y_offset, int size2) {
  //compute the max of size1 and (x_offset + size2).  Call this w

  int xo=x_offset+size2;
  //compute the max of size1 and (y_offset + size2).  Call this h
  int yo=y_offset +size2;
  int w=max(size1,xo);
  int h=max(size1,yo);
  //count from 0 to h. Call the number you count with y
  for(int y=0;y<=h;y++)
   {
     for(int x=0;x<=w;x++){
     //count from 0 to w. Call the number you count with x
       if(  (((x>=x_offset) && (x<xo)) &&
	  ((y=y_offset)||(y=yo - 1)))

	    ||
	   
	    (((y>=y_offset)&& (y<yo)) &&
	  ((x=x_offset) || (x=xo - 1)))  )
	 {
	   printf("*");
	 }
       else if (  ((x<size1) && ((y=0) || (y=size1 - 1)))
		  || ((y<size1) && ((x=0) || (x=size1 - 1))) )
		  { 

      //check if  EITHER
		  
      //    ((x is between x_offset  and x_offset +size2) AND 
      //     y is equal to either y_offset OR y_offset + size2 - 1 )
      //  OR
      //    ((y is between y_offset and y_offset + size2) AND
      //     x is equal to either x_offset OR x_offset + size2 -1)
      // if so, print a *

      //if not,
      // check if EITHER
      //    x is less than size1 AND (y is either 0 or size1-1)
      // OR
      //    y is less than size1 AND (x is either 0 or size1-1)
      //if so, print a #
 		    printf("#"); 
      //else print a space
		  }
		    else
		      printf(" ");
		  }
     }
    //when you finish counting x from 0 to w, 
    //print a newline
	   printf("\n");
   }

  int max(int c,int d){
    if(c>d)
      {
	return c;
      }
    return d;
  }

