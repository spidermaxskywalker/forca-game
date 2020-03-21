#ifndef FORCAMAINWINDOW_H
#define FORCAMAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
    class ForcaMainWindow;
}

class ForcaMainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit ForcaMainWindow(QWidget *parent = 0);
        ~ForcaMainWindow();

    private slots:
        void on_tecla_A_clicked();
        void on_tecla_B_clicked();
        void on_tecla_C_clicked();
        void on_tecla_D_clicked();
        void on_tecla_E_clicked();
        void on_tecla_F_clicked();
        void on_tecla_G_clicked();
        void on_tecla_H_clicked();
        void on_tecla_I_clicked();
        void on_tecla_J_clicked();
        void on_tecla_K_clicked();
        void on_tecla_L_clicked();
        void on_tecla_M_clicked();
        void on_tecla_N_clicked();
        void on_tecla_O_clicked();
        void on_tecla_P_clicked();
        void on_tecla_Q_clicked();
        void on_tecla_R_clicked();
        void on_tecla_S_clicked();
        void on_tecla_T_clicked();
        void on_tecla_U_clicked();
        void on_tecla_V_clicked();
        void on_tecla_W_clicked();
        void on_tecla_X_clicked();
        void on_tecla_Y_clicked();
        void on_tecla_Z_clicked();

    private:
        Ui::ForcaMainWindow *ui;
        void choose_letter(char letter, QPushButton* tecla);
};

#endif // FORCAMAINWINDOW_H
