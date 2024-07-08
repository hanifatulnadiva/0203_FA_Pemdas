#include <iostream>
using namespace std; 
 
class MasukUniversitas { 
    private: 
        int uangPendaftaran, uangSemesterPertama, uangBangunan, totalBiaya;
    public: 
        MasukUniversitas() {        
            uangPendaftaran = 0;
            uangSemesterPertama =0;
            uangBangunan = 0;
            totalBiaya = 0; 
        }  
    virtual void namaJalurMasuk() 
    { return; } 
    virtual int hitungTotalBiaya() = 0;
    virtual void tampilkanTotalBiaya()
    {
        return;
    }
    virtual void input()
    {
        return;
    }
    void setUangPendaftaran(int nilai) 
    {        
        this->uangPendaftaran = nilai; 
    }     
    float getUangPendaftaran() 
    {        
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai) 
    {        
        this->uangSemesterPertama = nilai; 
    }     
    float getUangSemesterPertama() 
    {        
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) 
    {        
        this->uangBangunan= nilai; 
    }     
    float getUangBangunan() 
    {        
        return uangBangunan;
    }

    void setTotalBiaya(int nilai) 
    {        
        this->totalBiaya = nilai; 
    }     
    float getTotalBiaya() 
    {        
        return totalBiaya;
    }
};
  
class SNBT : public MasukUniversitas
{  
    private:
        int totalBiaya;
    public:
        void input ()
        {
            int nilai;
            cout << "masukkan uang pendaftaran:";
            cin >> nilai;
            setUangPendaftaran(nilai);
            cout << "masukkan uang semester pertama:";
            cin >> nilai;
            setUangSemesterPertama(nilai);
            cout << "masukkan uang bangunan:";
            cin >> nilai;
            setUangBangunan(nilai);
        }
        int hitungTotalBiaya()
        {
            return getUangPendaftaran() + getUangSemesterPertama() + getUangBangunan();
        }
        void tampilkanTotalBiaya()
        {
            cout << "total Biaya: " << hitungTotalBiaya()<< endl;
            if (hitungTotalBiaya() <= 5000000)
            {
                cout << "kategori : Murah" << endl;
                cout << " Rekomendasi : Direkomendasikan" << endl;
            }
            else if(hitungTotalBiaya() > 10000000 )
            {
                cout << "Kategori : Mahal" << endl;
                cout << "Rekomendasi : Tidak Direkomendasikan" << endl;
            }
            else 
            {
                cout << "kategori: Sedang" <<  endl;
                cout << "Rekomendasi : Dipertimbangkan" << endl;
            }
        }
};  
class SNBP : public MasukUniversitas
{
    private:
        int totalBiaya;
    public:
        void input ()
        {
            int nilai;
            cout << "masukkan uang pendaftaran:";
            cin >> nilai;
            setUangPendaftaran(nilai);
            cout << "masukkan uang semester pertama:";
            cin >> nilai;
            setUangSemesterPertama(nilai);
        }
        int hitungTotalBiaya()
        {
            return getUangPendaftaran() + getUangSemesterPertama();
        }
        void tampilkanTotalBiaya()
        {
            cout << "total Biaya: " << hitungTotalBiaya() << endl;
            if (hitungTotalBiaya() <= 5000000)
            {
                cout << "kategori : Murah" << endl;
                cout << " Rekomendasi : Direkomendasikan" << endl;
            }
            else if(hitungTotalBiaya() > 10000000 )
            {
                cout << "Kategori : Mahal" << endl;
                cout << "Rekomendasi : Tidak Direkomendasikan" << endl;
            }
            else 
            {
                cout << "kategori: Sedang" <<  endl;
                cout << "Rekomendasi : Dipertimbangkan" << endl;
            }
        }
};  
int main()
{
    int pilihan;
    SNBT snbt;
    SNBP snbp;
    do
    {
        cout << "Pilih Jalur Masuk " << endl;
        cout << "1. SNBT" << endl;
        cout << "2. SNBP" << endl;
        cout << "3. keluar" << endl;
        cout << "pilih:";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            snbt.input();
            //snbt.hitungTotalBiaya();
            snbt.tampilkanTotalBiaya();
            break;
        case 2:
            snbp.input();
            //snbp.hitungTotalBiaya();
            snbp.tampilkanTotalBiaya();
            break;
        case 3:
            break;
        default:
            cout << "pilihan tidak ada" << endl;
            break;
        }

    } while (pilihan != 3);
    return 0;
}
