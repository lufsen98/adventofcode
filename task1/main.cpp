#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>

void similarityScore(const std::vector <int>& list,const std::vector <int>& list2, std::map<int,int>& map);

int main() 
{
    std::ifstream file;
    std::string line;
    size_t total2 = 0;
    size_t total = 0;
    std::vector <int> list1;
    std::vector <int> list2;
    std::map<int,int> frequenzy;

    //öppna filen
    file.open("numbers.txt");
    if (file.fail()){
        std::cout << "Could't open file";
        return 1;
    }
    std::string substring1;
    while(getline(file,line)) {
       size_t spaceposition = line.find(' ');
       list1.push_back(std::stoi(line.substr(0,spaceposition)));
       list2.push_back(std::stoi(line.substr(spaceposition)));

    }
    file.close();

    std::sort(list1.begin(),list1.end());
    std::sort(list2.begin(),list2.end());
    for(const auto& it : list1) {
        std::cout << it << "\n";
    }
    std::cout << "NEW LIST\n";
    for (const auto& it : list2) {
        std::cout << it << "\n";
    }
    for(int i = 0; i < list1.size(); i++) {
        //gör om negativa till positiva tal. absoluta tal
        total += std::abs(list2[i] - list1[i]);
    }

    std::cout << "\n\nTOTAL: " << total << "\n";
    // calculate similaritescore
    similarityScore(list1,list2,frequenzy);
    for(const auto& it: frequenzy) {
        std::cout << it.first << " " << it.second << "\n";
        total2 += it.first * it.second;
    }
    std::cout << total2;
    return 0;
}

void similarityScore(const std::vector <int>& list, const std::vector <int>& list2, std::map<int,int>& map ) {
    for(int i = 0; i < list.size(); i++) {
        int c = 0;
        for (int j = 0 ; j < list.size(); j++) {
            if(list[i] == list2[j]) {
                c++;
                map[list[i]] = c;
            }
        }
    }
}