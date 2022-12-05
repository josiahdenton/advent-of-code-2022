#pragma once
#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <algorithm>
#include <fstream>
#include <filesystem>
#include <tuple>
#include <iostream>
#include <deque>

void ltrim(std::string &s);
void rtrim(std::string &s);
void trim(std::string &s);

bool open_file(std::filesystem::path &path, std::fstream &fs);
std::filesystem::path startup(int day);

#endif /* UTILS_H */