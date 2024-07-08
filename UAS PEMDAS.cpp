#include <iostream>
using namespace std;

class MasukUniversitas{
private:// isi access modifier disini
    int uangPendaftaran ;
    // isi daftar variable yang dibutuhkan di bawah ini 

public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini 
        {
            cout << "Masukan Uang Pendaftaran: " << uangPendaftaran << "\n" << endl;
        }
    }

    virtual void namaJalurMasuk() { return; }
    
    // isi disini dengan fungsi virtual yang dibutuhkan 

    void setUangPendaftaran(int i, string value) {
        this->uangPendaftaran = 100000;
    }

    float getUangPendaftaran() {
        return uangPendaftaran;
    }

    // isi setter dan getter variable yang dibutuhkan di bawah ini 
};

class SNBT : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBT 
};

class SNBP : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBP 
};

int main() {
    // isi disini untuk fungsi main 
}

