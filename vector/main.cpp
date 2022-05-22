#include <iostream>
#include <Matrix.h>
#include <ctime>

int main()
{
  srand(time(NULL));
  TVector<int> a(1000000);
  TVector<int> b(1000000);
  TVector<int> c;
  for (int i = 0; i < 1000000; i++) a[i] = rand() % 100;
  for (int i = 0; i < 1000000; i++) b[i] = rand() % 100;
  /*a[0] = 1;
  a[1] = 2;
  a[2] = 3;

  b[0] = 3;
  b[1] = 2;
  b[2] = 1;*/
  clock_t t;
  t = clock();
  c = a * b;
  t = clock() - t;

  std::cout << " " << "time = " << (double(t)) / CLOCKS_PER_SEC << std::endl;
  /*c = a - b;
  std::cout << c << std::endl;
  c = a + b;
  std::cout << c << std::endl;
  c = a / b;
  std::cout << c << std::endl;*/


  TMatrix<int> m1(2,2);
  TMatrix<int> m2(2,2);
  TMatrix<int> mr(1000);
 
  for (int i = 0; i < 1000; i++) {
    for (int k = 0; k < 1000; k++) {
      mr[i][k] = rand() % 100;
    }
  }
  t = clock();
  mr = mr * mr;
  t = clock() - t;


  std::cout << " " << "timeMatr = " << (double(t)) / CLOCKS_PER_SEC << std::endl;
  t = clock();
  mr = mr + mr;
  t = clock() - t;


  std::cout << " " << "timeMatr = " << (double(t)) / CLOCKS_PER_SEC << std::endl;


  /*m1[0][0] = 1;
  m1[0][1] = 0;
  m1[1][0] = -1;
  m1[1][1] = 5;

  m2[0][0] = 1;
  m2[0][1] = 2;
  m2[1][0] = 4;
  m2[1][1] = 0;*/


  /*t = clock();
  c = a * b;
  t = clock() - t;
  mr = m1 + m2;
  std::cout << mr << std::endl;
  mr = m1 - m2; 
  std::cout << mr << std::endl;
  mr = m1 * m2;
  std::cout << mr << std::endl;

  TVector<int> d(2);
  TVector<int> e(2);
  TVector<int> f(2);

  d[0] = 1; 
  d[1] = 4;


  e = mr * d;
  std::cout << e << std::endl;
  f = d * mr;  
  std::cout << f << std::endl; */

  return 0;
}