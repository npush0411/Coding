#include <iostream>

using namespace std;

class Matrix
{
        int x[3][3];
    public :    
        Matrix ();
        Matrix (Matrix &);
        ~Matrix(){}
        void setData();
        void display();
        Matrix add(Matrix &);
        Matrix add(Matrix &, Matrix &);
        Matrix sub(Matrix &);
        Matrix sub(Matrix &, Matrix &);
        Matrix mul(Matrix &, Matrix &);
};

Matrix :: Matrix ()
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            x[i][j] = 0;
}

Matrix :: Matrix(Matrix &t)
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            x[i][j] = t.x[i][j];
}

void Matrix :: setData()
{
    cout << "\n-- Marix Data --\n";
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

Matrix Matrix :: add (Matrix &t)
{
    Matrix c;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            c.x[i][j] = x[i][j] + t.x[i][j];
    return c;
}

Matrix Matrix :: sub (Matrix &t)
{
    Matrix c;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            c.x[i][j] = x[i][j] - t.x[i][j];
    return c;
}

Matrix Matrix :: mul (Matrix &a, Matrix &b)
{
    Matrix res;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                res.x[i][j] += a.x[i][k] * b.x[k][j]; 
    return res;
}



int main()
{
    Matrix p, q, r;
    p.setData();
    q.setData();
    r = p.add(q);
    p.display();
    q.display();
    r.display();
}