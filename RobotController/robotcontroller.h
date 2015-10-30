#ifndef ROBOTCONTROLLER_H
#define ROBOTCONTROLLER_H

#include <QMainWindow>

namespace Ui {
class RobotController;
}

class RobotController : public QMainWindow
{
    Q_OBJECT

public:
    explicit RobotController(QWidget *parent = 0);
    ~RobotController();

private slots:
    void on_motorControlSlider_1_sliderPressed();

    void on_motorControlSlider_1_valueChanged(int value);

    void on_motorControlSlider_2_valueChanged(int value);

    void on_motorControlSlider_3_valueChanged(int value);

    void on_motorControlSlider_4_valueChanged(int value);

    void on_motorControlSlider_5_valueChanged(int value);

private:
    Ui::RobotController *ui;
};

#endif // ROBOTCONTROLLER_H
