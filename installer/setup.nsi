!define APP_NAME "QtAutoUpdaterDemo"
!define COMPANY "Demo"
!define URL "https://github.com/TasLR/QtAutoUpdaterDemo"

SetCompressor /SOLID lzma
Name "${APP_NAME}"
OutFile "${APP_NAME}-Setup-${APP_VERSION}.exe"
InstallDir "$PROGRAMFILES64\${APP_NAME}"

Page directory
Page instfiles

Section
    SetOverwrite on
    # 🔥 直接读取当前目录，100% 找到
    File /r *
    CreateShortCut "$DESKTOP\${APP_NAME}.lnk" "$INSTDIR\${APP_NAME}.exe"
SectionEnd