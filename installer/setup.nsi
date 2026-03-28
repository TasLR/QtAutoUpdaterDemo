!define APP_NAME "QtAutoUpdaterDemo"
!define COMPANY "Demo"
!define URL "https://github.com/TasLR/QtAutoUpdaterDemo"

SetCompressor /SOLID lzma
Name "${APP_NAME}"
OutFile "${APP_NAME}-Setup-${APP_VERSION}.exe"
InstallDir "$PROGRAMFILES64\${APP_NAME}"

!include "MUI2.nsh"

!insertmacro MUI_PAGE_WELCOME
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!insertmacro MUI_PAGE_FINISH

!insertmacro MUI_LANGUAGE "SimpChinese"

Section
    SetOverwrite on
    # 🔥 你的真实路径：build/Release/
    File /r "${BUILD_DIR}\Release\*"
    CreateShortCut "$DESKTOP\${APP_NAME}.lnx" "$INSTDIR\${APP_NAME}.exe"
SectionEnd