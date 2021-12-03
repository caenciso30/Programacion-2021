#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>

struct Vector3D
{
  int R[3];
  Vector3D() {};
  ~Vector3D();
};

int dotproduct(std::vector<int> v1, std::vector<int> v2, std::vector<int> v4 , int N);


int main()
{
  const int N = 3;
  std::vector <int>  v1 = {1,2,3}, v2 = {4,5,6}, v3 = {0,0,0}, v4 = {0,0,0};
  for( int i = 0; i < N; ++i){
    v3[i] = v1[i] + v2[i];}
    for (int n : v3) {
      std::cout << n << "\t" << dotproduct(v1, v2, v4, N)<< std::endl;
    }
    return 0;
}
int dotproduct(std::vector<int> v1, std::vector<int> v2, std::vector<int> v4 , int N){
  int dotproduct = 0;
  for( int j = 0; j < N; ++j){
    v4[j] = v1[j] * v2[j];
    dotproduct = dotproduct + v4[j];
  }
  return dotproduct;
}

    














  
  
