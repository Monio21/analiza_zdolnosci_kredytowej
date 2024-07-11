#include "majatek.h"

        majatek& majatek :: operator= (const majatek& majatek){
            Auto = majatek.Auto;
            Nieruchomosc = majatek.Nieruchomosc;
            return *this;
        }
         majatek& majatek :: operator+ (const majatek& majatek){
            Auto += majatek.Auto;
            Nieruchomosc += majatek.Nieruchomosc;
            return *this;
         }
        majatek& majatek :: operator- (const majatek& majatek){
            Auto -= majatek.Auto;
            Nieruchomosc -= majatek.Nieruchomosc;
            return *this;
        }
        void majatek :: SetAuto(const int& _Auto){
            Auto = _Auto;
        }
        void majatek :: SetNieruchomosc(const int& _Nieruchomosc){
            Nieruchomosc = _Nieruchomosc;
        }
    //Gettery
        int majatek :: GetAuto(){
            return Auto;
        }
        int majatek :: GetNieruchomosc(){
            return Nieruchomosc;
        }
