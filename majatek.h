#ifndef MAJATEK_H
#define MAJATEK_H
#pragma once

class majatek{
    private:
        long int Auto;
        long long int Nieruchomosc;
    public:
        majatek() : Auto(0), Nieruchomosc(0) {}
        ~majatek() {}
        majatek& operator= (const majatek& majatek);
        majatek& operator+ (const majatek& majatek);
        majatek& operator- (const majatek& majatek);

    //Settery
        void SetAuto(const int& _Auto);
        void SetNieruchomosc(const int& _Nieruchomosc);
    //Gettery
        int GetAuto();
        int GetNieruchomosc();
};
#endif