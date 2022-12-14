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
#include <vector>
#include <sstream>

namespace fs = std::filesystem;

// string utils
void ltrim(std::string &s);
void rtrim(std::string &s);
void trim(std::string &s);
std::vector<std::string> ssplit_on(std::string &s, std::string &delim);

std::string grab_and_jump(std::istringstream& ss, int grab, int jump);
std::vector<std::string> parse_problem_input(std::fstream &fs);


bool open_file(const fs::path &path, std::fstream &fs);
fs::path startup(int day);

#endif /* UTILS_H */