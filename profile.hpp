#pragma once
/*******************************************
 * profile ver1.0 2021/11/8
 * This is Profile class.
 *
 * [Dependency]
 *
 * [Note]
 *
 * [Author]
 * Yuta Uehara
 *
 * [Change history]
 * ver1.0 2021/11/8 The first version
 ******************************************/

#include <string>
#include <iostream>

struct  Profile {
    std::string my_name;                        // 名前
    std::string birth_place;                    // 出身地
    std::string department;                     // 学部
    std::string short_subject;                  // 学科
    std::string extra_curricular_activitie;     // 課外活動
    std::string tastes;                         // 趣味
};

class Human {
public:
    Human(const Profile profile): profile(profile) {}
    void IntroduceMyself() {
        std::cout << "名前：" << profile.my_name << std::endl;
        std::cout << "出身地：" << profile.birth_place << std::endl;
        std::cout << "学部：" << profile.department << std::endl;
        std::cout << "学科：" << profile.short_subject << std::endl;
        std::cout << "課外活動：" << profile.extra_curricular_activitie << std::endl;
        std::cout << "趣味：" << profile.tastes << std::endl;
    }

private:
    Profile profile;
};