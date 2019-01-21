#include <stdio.h>

int calculate(int ax, int ay, int bx, int by, int cx, int cy, int dx, int dy){

float t = 0;
float u = 0;

float t2 = 0;
float u2 = 0;

float topT = 0;
float bottomT = 0;
float topU = 0;
float bottomU = 0;

printf("\n");

if(ax == bx && cx == dx && ax == cx && bx == dx){

if(ay <= cy && ay >= dy){return 1;}
if(ay <= dy && ay >= cy){return 1;}
// If AY is between CY(greater) and DY(lower) or AY is between DY(greater) and CY(lower) 

if(by <= cy && by >= dy){return 1;}
if(by <= dy && by >= cy){return 1;}
// If BY is between CY(greater) and DY(lower) or BY is between DY(greater) and CY(lower) 

if(cy <= ay && cy >= by){printf(return 1;}
if(cy <= by && cy >= ay){printf(return 1;}
// If CY is between AY(greater) and BY(lower) or CY is between BY(greater) and AY(lower)

if(dy <= ay && dy >= by){printf(return 1;}
if(dy <= by && dy >= ay){printf(return 1;}
// If DY is between AY(greater) and BY(lower) or DY is between BY(greater) and AY(lower)         
}

if(ay == by && cy == dy && ay == cy && by == dy){
if(ax <= cx && ax >= dx){printf(return 1;}
if(ax <= dx && ax >= cx){printf(return 1;}
// If AX is between CX(greater) and DX(lower) or AX is between DX(greater) and CX(lower) 

if(bx <= cx && bx >= dx){printf(return 1;}
if(bx <= dx && bx >= cx){printf(return 1;}
// If BX is between CX(greater) and DX(lower) or BX is between DX(greater) and CX(lower) 

if(cx <= ax && cx >= bx){printf(return 1;}
if(cx <= bx && cx >= ax){printf(return 1;}
// If CX is between AX(greater) and BX(lower) or CX is between BX(greater) and AX(lower)

if(dx <= ax && dx >= bx){printf(return 1;}
if(dx <= bx && dx >= ax){printf(return 1;}
// If DX is between AX(greater) and BX(lower) or DX is between BX(greater) and AX(lower)

}
printf("\n");

topT    = (((ax - cx) * (cy - dy)) - ((ay - cy) * (cx - dx)));    
bottomT = (((ax - bx) * (cy - dy)) - ((ay - by) * (cx - dx)));
topU    = (((bx - ax) * (ay - cy)) + ((ay - by) * (ax - cx)));
bottomU = (((ax - bx) * (cy - dy)) - ((ay - by) * (cx - dx))); 


t = topT/bottomT;

u = topU/bottomU;

if(t >= 0 && t <= 1 && u >= 0 && u <= 1){return 1;
}else{return 0;}}

int main(){

printf("\n");

//INPUT X and Y cordinates for both line-segments 
int ax = 2;
int ay = 17; 
int bx = 15; 
int by = 10;
int cx = 7; 
int cy = 19;
int dx = 3; 
int dy = 6;

int result = 0;

//RESULT from calculation
result = calculate(ax,ay,bx,by,cx,cy,dx,dy);


//IF result == 1 -> the line-segments intersect 
if(result == 1){
printf("Line segments (%d, %d) -> (%d, %d) and (%d, %d) -> (%d, %d) intersect.\n", ax,ay,bx,by,cx,cy,dx,dy);
printf("\n");
}

//IF result == 0 -> the line-segments do not intersect
if(result == 0){
printf("Line segments (%d, %d) -> (%d, %d) and (%d, %d) -> (%d, %d) do not intersect.\n",ax,ay,bx,by,cx,cy,dx,dy);
printf("\n");
}

return(0);

}
