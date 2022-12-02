#include <iostream>
using namespace std;

class matrix
{
int **p;
static int d;

public:
matrix() 
{
p = new int *[d];
for(int i = 0; i < d; i++)
p[i] = new int[d];
}

matrix(int x)
{
d = x;
p = new int *[d];
for(int i = 0; i < d; i++)
p[i] = new int[d];
for(int r=0;r<d;r++)
for(int c=0;c<d;c++)
cin>>p[r][c];
}

matrix operator+(matrix);
matrix operator-(matrix);
matrix Transpose();
matrix operator*(matrix);

void display()
{
for(int r=0;r<d;r++)
{
for(int c=0;c<d;c++)
cout<<p[r][c]<<" ";
cout<<endl;
}
}
};

int matrix :: d = 0;
matrix matrix :: operator+(matrix n)
{
matrix temp;
for(int i = 0; i < d; i++)
for(int j = 0; j < d; j++)
temp.p[i][j] = p[i][j] + n.p[i][j];
return(temp);
}

matrix matrix :: operator-(matrix n)
{
matrix temp;
for(int i = 0; i < d; i++)
for(int j = 0; j < d; j++)
temp.p[i][j] = p[i][j] - n.p[i][j];

return(temp);
}

matrix matrix :: Transpose() {

matrix temp;

for(int i = 0; i < d; i++)

for(int j = 0; j < d; j++)

temp.p[i][j] = p[j][i];

return(temp);

}
matrix matrix :: operator*(matrix n) {

matrix temp;

for(int i = 0; i < d; i++)

for(int j = 0; j < d; j++)

{

temp.p[i][j]=0;

for(int k = 0; k < d; k++)

{

temp.p[i][j]=temp.p[i][j]+p[i][k]*n.p[k][j
];

}

}

return(temp);

}
int main() {

int dim;

//Enter the size of the matrix:

cin>>dim;

matrix M(dim);

matrix N(dim);

cout<<"\nMatrix M"<<endl;

M.display();

cout<<"\nMatrix N"<<endl;

N.display();

matrix T1 = M + N;

cout<<"\nMatrix M + N"<<endl;

T1.display();

matrix T2 = M - N;

cout<<"\nMatrix M - N"<<endl;

T2.display();
matrix T3 = M.Transpose();

cout<<"\nTranspose(M)"<<endl;

T3.display();

matrix T4 = M * N;

cout<<"\nMatrix M * N"<<endl;

T4.display();

return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1037002213622546463/unknown.png