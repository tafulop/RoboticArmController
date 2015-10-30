#include "robotcontroller.h"
#include "ui_robotcontroller.h"

RobotController::RobotController(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RobotController)
{
    ui->setupUi(this);
}

RobotController::~RobotController()
{
    delete ui;
}

void RobotController::on_motorControlSlider_1_sliderPressed()
{
   // ui->motorLCD_1->display(ui->motorControlSlider_1->value());
}

void RobotController::on_motorControlSlider_1_valueChanged(int value)
{
     ui->motorLCD_1->display(ui->motorControlSlider_1->value());
}

void RobotController::on_motorControlSlider_2_valueChanged(int value)
{
    ui->motorLCD_2->display(ui->motorControlSlider_2->value());
}

void RobotController::on_motorControlSlider_3_valueChanged(int value)
{
    ui->motorLCD_3->display(ui->motorControlSlider_3->value());
}


void RobotController::on_motorControlSlider_4_valueChanged(int value)
{
    ui->motorLCD_4->display(ui->motorControlSlider_4->value());
}

void RobotController::on_motorControlSlider_5_valueChanged(int value)
{
    ui->motorLCD_5->display(ui->motorControlSlider_5->value());
}
