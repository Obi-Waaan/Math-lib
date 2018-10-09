namespace math
{
  template <class T>
  class Matrix
  {
  public:
    Matrix(int row, int column);

    T determinate();
    T trace();
    void add(int row, int column, T value);
    void rank();
    Matrix transpose();

    const Matrix operator+(const Matrix rhs);
    const Matrix operator*(const Matrix rhs);
    const Matrix operator*(T koef);
    bool operator== (const Matrix rhs);

    //Elementary row operations
    void row_switching(int r1, int r2);
    void row_addition(int r1, int r2);
    void row_multiplying(int r1, T koef);




  }
}
