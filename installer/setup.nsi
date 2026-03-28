!define APP_NAME "QtAutoUpdaterDemo"
!define COMPANY "Demo"
!define URL "https://github.com/TasLR/QtAutoUpdaterDemo"

SetCompressor /SOLID lzma
Name "${APP_NAME}"
OutFile "${APP_NAME}-Setup-${APP_VERSION}.exe"
InstallDir "$PROGRAMFILES64\${APP_NAME}"

# ---------------------------------
# 🔥 删掉所有 MUI2，用默认界面
# ---------------------------------
Page directory
Page instfiles

Section
    SetOverwrite on
    File /r "${BUILD_DIR}\Release\*"
    CreateShortCut "$DESKTOP\${APP_NAME}.lnk" "$INSTDIR\${APP_NAME}.exe"
SectionEnd