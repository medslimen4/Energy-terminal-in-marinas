#include <string>

class NotificationManagerToServer{
    private:


    public:


    void ConsommationElectriqueCourant();
    void ConsommationEauCourant();
    void SeuilConsommationElectriqueAtteindre();
    void SeuilConsommationEauAtteindre();
    void FinConsommationElectrique();
    void FinConsommationEau();

    void notify();



};