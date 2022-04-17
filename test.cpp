#include <iostream>
#include <cmath>
using namespace std;

int i,j;
const int nx = 25;
const int ny = 25;
double phi[nx][ny];

void initialize(){
  for(i=0; i<=nx; i++){
    for(j=0; j<=ny; j++){
      phi[i][j] = 0.;
    }
  }
}

void visualize(){
  for(i=0; i<=nx; i++){
    for(j=0; j<=ny; j++){
      cout << phi[i][j] << " ";
    }
  cout << "\n";
  }
}

void set_phi(){
  int i_c,j_c;
  i_c = (nx-1)/2;
  j_c = (ny-1)/2;
  double radius = 7;

  for(i=0; i<=nx; i++){
    for(j=0; j<=ny; j++){
      if(sqrt(pow(i-i_c,2) + pow(j-j_c,2)) < radius){
	phi[i][j] = 1.;
      }else{phi[i][j] = 0.;
      }
    }
  }
  
}



int main(){

  initialize();
  set_phi();
  visualize();

}
