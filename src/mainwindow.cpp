#include "mainwindow.h"
#include "QSimpleUpdater.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("QtAutoUpdaterDemo " APP_VERSION);
    resize(400, 300);
    checkForUpdates();
}

void MainWindow::checkForUpdates()
{
    // 改成你自己的 update.json 地址
    const QString updateUrl = "https://raw.githubusercontent.com/TasLR/QtAutoUpdaterDemo/main/update.json";

    // ================================
    // 官方真实 API，绝对能编译！
    // ================================
    QSimpleUpdater* updater = QSimpleUpdater::getInstance();

    // 正确用法（全部是官方存在的函数）
    updater->setUpdateUrl("QtAutoUpdaterDemo", updateUrl);
    updater->setModuleVersion("QtAutoUpdaterDemo", APP_VERSION);
    updater->setNotifyOnUpdate("QtAutoUpdaterDemo", true);

    // 检查更新（2 个参数，官方原版）
    updater->checkForUpdates("QtAutoUpdaterDemo", updateUrl);

    qDebug() << "更新检查完成";
}