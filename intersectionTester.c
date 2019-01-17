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

if(ay <= cy && ay >= dy){printf("Intersection: %d  >=   %d   >=   %d\n", cy, ay, dy);return 1;}
if(ay <= dy && ay >= cy){printf("Intersection: %d  >=   %d   >=   %d\n", dy, ay, cy);return 1;}
// If AY is between CY(greater) and DY(lower) or AY is between DY(greater) and CY(lower) 

if(by <= cy && by >= dy){printf("Intersection: %d  >=   %d   >=   %d\n", cy, by, dy);return 1;}
if(by <= dy && by >= cy){printf("Intersection: %d  >=   %d   >=   %d\n", dy, by, cy);return 1;}
// If BY is between CY(greater) and DY(lower) or BY is between DY(greater) and CY(lower) 

if(cy <= ay && cy >= by){printf("Intersection: %d  >=   %d   >=   %d\n", ay, cy, by);return 1;}
if(cy <= by && cy >= ay){printf("Intersection: %d  >=   %d   >=   %d\n", by, cy, ay);return 1;}
// If CY is between AY(greater) and BY(lower) or CY is between BY(greater) and AY(lower)

if(dy <= ay && dy >= by){printf("Intersection: %d  >=   %d   >=   %d\n", ay, dy, by);return 1;}
if(dy <= by && dy >= ay){printf("Intersection: %d  >=   %d   >=   %d\n", by, dy, ay);return 1;}
// If DY is between AY(greater) and BY(lower) or DY is between BY(greater) and AY(lower)         
}


if(ay == by && cy == dy && ay == cy && by == dy){
if(ax <= cx && ax >= dx){printf("Intersection: %d  >=   %d   >=   %d\n", cx, ax, dx);return 1;}
if(ax <= dx && ax >= cx){printf("Intersection: %d  >=   %d   >=   %d\n", dx, ax, cx);return 1;}
// If AX is between CX(greater) and DX(lower) or AX is between DX(greater) and CX(lower) 

if(bx <= cx && bx >= dx){printf("Intersection: %d  >=   %d   >=   %d\n", cx, bx, dx);return 1;}
if(bx <= dx && bx >= cx){printf("Intersection: %d  >=   %d   >=   %d\n", dx, bx, cx);return 1;}
// If BX is between CX(greater) and DX(lower) or BX is between DX(greater) and CX(lower) 

if(cx <= ax && cx >= bx){printf("Intersection: %d  >=   %d   >=   %d\n", ax, cx, bx);return 1;}
if(cx <= bx && cx >= ax){printf("Intersection: %d  >=   %d   >=   %d\n", bx, cx, ax);return 1;}
// If CX is between AX(greater) and BX(lower) or CX is between BX(greater) and AX(lower)

if(dx <= ax && dx >= bx){printf("Intersection: %d  >=   %d   >=   %d\n", ax, dx, bx);return 1;}
if(dx <= bx && dx >= ax){printf("Intersection: %d  >=   %d   >=   %d\n", bx, dx, ax);return 1;}
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

int ax = 2;
int ay = 17; 
int bx = 15; 
int by = 10;
int cx = 7; 
int cy = 19;
int dx = 3; 
int dy = 6;

int result = 0;

result = calculate(ax,ay,bx,by,cx,cy,dx,dy);

if(result == 1){
printf("Line segments (%d, %d) -> (%d, %d) and (%d, %d) -> (%d, %d) intersect.\n", ax,ay,bx,by,cx,cy,dx,dy);
printf("\n");
}

if(result == 0){
printf("Line segments (%d, %d) -> (%d, %d) and (%d, %d) -> (%d, %d) do not intersect.\n",ax,ay,bx,by,cx,cy,dx,dy);
printf("\n");
}

return(0);

}
