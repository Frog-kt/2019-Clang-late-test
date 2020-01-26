#include <iostream>
using namespace std;

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
   cout << "start" << endl;
   i = 999;
}

// デストラクタ
Hoge::~Hoge()
{
   cout << "end" << endl;
}

// class関数 p()
void Hoge::p()
{
   cout << i << endl;
}

class Foo : public Hoge
{
public:
   void p2();
};

void Foo::p2()
{
   i += 10;
   cout << i << endl;
}

int main()
{
   Foo foo;
   foo.p();
   foo.p2();
}