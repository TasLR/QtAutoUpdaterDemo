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
    // 这里改成你自己的仓库地址
    const QString updateUrl = "https://raw.githubusercontent.com/TasLR/QtAutoUpdaterDemo/main/update.json";

    auto updater = QSimpleUpdater::getInstance();
    updater->setModuleVersion("QtAutoUpdaterDemo", APP_VERSION);
    updater->setNotifyOnUpdate("QtAutoUpdaterDemo", true);
    updater->checkForUpdates("QtAutoUpdaterDemo", updateUrl);

    qDebug() << "Update check done.";
}