﻿#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    vector<string>username = { "James_0","Michael_0","Robert_0","John_0","David_0","William_0","Richard_0","Joseph_0","Thomas_0","Christopher_0","Charles_0","Daniel_0","Matthew_0","Anthony_0","Mark_0","Donald_0","Steven_0","Andrew_0","Paul_0","Joshua_0","Kenneth_0","Kevin_0","Brian_0","Timothy_0","Ronald_0","George_0","Jason_0","Edward_0","Jeffrey_0","Ryan_0","Jacob_0","Nicholas_0","Gary_0","Eric_0","Jonathan_0","Stephen_0","Larry_0","Justin_0","Scott_0","Brandon_0","Benjamin_0","Samuel_0","Gregory_0","Alexander_0","Patrick_0","Frank_0","Raymond_0","Jack_0","Dennis_0","Jerry_0","Tyler_0","Aaron_0","Jose_0","Adam_0","Nathan_0","Henry_0","Zachary_0","Douglas_0","Peter_0","Kyle_0","Noah_0","Ethan_0","Jeremy_0","Christian_0","Walter_0","Keith_0","Austin_0","Roger_0","Terry_0","Sean_0","Gerald_0","Carl_0","Dylan_0","Harold_0","Jordan_0","Jesse_0","Bryan_0","Lawrence_0","Arthur_0","Gabriel_0","Bruce_0","Logan_0","Billy_0","Joe_0","Alan_0","Juan_0","Elijah_0","Willie_0","Albert_0","Wayne_0","Randy_0","Mason_0","Vincent_0","James_1","Michael_1","Robert_1","John_1","David_1","William_1","Richard_1","Joseph_1","Thomas_1","Christopher_1","Charles_1","Daniel_1","Matthew_1","Anthony_1","Mark_1","Donald_1","Steven_1","Andrew_1","Paul_1","Joshua_1","Kenneth_1","Kevin_1","Brian_1","Timothy_1","Ronald_1","George_1","Jason_1","Edward_1","Jeffrey_1","Ryan_1","Jacob_1","Nicholas_1","Gary_1","Eric_1","Jonathan_1","Stephen_1","Larry_1","Justin_1","Scott_1","Brandon_1","Benjamin_1","Samuel_1","Gregory_1","Alexander_1","Patrick_1","Frank_1","Raymond_1","Jack_1","Dennis_1","Jerry_1","Tyler_1","Aaron_1","Jose_1","Adam_1","Nathan_1","Henry_1","Zachary_1","Douglas_1","Peter_1","Kyle_1","Noah_1","Ethan_1","Jeremy_1","Christian_1","Walter_1","Keith_1","Austin_1","Roger_1","Terry_1","Sean_1","Gerald_1","Carl_1","Dylan_1","Harold_1","Jordan_1","Jesse_1","Bryan_1","Lawrence_1","Arthur_1","Gabriel_1","Bruce_1","Logan_1","Billy_1","Joe_1","Alan_1","Juan_1","Elijah_1","Willie_1","Albert_1","Wayne_1","Randy_1","Mason_1","Vincent_1","James_2","Michael_2","Robert_2","John_2","David_2","William_2","Richard_2","Joseph_2","Thomas_2","Christopher_2","Charles_2","Daniel_2","Matthew_2","Anthony_2","Mark_2","Donald_2","Steven_2","Andrew_2","Paul_2","Joshua_2","Kenneth_2","Kevin_2","Brian_2","Timothy_2","Ronald_2","George_2","Jason_2","Edward_2","Jeffrey_2","Ryan_2","Jacob_2","Nicholas_2","Gary_2","Eric_2","Jonathan_2","Stephen_2","Larry_2","Justin_2","Scott_2","Brandon_2","Benjamin_2","Samuel_2","Gregory_2","Alexander_2","Patrick_2","Frank_2","Raymond_2","Jack_2","Dennis_2","Jerry_2","Tyler_2","Aaron_2","Jose_2","Adam_2","Nathan_2","Henry_2","Zachary_2","Douglas_2","Peter_2","Kyle_2","Noah_2","Ethan_2","Jeremy_2","Christian_2","Walter_2","Keith_2","Austin_2","Roger_2","Terry_2","Sean_2","Gerald_2","Carl_2","Dylan_2","Harold_2","Jordan_2","Jesse_2","Bryan_2","Lawrence_2","Arthur_2","Gabriel_2","Bruce_2","Logan_2","Billy_2","Joe_2","Alan_2","Juan_2","Elijah_2","Willie_2","Albert_2","Wayne_2","Randy_2","Mason_2","Vincent_2","James_3","Michael_3","Robert_3","John_3","David_3","William_3","Richard_3","Joseph_3","Thomas_3","Christopher_3","Charles_3","Daniel_3","Matthew_3","Anthony_3","Mark_3","Donald_3","Steven_3","Andrew_3","Paul_3","Joshua_3","Kenneth_3","Kevin_3","Brian_3","Timothy_3","Ronald_3","George_3","Jason_3","Edward_3","Jeffrey_3","Ryan_3","Jacob_3","Nicholas_3","Gary_3","Eric_3","Jonathan_3","Stephen_3","Larry_3","Justin_3","Scott_3","Brandon_3","Benjamin_3","Samuel_3","Gregory_3","Alexander_3","Patrick_3","Frank_3","Raymond_3","Jack_3","Dennis_3","Jerry_3","Tyler_3","Aaron_3","Jose_3","Adam_3","Nathan_3","Henry_3","Zachary_3","Douglas_3","Peter_3","Kyle_3","Noah_3","Ethan_3","Jeremy_3","Christian_3","Walter_3","Keith_3","Austin_3","Roger_3","Terry_3","Sean_3","Gerald_3","Carl_3","Dylan_3","Harold_3","Jordan_3","Jesse_3","Bryan_3","Lawrence_3","Arthur_3","Gabriel_3","Bruce_3","Logan_3","Billy_3","Joe_3","Alan_3","Juan_3","Elijah_3","Willie_3","Albert_3","Wayne_3","Randy_3","Mason_3","Vincent_3","James_4","Michael_4","Robert_4","John_4","David_4","William_4","Richard_4","Joseph_4","Thomas_4","Christopher_4","Charles_4","Daniel_4","Matthew_4","Anthony_4","Mark_4","Donald_4","Steven_4","Andrew_4","Paul_4","Joshua_4","Kenneth_4","Kevin_4","Brian_4","Timothy_4","Ronald_4","George_4","Jason_4","Edward_4","Jeffrey_4","Ryan_4","Jacob_4","Nicholas_4","Gary_4","Eric_4","Jonathan_4","Stephen_4","Larry_4","Justin_4","Scott_4","Brandon_4","Benjamin_4","Samuel_4","Gregory_4","Alexander_4","Patrick_4","Frank_4","Raymond_4","Jack_4","Dennis_4","Jerry_4","Tyler_4","Aaron_4","Jose_4","Adam_4","Nathan_4","Henry_4","Zachary_4","Douglas_4","Peter_4","Kyle_4","Noah_4","Ethan_4","Jeremy_4","Christian_4","Walter_4","Keith_4","Austin_4","Roger_4","Terry_4","Sean_4","Gerald_4","Carl_4","Dylan_4","Harold_4","Jordan_4","Jesse_4","Bryan_4","Lawrence_4","Arthur_4","Gabriel_4","Bruce_4","Logan_4","Billy_4","Joe_4","Alan_4","Juan_4","Elijah_4","Willie_4","Albert_4","Wayne_4","Randy_4","Mason_4","Vincent_4","James_5","Michael_5","Robert_5","John_5","David_5","William_5","Richard_5","Joseph_5","Thomas_5","Christopher_5","Charles_5","Daniel_5","Matthew_5","Anthony_5","Mark_5","Donald_5","Steven_5","Andrew_5","Paul_5","Joshua_5","Kenneth_5","Kevin_5","Brian_5","Timothy_5","Ronald_5","George_5","Jason_5","Edward_5","Jeffrey_5","Ryan_5","Jacob_5","Nicholas_5","Gary_5","Eric_5","Jonathan_5","Stephen_5","Larry_5","Justin_5","Scott_5","Brandon_5","Benjamin_5","Samuel_5","Gregory_5","Alexander_5","Patrick_5","Frank_5","Raymond_5","Jack_5","Dennis_5","Jerry_5","Tyler_5","Aaron_5","Jose_5","Adam_5","Nathan_5","Henry_5","Zachary_5","Douglas_5","Peter_5","Kyle_5","Noah_5","Ethan_5","Jeremy_5","Christian_5","Walter_5","Keith_5","Austin_5","Roger_5","Terry_5","Sean_5","Gerald_5","Carl_5","Dylan_5","Harold_5","Jordan_5","Jesse_5","Bryan_5","Lawrence_5","Arthur_5","Gabriel_5","Bruce_5","Logan_5","Billy_5","Joe_5","Alan_5","Juan_5","Elijah_5","Willie_5","Albert_5","Wayne_5","Randy_5","Mason_5","Vincent_5","James_6","Michael_6","Robert_6","John_6","David_6","William_6","Richard_6","Joseph_6","Thomas_6","Christopher_6","Charles_6","Daniel_6","Matthew_6","Anthony_6","Mark_6","Donald_6","Steven_6","Andrew_6","Paul_6","Joshua_6","Kenneth_6","Kevin_6","Brian_6","Timothy_6","Ronald_6","George_6","Jason_6","Edward_6","Jeffrey_6","Ryan_6","Jacob_6","Nicholas_6","Gary_6","Eric_6","Jonathan_6","Stephen_6","Larry_6","Justin_6","Scott_6","Brandon_6","Benjamin_6","Samuel_6","Gregory_6","Alexander_6","Patrick_6","Frank_6","Raymond_6","Jack_6","Dennis_6","Jerry_6","Tyler_6","Aaron_6","Jose_6","Adam_6","Nathan_6","Henry_6","Zachary_6","Douglas_6","Peter_6","Kyle_6","Noah_6","Ethan_6","Jeremy_6","Christian_6","Walter_6","Keith_6","Austin_6","Roger_6","Terry_6","Sean_6","Gerald_6","Carl_6","Dylan_6","Harold_6","Jordan_6","Jesse_6","Bryan_6","Lawrence_6","Arthur_6","Gabriel_6","Bruce_6","Logan_6","Billy_6","Joe_6","Alan_6","Juan_6","Elijah_6","Willie_6","Albert_6","Wayne_6","Randy_6","Mason_6","Vincent_6","James_7","Michael_7","Robert_7","John_7","David_7","William_7","Richard_7","Joseph_7","Thomas_7","Christopher_7","Charles_7","Daniel_7","Matthew_7","Anthony_7","Mark_7","Donald_7" ,"Steven_7","Andrew_7","Paul_7","Joshua_7","Kenneth_7","Kevin_7","Brian_7","Timothy_7","Ronald_7","George_7","Jason_7","Edward_7","Jeffrey_7","Ryan_7","Jacob_7","Nicholas_7","Gary_7","Eric_7","Jonathan_7","Stephen_7","Larry_7","Justin_7","Scott_7","Brandon_7","Benjamin_7","Samuel_7","Gregory_7","Alexander_7","Patrick_7","Frank_7","Raymond_7","Jack_7","Dennis_7","Jerry_7","Tyler_7","Aaron_7","Jose_7","Adam_7","Nathan_7","Henry_7","Zachary_7","Douglas_7","Peter_7","Kyle_7","Noah_7","Ethan_7","Jeremy_7","Christian_7","Walter_7","Keith_7","Austin_7","Roger_7","Terry_7","Sean_7","Gerald_7","Carl_7","Dylan_7","Harold_7","Jordan_7","Jesse_7","Bryan_7","Lawrence_7","Arthur_7","Gabriel_7","Bruce_7","Logan_7","Billy_7","Joe_7","Alan_7","Juan_7","Elijah_7","Willie_7","Albert_7","Wayne_7","Randy_7","Mason_7","Vincent_7","James_8","Michael_8","Robert_8","John_8","David_8","William_8","Richard_8","Joseph_8","Thomas_8","Christopher_8","Charles_8","Daniel_8","Matthew_8","Anthony_8","Mark_8","Donald_8","Steven_8","Andrew_8","Paul_8","Joshua_8","Kenneth_8","Kevin_8","Brian_8","Timothy_8","Ronald_8","George_8","Jason_8","Edward_8","Jeffrey_8","Ryan_8","Jacob_8","Nicholas_8","Gary_8","Eric_8","Jonathan_8","Stephen_8","Larry_8","Justin_8","Scott_8","Brandon_8","Benjamin_8","Samuel_8","Gregory_8","Alexander_8","Patrick_8","Frank_8","Raymond_8","Jack_8","Dennis_8","Jerry_8","Tyler_8","Aaron_8","Jose_8","Adam_8","Nathan_8","Henry_8","Zachary_8","Douglas_8","Peter_8","Kyle_8","Noah_8","Ethan_8","Jeremy_8","Christian_8","Walter_8","Keith_8","Austin_8","Roger_8","Terry_8","Sean_8","Gerald_8","Carl_8","Dylan_8","Harold_8","Jordan_8","Jesse_8","Bryan_8","Lawrence_8","Arthur_8","Gabriel_8","Bruce_8","Logan_8","Billy_8","Joe_8","Alan_8","Juan_8","Elijah_8","Willie_8","Albert_8","Wayne_8","Randy_8","Mason_8","Vincent_8","James_9","Michael_9","Robert_9","John_9","David_9","William_9","Richard_9","Joseph_9","Thomas_9","Christopher_9","Charles_9","Daniel_9","Matthew_9","Anthony_9","Mark_9","Donald_9","Steven_9","Andrew_9","Paul_9","Joshua_9","Kenneth_9","Kevin_9","Brian_9","Timothy_9","Ronald_9","George_9","Jason_9","Edward_9","Jeffrey_9","Ryan_9","Jacob_9","Nicholas_9","Gary_9","Eric_9","Jonathan_9","Stephen_9","Larry_9","Justin_9","Scott_9","Brandon_9","Benjamin_9","Samuel_9","Gregory_9","Alexander_9","Patrick_9","Frank_9","Raymond_9","Jack_9","Dennis_9","Jerry_9","Tyler_9","Aaron_9","Jose_9","Adam_9","Nathan_9","Henry_9","Zachary_9","Douglas_9","Peter_9","Kyle_9","Noah_9","Ethan_9","Jeremy_9","Christian_9","Walter_9","Keith_9","Austin_9","Roger_9","Terry_9","Sean_9","Gerald_9","Carl_9","Dylan_9","Harold_9","Jordan_9","Jesse_9","Bryan_9","Lawrence_9","Arthur_9","Gabriel_9","Bruce_9","Logan_9","Billy_9","Joe_9","Alan_9","Juan_9","Elijah_9","Willie_9","Albert_9","Wayne_9","Randy_9","Mason_9","Vincent_9" };

    vector<string>carsmodels{ "Toyota-Camry", "Ford-Mustang","Toyota-Corolla","Honda-Civic","Chevorlet-Corvette","Toyota-4Runner","Honda-Accord","Honda-CR-V","Toyota-Highlander","Dodge-Charger","Subaru-Outback","Chevrolet-Silverado","Volkswagen-Beetle","Jeep-Wrangler","Toyota-Tacoma","Toyota-Tundra","Mercedes-Benz-C-Class","Jeep-Grand-Cherokee","Jeep-Cherokee","Lexus-RX","Mercedes-Benz-E-Class","Ford-Explorer","Toyota-RAV4","Toyota-Prius","Mercedes-Benz-GLE-Class","Subaru-Forester","Nissan-Altima","Ford-F-Series","Audi-Q3","BMW-M3","Chevrolet-Tahoe","Cadillac-Escalade","Ford-Ranger","Audi-A8","Audi-A4","Lexus-ES","Lexus-GS","Lexus-LX","BMW-8-Series","Volkswagen-Jetta","Mercedes-Benz-GLC-Class","BMW-X3","Dodge-Durango","Toyota-Land-Cruiser","Lexus-IS","BMW-4-Series","Nissan-Rogue","GMC-Sierra","Ford-Escape","Hyundai-Sonata","Chevrolet-Colorado","BMW-3-Series","Ford-GT","Nissan-Sentra","Audi-S4","Jeep-Renegade","Chevrolet-Malibu","Lexus-CT","Acura-MDX","Toyota-Supra","Honda-Prelude","Ford-Fusion","BMW-X1","Toyota-Celica","Chevrolet-Monte-Carlo","Lexus-GX","Subaru-Legacy" };


    vector<string>colors = { "White", "Silver" , "Gray" , "Black" , "Red" , "Maroon" , "Yellow" , "Olive" , "Lime" , "Green" , "Aqua" , "Teal" , "Blue" , "Navy" , "Fuchsia" , "Purple" };
    vector<int>prices = { 5289383,7930886,2692777,5636915,8747793,5238335,10885386,10760492,7516649,10641421,6202362,1490027,4368690,3520059,5897763,8513926,6180540,1383426,5089172,4455736,6005211,2595368,5702567,7956429,7465782,2021530,9722862,4665123,6174067,9703135,2513929,2979802,6634022,6723058,10133069,6898167,10961393,10018456,9175011,7478042,2176229,4377373,10484421,5544919,9413784,7898537,5575198,4594324,10798315,9664370,10566413,5803526,3776091,5268980,2759956,10241873,8806862,3999170,3906996,6497281,2702305,5420925,8477084,8336327,3660336,10126505,6750846,3621729,1661313,4925857,2616124,5353895,10819582,2100545,9898814,9233367,1515434,6990364,5344043,1313750,8171087,7426808,6117276,10947178,1695788,10393584,2705403,9502651,3392754,5612399,4999932,5095060,2549676,4993368,4947739,5210012,6636226,10698586,10348094,7297539 };
    vector<int>kilometer = { 583,486,777,115,593,735,586,492,649,621,762,427,690,59,163,326,540,226,372,536,411,168,167,429,182,730,462,323,467,735,329,602,422,658,269,567,593,56,611,442,229,573,421,119,184,137,798,724,715,370,13,326,91,180,756,273,462,770,596,481,705,125,284,327,336,105,446,129,513,257,124,295,382,545,414,567,234,764,43,150,687,408,476,778,588,784,603,251,754,399,732,660,76,568,539,412,226,186,94,739 };


    for (int i = 0; i < 200; i++) {
        FILE* file = nullptr;
        const char* filename = "input.txt";
        if (freopen_s(&file, filename, "w", stdout) != 0) {
            cerr << "Error opening file " << filename << endl;
            return 1; // Exit if file couldn't be opened
        }
        cout << username[rand() % username.size()] << " ";
        cout << carsmodels[rand() % carsmodels.size()] << " ";
        cout << prices[rand() % prices.size()] << " ";
        cout << kilometer[rand() % kilometer.size()] << " ";
        cout << colors[rand() % colors.size()] << "\n";
        fclose(stdout);     
        system("insert.bat");
    }

    return 0;

}

/*

#!/bin/bash
USER="???"
PASSWORD="????"
DATABASE="?????"
while IFS=" " read -r username MODEL PRICE KILOMETERS COLOR
do
  mysql -u $USER -p$PASSWORD $DATABASE <<EOF
    INSERT INTO car (username, model, price, walked_kilometers, color)
    VALUES ('$username', '$MODEL', $PRICE, $KILOMETERS, '$COLOR');
EOF

    echo "Data inserted successfully for $BRAND $MODEL!"
done < input.txt

*/



