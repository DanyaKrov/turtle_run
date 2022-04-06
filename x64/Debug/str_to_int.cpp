#include "Turtle.h"

int len(string str)
{
    int res = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        res += 1;
    }
    return res;
}

int itc_find_str(string str1, string str2) {
    if (len(str2) > len(str1))
        return -1;
    else
    {
        int answer = 1;
        for (int i = 0; i < len(str1); i++)
        {
            if (str1[i] == str2[0] && len(str1) - i >= len(str2))
            {
                for (int j = 1; j < len(str2); j++)
                {
                    if (str2[j] == str1[i + j])
                        answer++;
                    else
                    {
                        answer = 1;
                    }
                }
                if (answer == len(str2))
                    return i;
            }
        }
        return -1;
    }
}
int str_to_int(string str) //convert string to integer
{
    int neg = 1;
    if (itc_find_str(str, "-") != -1)
        neg = -1;
    int res = 0;
    int mult = 1;
    double mult_ = 0.1;
    bool dot_passed = false;
    if (itc_find_str(str, ".") != -1) {
        double res_ = 0.0;
        for (int i = itc_find_str(str, ".") - 1; i >= (itc_find_str(str, "-") != -1); i--) {
            res += (str[i] - 48) * mult;
            mult *= 10;
        }
        for (int i = itc_find_str(str, ".") + 1; str[i] != '\0'; i++) {
            res_ += (str[i] - 48) * mult_;
            mult_ *= 0.1;
        }
        res += roundf(res_);
    }
    else {
        for (int i = len(str) - 1; i >= (itc_find_str(str, "-") != -1); i--) {
            res += (str[i] - 48) * mult;
            mult *= 10;
        }
    }
    return res * neg;
}
