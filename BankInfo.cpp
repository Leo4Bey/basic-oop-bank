#include <iostream>
#include <string>

class BankaHesabi {
    private:
        int HesapNo;
        std::string HesapSahibi;
        float Bakiye;
    public:
        BankaHesabi(int no, std::string sahip, float baslangicBakiyesi) {
            HesapNo = no;
            HesapSahibi = sahip;
            Bakiye = baslangicBakiyesi;
        }

        int getHesapNo() const {
            return HesapNo;
        }

        std::string getHesapSahibi() const {
            return HesapSahibi;
        }

        float getBakiye() const {
            return Bakiye;
        }

        void paraCek(float miktar) {
            if (miktar > 0 && miktar <= Bakiye) {
                Bakiye -= miktar;
                std::cout << HesapNo << " Nolu hesaptan" << miktar << " TL tutarında para çekildi güncel bakiye: " << Bakiye << " TL\n";
            }
            else if (miktar > Bakiye) {
                std::cout << "Yetersiz bakiye çekebileceğin maksimum tutar " << Bakiye << " TL\n";
            }
            else {
                std::cout << "pozitif bir değer girmeniz lazım";
            }
        }

        void paraYatir(float miktar) {
            if (miktar > 0) {
                Bakiye += miktar;
                std::cout << miktar << "tutarında bakiye " << HesapNo << " Nolu hesaba yatırıldı güncel bakiye: " << Bakiye << "TL\n";
            }
            else {
                std::cout << "Geçersiz tutar";
            }
        }
};


int main() {
    
    BankaHesabi hesap(125488,"Leo",50.47);
    std::cout << "Hesap bakiyesi: " << hesap.getBakiye() << "\n";
    hesap.paraYatir(2587.47);
    hesap.paraCek(145.47);
    return 0;
}
