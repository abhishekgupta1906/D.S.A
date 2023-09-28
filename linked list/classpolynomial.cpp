#include <iostream>
#include <cstring>
using namespace std;
// Properties :
// 1. An integer array (lets say A) which holds the coefficient and degrees. Use array indices as degree and A[i] as coefficient of ith degree.
// 2. An integer holding total size of array A.
// Functions :
// 1. Default constructor
// 2. Copy constructor
// 3. setCoefficient -
// This function sets coefficient for a particular degree value. If the given degree is greater than the current capacity of polynomial, increase the capacity accordingly and add then set the required coefficient. If the degree is within limits, then previous coefficient value is replaced by given coefficient value
// 4. Overload "+" operator (P3 = P1 + P2) :
// Adds two polynomials and returns a new polynomial which has result.
// 5. Overload "-" operator (P3 = p1 - p2) :
// Subtracts two polynomials and returns a new polynomial which has result
// 6. Overload * operator (P3 = P1 * P2) :
// Multiplies two polynomials and returns a new polynomial which has result
// 7. Overload "=" operator (Copy assignment operator) -
// Assigns all values of one polynomial to other.
// 8. print() -
// Prints all the terms (only terms with non zero coefficients are to be printed) in increasing order of degree.
// Print pattern for a single term : <coefficient>"x"<degree>

class Polynomial
{
    // array ka size
public:
    int *degCoeff;
    // pointer to an array
    int size;
    Polynomial()
    {
        this->degCoeff = new int[5];
        this->size = 5;
        for (int i = 0; i < size; i++)
        {
            /* code */
            degCoeff[i] = 0;
        }
    }
    Polynomial(int capacity)
    {
        size = capacity;
    }
    // copy constructor deep copy
    Polynomial(Polynomial const &s2)
    {
        this->degCoeff = new int[s2.size];
        for (int i = 0; i < s2.size; i++)
        {
            this->degCoeff[i] = s2.degCoeff[i];
            /* code */
        }
        this->size = s2.size;
    }
    void setCoefficient(int i, int coefficient)
    {
        // degree-index
        int t=i+1;
        if (i < size)
        {
            degCoeff[i] = coefficient;
        }

        else
        {
            int *newdegCoeff = new int[2 * size];
            for (int i = 0; i < size; i++)
            {
                /* code */
                newdegCoeff[i] = degCoeff[i];
            }
            for (int i =size; i <t; i++)
            {
                newdegCoeff[i]=0;
                /* code */
            }
            
            delete[] degCoeff;
            degCoeff = newdegCoeff;
            degCoeff[i] = coefficient;
        }
    }
    // operator overload
    // p3=p1+p2
    Polynomial operator+(Polynomial const &s2)
    {
        int n = max(this->size, s2.size);
        Polynomial p3(n);

        for (int i = 0; i < p3.size; i++)
        {
            if (i < this->size && i < s2.size)
            {
                p3.degCoeff[i] = this->degCoeff[i] + s2.degCoeff[i];
            }
            else if (i > s2.size)
            {
                p3.degCoeff[i] = this->degCoeff[i];
            }
            else
            {
                p3.degCoeff[i] = s2.degCoeff[i];
            }

            /* code */
        }
        return p3;
    }
    Polynomial operator-(Polynomial const &s2)
    {
        int n = max(this->size, s2.size);
        Polynomial p3(n);

        for (int i = 0; i < p3.size; i++)
        {
            if (i < this->size && i < s2.size)
            {
                p3.degCoeff[i] = this->degCoeff[i] - (s2.degCoeff[i]);
            }
            else if (i > s2.size)
            {
                p3.degCoeff[i] = this->degCoeff[i];
            }
            else
            {
                p3.degCoeff[i] = s2.degCoeff[i];
            }
            /* code */
        }
        return p3;
    }
    Polynomial operator*(Polynomial const &s2)
    {
        int n = this->size + (s2.size);
        Polynomial p3(n);

        for (int i = 0; i < this->size; i++)
        {

            for (int j = 0; j < s2.size; j++)
            {

                p3.degCoeff[i + j] = p3.degCoeff[i + j] +( (this->degCoeff[i]) * (s2.degCoeff[j]));

                /* code */
            }

            /* code */
        }
        return p3;
    }
    void operator=(Polynomial const &s2)
    {
        this->degCoeff = new int[s2.size];
        for (int i = 0; i < s2.size; i++)
        {
            this->degCoeff[i] = s2.degCoeff[i];
            /* code */
        }
        this->size = s2.size;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            /* code */
            if (degCoeff[i] != 0)
            {
                cout << degCoeff[i] << "x" << i << " ";
            }
        }
    }
};
int main()
{
    // int count1, count2, choice;
    // cin >> count1;

    // int *degree1 = new int[count1];
    // int *coeff1 = new int[count1];

    // for (int i = 0; i < count1; i++)
    // {
    //     cin >> degree1[i];
    // }

    // for (int i = 0; i < count1; i++)
    // {
    //     cin >> coeff1[i];
    // }

    // Polynomial first;
    // for (int i = 0; i < count1; i++)
    // {
    //     first.setCoefficient(degree1[i], coeff1[i]);
    // }

    return 0;
}