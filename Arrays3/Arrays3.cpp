#if 0
// VT 76. COD.001
#include <iostream>
#include <iterator> // para std::size

int main()
{
    int array[]{ 1, 1, 2, 3, 5, 8, 13, 21 };
    //devuelve valor unsigned (c++17)
    std::cout << "El array tiene: " << std::size(array) << " elementos\n";
    //devuelve valor signed (c++20)
    std::cout << "El array tiene: " << std::ssize(array) << " elementos\n"; 

    return 0;
}


// VT 76. COD.002
#include <iostream>
#include <iterator>

void imprimirTama(int array[])
{
    std::cout << std::size(array) << '\n'; // Error
}

int main()
{
    int array[]{ 1, 1, 2, 3, 5, 8, 13, 21 };
    std::cout << std::size(array) << '\n'; // imprimirá el tamaño del array
    imprimirTama(array);

    return 0;
}


// VT 76. COD.003A
#include <iostream>
int main()
{
    int primo[5]{}; 
    primo[5] = 13;
    std::cout << primo[0];

    return 0;
}


// VT 76. COD.003
#include <iostream>
int main()
{
    int numEstudiantes{ 5 };
    int nota0{ 75 };
    int nota1{ 90 };
    int nota2{ 72 };
    int nota3{ 84 };
    int nota4{ 53 };

    int notaTotal{ nota0 + nota1 + nota2 + nota3 + nota4 };
    auto notaMedia{ static_cast<double>(notaTotal) / numEstudiantes };
    std::cout << notaMedia;

}


// VT 76. COD.004
#include<iterator>
#include <iostream>
int main()
{
    int notas[]{ 75, 90, 72, 84, 53 };
    int numEstudiantes{ static_cast<int>(std::size(notas)) }; // requiere C++17 y header <iterator>
    int notaTotal{ notas[0] + notas[1] + notas[2] + notas[3] + notas[4] };
    auto notaMedia{ static_cast<double>(notaTotal) / numEstudiantes };
    std::cout << notaMedia;
}



// VT 76. COD.005
#include<iterator>
#include<iostream>
int main()
{
    int notas[]{ 75, 90, 72, 84, 53, 79, 63 };
    int numEstudiantes{ static_cast<int>(std::size(notas)) };
    // const int numEstudiantes{ sizeof(notas)  / sizeof(notas[0]) }; // alternativa sin C++17
    int notaTotal{ 0 };

    // usamos un loop para calcular notaTotal
    for (int estudiante{ 0 }; estudiante < numEstudiantes; ++estudiante)
        notaTotal += notas[estudiante];

    auto notaMedia{ static_cast<double>(notaTotal) / numEstudiantes };
    std::cout << notaMedia;


}
#endif




// VT 76. COD.006
#include <iostream>
#include <iterator> // para std::size

int main()
{
    
    constexpr int notas[]{ 84, 92, 76, 81, 56, 97};
    constexpr int numEstudiantes{ static_cast<int>(std::size(notas)) };

    int notaMaxima{ 0 }; // realizamos seguimiento de la mayor nota
    for (int estudiante{ 0 }; estudiante < numEstudiantes; ++estudiante)
    {
        if (notas[estudiante] > notaMaxima)
        {
            notaMaxima = notas[estudiante];
        }
    }

    std::cout << "La nota + alta es " << notaMaxima << '\n';

    return 0;
}

#if 0

// VT 76. COD.007

#include <iostream>
#include <iterator>

int main()
{
    constexpr int scores[]{ 84, 92, 76, 81, 56 };
    constexpr int numStudents{ static_cast<int>(std::size(scores)) };

    int maxScore{ 0 }; // keep track of our largest score
    for (int student{ 0 }; student <= numStudents; ++student)
    {
        if (scores[student] > maxScore)
        {
            maxScore = scores[student];
        }
    }

    std::cout << "The best score was " << maxScore << '\n';

    return 0;
}
#endif