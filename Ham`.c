#include <stdio.h>
 
//Hàm tính điểm trung bình
double getAverageScore(double scores[], int n) {
  int sum = 0;
  double average;
  for (int i = 0; i < n; i++){
    sum += scores[i];
  }
  average = (double) sum / n;
  return average;
}
 
// hoàn thành hàm Phân loại và trả về kết quả
char computeGrade(double averageScore) {
  double average;
  char emty = ' ';
  if(average >= 100 && average <= 0 ){
    return emty;
  }
  else if(average >= 80){
    char A = 'A';
    return A;
  }else if (average >= 60){
    char B = 'B';
    return B;
  }
  else if(average >= 50){
    char C = 'C';
    return C;
  }else{
    char F = 'F';
    return F;
  }
}
 
int main() {
  // Nhập đầu vào là một mảng
  int n;
  scanf("%d", &n);
  double scores[n];
  for(int i=0 ; i<n; i++){
  scanf("%lf",&scores[i]);
  }
  double averageScore = getAverageScore(scores,n);
  char grade = computeGrade(averageScore);
  printf("Diem trung binh: %.2lf\n", averageScore);
  printf("Dat loai: %c", grade);
  return 0;
}
  