#include <iostream>
#include <cstddef>
#include <stdexcept>

template<typename T, std::size_t N>
class StaticArray {
private:
    T m_data[N];

public:
    constexpr std::size_t size() const {
        return N;
    }

    T& operator[](std::size_t index) {
        return m_data[index];
    }

    const T& operator[](std::size_t index) const {
        return m_data[index];
    }

    T& at(std::size_t index) {
        if (index >= N) {
            throw std::out_of_range{"StaticArray index out of range"};
        }
        return m_data[index];
    }

    const T& at(std::size_t index) const {
        if (index >= N) {
            throw std::out_of_range{"StaticArray index out of range"};
        }
        return m_data[index];
    }

    // O(n): visits every element
    void fill(const T& value) {
        for (std::size_t i{0}; i < N; ++i) {
            m_data[i] = value;
        }
    }

    // O(1): direct access to the first element
    T& front() {
        return m_data[0];
    }

    const T& front() const {
        return m_data[0];
    }

    // O(1): direct access to the last element
    T& back() {
        return m_data[N - 1];
    }

    const T& back() const {
        return m_data[N - 1];
    }

    // O(n): linear search, returns index of first match or -1
    int find(const T& value) const {
        for (std::size_t i{0}; i < N; ++i) {
            if (m_data[i] == value) {
                return static_cast<int>(i);
            }
        }
        return -1;
    }
};

template<typename T, std::size_t N>
void print(const char* label, const StaticArray<T, N>& arr) {
    std::cout << label;
    for (std::size_t i{0}; i < arr.size(); ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << '\n';
}

int main() {
    StaticArray<int, 5> arr;

    arr.fill(0);
    print("After fill(0):", arr);

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    print("After setting values:", arr);

    std::cout << "Front: " << arr.front() << ", Back: " << arr.back() << '\n';

    std::cout << "Index of 30: " << arr.find(30) << '\n';
    std::cout << "Index of 99: " << arr.find(99) << '\n';

    return 0;
}
