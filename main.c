// Sean Murphy spm6407@psu.edu
// Shang Yuan Lim szl6038@psu.edu
//Yong Lin Kwang yqk5211@psu.edu
//
// Section 10
// Breakout 1
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {




  double name = atof(readline("Enter your CMPSC 131 grade: "));

char *grade;
  if (name>=93.0){
    grade = "A";

  }
  else if (name>=90.0){
    grade = "A-";
  }
  else if (name >= 87.0){
    grade = "B+";
  }
  else if (name >= 83.0){
    grade = "B";
  }
  else if (name >= 80.0){
    grade = "B-";
  }
  else if (name >= 77.0){
    grade = "C+";
  }
  else if (name >= 73.0){
    grade = "C";
  }
  else if (name >= 60.0){
    grade = "D";
  }
  else  {
    grade = "F";
  }

  printf("Your letter grade for CMPSC 131 is %s.\n " , grade); 

  return 0;
}
