#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <QPainter>
#include <QDebug>
#include <QGraphicsView>
#include "./include/gamemode.h"
#include "./include/about.h"
#include "./include/scene.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    GameModeInfo &getModeInfo();
    void initScene();

private slots:
    void on_about_triggered();
    void on_exitGame_triggered();
    void updateTime();
    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
    QTime time;
    QTimer timer;
    bool is_start;
    GameModeInfo mode_info_;
    Scene *scene_;
};
#endif // MAINWINDOW_H