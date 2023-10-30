class Wektor2D
{
public:
    Wektor2D()
    {
        x = 0; // konstruktor domyslny
        y = 0;
    }

    Wektor2D(double a, double b)
    {
        x = a; // Konstruktor warunkowy. a - wartosc x, b - wartosc y
        y = b;
    }

    void   setX(double X) { x = X; } // setter, X- nowa wartosc x
    void   setY(double Y) { y = Y; } // setter, Y- nowa wartosc y
    double getX() { return x; }      // getter
    double getY() { return y; }      // getter

    Wektor2D operator+(const Wektor2D& drugi)
    {
        return Wektor2D(x + drugi.x, y + drugi.y);
    } // operator dodawania

    double operator*(const Wektor2D& drugi)
    {
        return x * drugi.x + y * drugi.y;
    } // operator mnozenia

private:
    double x;
    double y;
};