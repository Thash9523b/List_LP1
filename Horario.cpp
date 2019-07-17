#include "Horario.h"

        Horario::Horario(){

        }
        Horario::Horario(int hora, int minu, int seg){
            setHora(hora);
            setMinu(minu);
            setSeg(seg);
        }

        Horario::setHorario(int hora, int minu, int seg){
            setHora(hora);
            setMinu(minu);
            setSeg(seg);
        }

        void Horario::setHora(int hora){
            if(hora<=0 || hora>23){
                this->hora=0;
            }else{
                this->hora = hora;
            }
        }
        void Horario::setMinu(int minu){
            if(minu<=0 || minu>59){
                this->minu=0;
            }else{
                this->minu=minu;
            }
        }

        void Horario::setSeg(int seg){
            if(seg<=0 || seg>59){
                this->seg=0;
            }else{
                this->seg=seg;
            }
        }

        int Horario::getHora(){
            return hora;
        }
        int Horario::getMinu(){
            return minu;
        }
        int Horario::getSeg(){
            return seg;
        }

        void Horario::avancaSegundo(){
            if (seg>=59){
                seg=0;
                minu++;
            }
            if (minu>=59){
                minu=0;
                hora++;
            }
            if (hora>=23){
                hora=0;
            }else{
                seg++;
            }

        }

