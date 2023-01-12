; example of how the determinant can be used to preserve or flip orientation 
; the 2D transformation matrix T scales the space by a factor of 2 in both x and y directions. 
; The determinant of the matrix is calculated using the determinant() function from the Eigen library. 
; The code check the determinant, if it's greater than 0, the orientation of the transformed space 
; is the same as the original space, if it's smaller, the orientation is flipped.
; It's important to note that, this example is a 2D transformation, in case of 3D transformation matrix
; the code should be changed according to the desired transformation that need to be achieved.

  
#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
    // 3D transformation matrix
    Matrix3f T;
    T << 2, 0, 0,
         0, 2, 0,
         0, 0, 2;

    // calculate the determinant of the matrix
    float det = T.determinant();

    // check the orientation of the transformed space
    if (det > 0)
    {
        std::cout << "Transformation preserves orientation" << std::endl;
    }
    else if (det < 0)
    {
        std::cout << "Transformation flips orientation" << std::endl;
    }

    return 0;
}

;;;;;;;;;;;;;;;;;;;

; Example of how the determinant can be used to preserve or flip orientation in computer graphics using a 3D matrix
; the 3D transformation matrix T scales the space by a factor of 2 in all x, y and z directions. 
; The determinant of the matrix is calculated using the determinant() function from the Eigen library. 
; The code check the determinant, if it's greater than 0, the orientation of the transformed space is the same 
; as the original space, if it's smaller, the orientation is flipped.

  
#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
    // 3D transformation matrix
    Matrix3f T;
    T << 2, 0, 0,
         0, 2, 0,
         0, 0, 2;

    // calculate the determinant of the matrix
    float det = T.determinant();

    // check the orientation of the transformed space
    if (det > 0)
    {
        std::cout << "Transformation preserves orientation" << std::endl;
    }
    else if (det < 0)
    {
        std::cout << "Transformation flips orientation" << std::endl;
    }

    return 0;
}
