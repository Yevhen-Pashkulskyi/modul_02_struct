#pragma once
struct Tv {
    int id;
    double height, width, length, diagonal;
    char model[50];
};
struct TvSamsung {
    struct Tv samsung;
    char serial_number[50];
};