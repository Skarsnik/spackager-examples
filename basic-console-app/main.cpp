#include <QCoreApplication>
#include <QSysInfo>
#include <QtGlobal>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool standalone = false;
#ifdef SQPROJECT_STANDALONE
    standalone = true;
#endif
    printf("Standalone: %s\n", standalone ? "true" : "false");
    printf("Build Qt version: %s\n", QT_VERSION_STR);
    printf("Running Qt verion: %s\n", qVersion());
    printf("Build Arch: %s\n", QSysInfo::buildCpuArchitecture().toLocal8Bit().constData());
    printf("Running Arch: %s\n", QSysInfo::currentCpuArchitecture().toLocal8Bit().constData());
    return 0;
}
