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
    // 👉 改成你自己的 update.json 地址
    const QString updateUrl = "https://raw.githubusercontent.com/TasLR/QtAutoUpdaterDemo/main/update.json";

    auto updater = QSimpleUpdater::getInstance();

    // ✅ 正确用法：只设置 URL，新版不需要传 name 了
    updater->setVersionKey("version");           // JSON 版本字段
    updater->setDownloadUrlKey("windows.download"); // 下载链接路径
    updater->setChangelogKey("windows.changelog"); // 更新日志路径

    updater->setApplicationVersion(APP_VERSION); // 当前版本
    updater->checkForUpdates(updateUrl);         // ✅ 只传 1 个参数

    qDebug() << "更新检查完成";
}