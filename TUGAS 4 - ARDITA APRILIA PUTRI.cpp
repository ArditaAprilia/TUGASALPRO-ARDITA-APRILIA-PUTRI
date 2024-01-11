#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "========================================"<<endl;
    cout << "||                                    ||"<<endl;
    cout << "||           ADVENTURE GAME           ||"<<endl;
    cout << "||                                    ||"<<endl;
	cout << "========================================"<<endl<<endl;
	cout <<"Tekan apapun untuk lanjut..."<<endl;
	system("pause>0");
	system("cls");
	cout << "========================================"<<endl;
    cout << "||                                    ||"<<endl;
    cout << "||           ADVENTURE GAME           ||"<<endl;
    cout << "||                                    ||"<<endl;
	cout << "========================================"<<endl;
	
    string playerName;
    int playerStats[3] = {100, 100, 100};
    string weapons = "Tangan Kosong";
    bool gameOver = false;

    cout << "========== >> Pilih karakter : ========== >>"<<endl;
    cout << "|| [1] Ksatria  || "<<endl;
    cout << "|| [2] Pemanah  || "<<endl;
    cout << "|| [3] Medis    || "<<endl;
    cout << "================== "<<endl;
    cout<<endl;
    cout << "Pilihan [1-3] ======= >> ";

    int characterChoice;
    cin >> characterChoice;

    switch (characterChoice) {
        case 1:
            playerName = "Ksatria";
            break;
        case 2:
            playerName = "Pemanah";
            break;
        case 3:
            playerName = "Medis";
            break;
        default:
            cout << "Pilihan tidak valid!"<<endl;
            return 1;
    }

    int actionChoice;
    do {
        cout <<endl<< "+--------------------------------------+"<<endl;
        cout << " Status\t\t [" << playerName << "]"<<endl;
        cout << " Kesehatan\t [" << playerStats[0] << "]"<<endl;
        cout << " Pengalaman\t [" << playerStats[1] << "]"<<endl;
        cout << " Koin\t\t [" << playerStats[2] << "]"<<endl;
        cout << " Senjata\t [" << weapons << "]"<<endl;
        cout << "+--------------------------------------+"<<endl<<endl;

  
        cout << "============ >> Pilih aksi : ============ >>"<<endl;
        cout << "|| [1] Serang (-20 HP, +20 XP)            ||"<<endl;
        cout << "|| [2] Pulihkan (+20 Kesehatan, -20 Coin) ||"<<endl;
        cout << "|| [3] Beli Senjata                       ||"<<endl;
        cout << "|| [0] Keluar                             ||"<<endl;
        cout << "=========================================== "<<endl;
        cout<<endl;
        cout << "Pilihan [0-3] ======= >>";
        cin >> actionChoice;

        switch (actionChoice) {
            case 1:
                cout << "[INFO] Anda menyerang monster dengan Tangan kosong" <<endl;
                playerStats[0] -= 20;
                playerStats[1] += 20;
                if(playerStats[0] < 0){
                    gameOver = true;
                }
                break;
            case 2:
                cout << "[INFO] Anda pulihkan kesehatan!"<<endl;
                playerStats[0] += 20;
                playerStats[2] -= 20;
                if(playerStats[0] < 0){
                    gameOver = true;
                }
                break;
            case 3:
            	cout<<endl;
            	cout << "+--------------------------------------+"<<endl;
            	cout << "|              TOKO SENJATA            |"<<endl;
            	cout << "+--------------------------------------+"<<endl;
                cout << "======== >> Pilihan Senjata : ======= >>"<<endl;
                cout << "[1] Panah [10 Koin]"<<endl;
                cout << "[2] Pedang [20 Koin]"<<endl;
                cout<<endl;
                cout << "Pilihan [1-2] >> ";
                int weaponChoice;
                cin >> weaponChoice;

                switch (weaponChoice) {
                    case 1:
                        playerStats[0] -= 20;
                        if (playerStats[2] >= 10) {
                            weapons = "Panah";
                            playerStats[2] -= 10;
                            cout << "[INFO] Anda membeli Panah!"<<endl;
                        } else {
                            cout << "[WARNING] Koin tidak mencukupi!"<<endl;
                        }
                        break;
                    case 2:
                        playerStats[0] -= 20;
                        if (playerStats[2] >= 20) {
                            weapons = "Pedang";
                            playerStats[2] -= 20;
                            cout << "[INFO] Anda membeli Pedang!"<<endl;
                        } else {
                            cout << "[WARNING] Koin tidak mencukupi!"<<endl;
                        }
                        break;
                    default:
                        cout << "[WARNING] Pilihan tidak valid!"<<endl;
                }
                break;
            case 0:
                cout << "Terima kasih telah bermain!"<<endl;
                break;
            default:
                cout << "[WARNING] Pilihan tidak valid!"<<endl;
        }

    } while (actionChoice != 0 && !gameOver);

    return 0;
}

