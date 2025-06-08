#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>

float solveStep6Problem8(std::map<std::string, std::pair<float, std::string>> subject_map);
bool checkSubjectCondition(std::string &subject, std::map<std::string, std::pair<float, std::string>> subject_map);
bool checkCreditsCondition(float credit);
bool checkGradeCondition(std::string grade);
bool checkPCondition(std::map<std::string, std::pair<float, std::string>> subject_map);

int main()
{
    float avg_score = 0;
    int N = 20;
    std::map<std::string, std::pair<float, std::string>> subject_map;

    // 과목 맵 생성
    for (int i = 0; i < N; i++)
    {
        std::string input;
        float credits;
        std::string subject, grade;

        std::getline(std::cin, input);
        std::istringstream iss(input);
        if (!(iss >> subject >> credits >> grade))
        {
            return 1;
        }

        if (!(checkSubjectCondition(subject, subject_map) && checkCreditsCondition(credits) && checkGradeCondition(grade)))
        { // 제한조건
            return 1;
        }

        subject_map[subject] = std::make_pair(credits, grade);
    }

    if (!checkPCondition(subject_map))
        return 1;

    avg_score = solveStep6Problem8(subject_map);
    std::cout << avg_score << '\n';

    return 0;
}

bool checkSubjectCondition(std::string &subject, std::map<std::string, std::pair<float, std::string>> subject_map)
{
    if (subject.size() < 1 && subject.size() > 50)
    {
        return false;
    }

    if (subject_map.count(subject))
    { // 과목명 서로 다름
        return false;
    }

    for (char c : subject)
    {
        if (!(std::isupper(c) || std::islower(c) || std::isdigit(c)))
        {
            return false;
        }
    }
    return true;
}

bool checkCreditsCondition(float credit)
{
    if (credit == 1.0 || credit == 2.0 || credit == 3.0 || credit == 4.0)
        return true;
    else
        return false;
}

bool checkGradeCondition(std::string grade)
{
    std::vector<std::string> valid_grade = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F", "P"};
    if (std::count(valid_grade.begin(), valid_grade.end(), grade))
        return true;
    else
        return false;
}

bool checkPCondition(std::map<std::string, std::pair<float, std::string>> subject_map)
{
    for (auto &[subject, info] : subject_map)
    {
        if (info.second != "P")
            return true;
    }
    return false;
}

float solveStep6Problem8(std::map<std::string, std::pair<float, std::string>> subject_map)
{
    float total_score = 0, total_grade = 0;
    float avg_score;

    std::map<std::string, float> grade_score_map = {
        {"A+", 4.5},
        {"A0", 4.0},
        {"B+", 3.5},
        {"B0", 3.0},
        {"C+", 2.5},
        {"C0", 2.0},
        {"D+", 1.5},
        {"D0", 1.0},
        {"F", 0.0}};

    for (const auto &[subject, info] : subject_map)
    {
        if (info.second == "P"){
            continue;
        }
        else
        {
            float subject_score = info.first * grade_score_map[info.second];
            total_score += subject_score;
            total_grade += info.first;
        }
    }

    avg_score = total_score / total_grade;

    return avg_score;
}