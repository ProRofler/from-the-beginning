// Общий шаблон класса
template <typename T, int size>
class Array {
    // Реализация общего класса
};

// Частичная специализация для size == 0
template <typename T>
class Array<T, 0> {
    // Специализированная реализация для нулевого размера
};
