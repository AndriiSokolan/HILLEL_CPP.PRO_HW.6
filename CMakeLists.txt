cmake_minimum_required(VERSION 3.10)

# Название проекта
project(FinancialTransactions)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

# Добавляем папку include для заголовочных файлов
include_directories(include)

# Добавляем исполняемый файл и указываем исходные файлы
add_executable(FinancialTransactions 
    main.cpp
    src/Logger.cpp
    src/Transaction.cpp
    src/ShortReportVisitor.cpp
    src/DetailedReportVisitor.cpp
)
