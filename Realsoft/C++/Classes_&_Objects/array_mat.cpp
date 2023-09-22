//HomeWork

#include <iostream>

using namespace std;

class Matrix
{
        int x[3][3];
    public :
        void init();
        void setData();
        void display();
        void add(Matrix &, Matrix &);
        void sub(Matrix &, Matrix &);
        void mul(Matrix &, Matrix &);
        void transpose();
};

int main()
{
    Matrix p, q, r;
    p.setData();
    p.display();
    q.setData();
    q.display();
    cout << "\nAddition Of Matrix\n";
    r.add(p, q);
    r.display();
    cout << "\nSubtraction Of Matrix\n";
    r.sub(p, q);
    r.display();
    cout << "\nMuiltiplication Of Matrix\n";
    r.mul(p, q);
    r.display();
    cout << "\nTranspose\n";
    r.transpose();
    r.display();
}

void Matrix :: init()
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            x[i][j] = 0;
}

void Matrix :: setData()
{
    cout << "\nEnter Matrix Elements\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> x[i][j];
}

void Matrix :: display()
{
    cout << "\n-- Matrix Data --\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << x[i][j] << "\t";
        cout << endl;
    }
}

void Matrix :: add(Matrix &a, Matrix &b)
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            x[i][j] = a.x[i][j] + b.x[i][j];
}

void Matrix :: sub(Matrix &a, Matrix &b)
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            x[i][j] = a.x[i][j] - b.x[i][j];
}

void Matrix :: mul(Matrix &a, Matrix &b)
{
    Matrix res;
    res.init();
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 3; ++k)
                res.x[i][j] += a.x[i][k] * b.x[k][j]; 

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            x[i][j] = res.x[i][j];
}

void Matrix :: transpose()
{
    Matrix temp;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            temp.x[i][j] = x[j][i]; 

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            x[i][j] = temp.x[i][j];
}