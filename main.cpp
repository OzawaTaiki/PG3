#include <iostream>

#include <list>

// PG proj
// LE2A_06_オザワ

int main() {

    // 駅名を保持するリスト
    std::list<const char*> stations=
    {
        "Tokyo",
        "Kanda",
        "Akihabara",
        "Okatchimachi",
        "Ueno",
        "Uguisudani",
        "Nippori",
        "Tabata",
        "Komagome",
        "Sugamo",
        "Otsuka",
        "Ikebukuro",
        "Mejiro",
        "Takadanobaba",
        "Shin-okubo",
        "Shinjuku",
        "Yoyogi",
        "Harajuku",
        "Shibuya",
        "Ebisu",
        "Meguro",
        "Gotanda",
        "Osaki",
        "Shinagawa",
        "Tamachi",
        "Hamamatsucho",
        "Shimbashi",
        "Yurakucho"
    };

    std::cout << "1970年 山手線" << std::endl;
    for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
        std::cout << *itr << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;

    // 2019年 山手線

    // Nippori駅の次にNishi-Nippori駅を追加
    auto itr = std::find(stations.begin(), stations.end(), "Nippori");
    stations.insert(++itr, "Nishi-Nippori");

    std::cout << "2019年 山手線" << std::endl;
    for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
        std::cout << *itr << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;

    // 2022年 山手線

    // sinagawa駅の次にTakanawa Gateway駅を追加
    itr = std::find(stations.begin(), stations.end(), "Shinagawa");
    stations.insert(++itr, "Takanawa Gateway");

    std::cout << "2022年 山手線" << std::endl;
    for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
        std::cout << *itr << std::endl;
    }


	return 0;
}