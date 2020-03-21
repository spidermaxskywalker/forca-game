#include "forcamainwindow.h"
#include "ui_forcamainwindow.h"

ForcaMainWindow::ForcaMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForcaMainWindow)
{
    ui->setupUi(this);
}

ForcaMainWindow::~ForcaMainWindow()
{
    delete ui;
}

void ForcaMainWindow::choose_letter(char letter, QPushButton* tecla) {
    tecla->setDisabled(true);
    QMessageBox message(this);
    message.setText((std::string("Letra ") + letter).c_str());
    message.exec();
}

void ForcaMainWindow::on_tecla_A_clicked() { choose_letter('A', ui->tecla_A); }
void ForcaMainWindow::on_tecla_B_clicked() { choose_letter('B', ui->tecla_B); }
void ForcaMainWindow::on_tecla_C_clicked() { choose_letter('C', ui->tecla_C); }
void ForcaMainWindow::on_tecla_D_clicked() { choose_letter('D', ui->tecla_D); }
void ForcaMainWindow::on_tecla_E_clicked() { choose_letter('E', ui->tecla_E); }
void ForcaMainWindow::on_tecla_F_clicked() { choose_letter('F', ui->tecla_F); }
void ForcaMainWindow::on_tecla_G_clicked() { choose_letter('G', ui->tecla_G); }
void ForcaMainWindow::on_tecla_H_clicked() { choose_letter('H', ui->tecla_H); }
void ForcaMainWindow::on_tecla_I_clicked() { choose_letter('I', ui->tecla_I); }
void ForcaMainWindow::on_tecla_J_clicked() { choose_letter('J', ui->tecla_J); }
void ForcaMainWindow::on_tecla_K_clicked() { choose_letter('K', ui->tecla_K); }
void ForcaMainWindow::on_tecla_L_clicked() { choose_letter('L', ui->tecla_L); }
void ForcaMainWindow::on_tecla_M_clicked() { choose_letter('M', ui->tecla_M); }
void ForcaMainWindow::on_tecla_N_clicked() { choose_letter('N', ui->tecla_N); }
void ForcaMainWindow::on_tecla_O_clicked() { choose_letter('O', ui->tecla_O); }
void ForcaMainWindow::on_tecla_P_clicked() { choose_letter('P', ui->tecla_P); }
void ForcaMainWindow::on_tecla_Q_clicked() { choose_letter('Q', ui->tecla_Q); }
void ForcaMainWindow::on_tecla_R_clicked() { choose_letter('R', ui->tecla_R); }
void ForcaMainWindow::on_tecla_S_clicked() { choose_letter('S', ui->tecla_S); }
void ForcaMainWindow::on_tecla_T_clicked() { choose_letter('T', ui->tecla_T); }
void ForcaMainWindow::on_tecla_U_clicked() { choose_letter('U', ui->tecla_U); }
void ForcaMainWindow::on_tecla_V_clicked() { choose_letter('V', ui->tecla_V); }
void ForcaMainWindow::on_tecla_W_clicked() { choose_letter('W', ui->tecla_W); }
void ForcaMainWindow::on_tecla_X_clicked() { choose_letter('X', ui->tecla_X); }
void ForcaMainWindow::on_tecla_Y_clicked() { choose_letter('Y', ui->tecla_Y); }
void ForcaMainWindow::on_tecla_Z_clicked() { choose_letter('Z', ui->tecla_Z); }


