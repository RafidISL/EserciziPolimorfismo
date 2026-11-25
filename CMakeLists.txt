
cmake_minimum_required(VERSION 3.20)

project(EserciziPolimorfismo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Esercizio1
        Esercizio1_Base/main.cpp
        Esercizio1_Base/Veicolo.cpp
)

add_executable(Esercizio2
        Esercizio2_Medio/main.cpp
        Esercizio2_Medio/Personaggio.cpp

)

add_executable(Esercizio3
        Esercizio3_Avanzato/main.cpp
        Esercizio3_Avanzato/CartaCredito.cpp
        Esercizio3_Avanzato/Contanti.cpp
        Esercizio3_Avanzato/MetodoPagamento.cpp
        Esercizio3_Avanzato/PayPal.cpp
)

add_executable(Esercizio4
        Esercizio4_Challenge/main.cpp
)
