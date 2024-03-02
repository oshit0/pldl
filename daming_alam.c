#include <stdio.h>

int main(){
  int test_cases;
  float math, sci, eng, fil;
  float math_u, sci_u, eng_u, fil_u;
  float gpa;
  scanf("%d", &test_cases);
  int i;
  for(i = 0; i < test_cases; ++i){
    scanf("%f %f %f %f", &math, &sci, &eng, &fil);
    scanf("%f %f %f %f", &math_u, &sci_u, &eng_u, &fil_u);
    gpa = ( (math * math_u) + (sci * sci_u) + (eng * eng_u) + (fil * fil_u) ) / ( math_u + sci_u + eng_u + fil_u );
    if(math <= 2.50 && sci <= 2.50 && eng <= 2.50 && fil <= 2.50){
      if(gpa <= 1.50){
        printf("President's Lister\n");
      }
      else{
        printf("Dean's Lister\n");
      }
    }
    else{
      printf("Pasado Lang\n");
    }
  }

  return 0;
}