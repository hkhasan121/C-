#include<bits/stdc++.h>
using namespace std;
class SmartPhone{
    private:
    string brand;
    string model;
    double price;
    int storageCapacity;
    int ramSize;
    public:
    void setBrand(string b){
        brand=b;
    }
    void setModel(string b){
        model=b;
    }
    void setPrice(double b){
        price=b;
    }
    void setStorage(int b){
        storageCapacity=b;
    }
    void setRam(int b){
        ramSize=b;
    }
    string getBrand(){
        return brand;
    }
    int getStorageCapacity(){
        return storageCapacity;
    }
    string getModel(){
        return model;
    }
    double getPrice(){
        return price;
    }
    int getRam(){
        return ramSize;
    }

    void DisplayInfo(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Price: $"<<price<<endl;
        cout<<"Storage Capacity: "<<storageCapacity<<"GB"<<endl;
        cout<<"Ram Size: "<<ramSize<<"GB"<<endl;
    }
};

int main(){
    SmartPhone realme;
    realme.setBrand("Realme");
    realme.setModel("12 Plus");
    realme.setPrice(299);
    realme.setStorage(256);
    realme.setRam(8);
    cout<<"Realme Smartphone Info:"<<endl<<endl;
    realme.DisplayInfo();
    cout<<endl;

    SmartPhone xiaomi;
    xiaomi.setBrand("Xiaomi");
    xiaomi.setModel(" Note 13 Pro Plus");
    xiaomi.setPrice(499);
    xiaomi.setStorage(256);
    xiaomi.setRam(12);
    cout<<"Xiaomi Smartphone Info:"<<endl<<endl;
    xiaomi.DisplayInfo();
    cout<<endl;

    SmartPhone samsung;
    samsung.setBrand("Samsung");
    samsung.setModel("Galaxy S24 Ultra");
    samsung.setPrice(999);
    samsung.setStorage(512);
    samsung.setRam(12);
    cout<<"Samsung Smartphone Info:"<<endl<<endl;
    samsung.DisplayInfo();
    cout<<endl;

    return 0;
}