
std::vector<int> getRandomVector(size_t size) {
    std::vector<int> vec;
    for (size_t i = 0; i < size; ++i) {
        vec.push_back(rand() % 100);
    }
    return vec;
}