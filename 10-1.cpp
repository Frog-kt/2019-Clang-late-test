#include <iostream>

class Hoge
{
public:
   int i;
   Hoge();
   ~Hoge();
   void p();
};

// コンストラクタ
Hoge::Hoge()
{
   printf("start\n");
   i = 999;
}

// デストラクタ
Hoge::~Hoge()
{
   printf("end");
}

// class関数 p()
void Hoge::p()
{
   printf("%d\n", i);
}

int main()
{
   Hoge hoge;
   hoge.p();
}