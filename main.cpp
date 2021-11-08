#include <stdlib.h>
#include "profile.hpp"

int main() {
    Profile my_profile;
    my_profile.my_name = "上原裕太";
    my_profile.birth_place = "大阪府";
    my_profile.department = "工学部";
    my_profile.short_subject = "ロボティクス学科";
    my_profile.extra_curricular_activitie = "夢考房ロボットプロジェクトTeam_Robocon";
    my_profile.tastes = "プログラミング(競プロはしてないです)";

    Human uehara(my_profile);
    uehara.IntroduceMyself();

    std::cout<< std::endl;
    system("PAUSE");

    return 0;
}