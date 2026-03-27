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

    updater->setModuleVersion(updateUrl , APP_VERSION);
    updater->setNotifyOnUpdate(updateUrl, true);
    updater->checkForUpdates( updateUrl);
    qDebug() << "更新检查完成";
}