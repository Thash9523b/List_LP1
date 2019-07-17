#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        Horario(int hora, int minu, int seg);

        setHorario(int hora, int minu, int seg);

        void setHora(int hora);
        void setMinu(int minu);
        void setSeg(int seg);

        int getHora();
        int getMinu();
        int getSeg();

        void avancaSegundo();

    protected:

    private:
        int hora, minu, seg;
};

#endif // HORARIO_H
